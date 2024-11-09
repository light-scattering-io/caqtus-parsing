from tree_sitter import Language, Parser, Node

from ._binding import language  # noqa: F401
from .nodes import Variable, Expression

CAQTUS_LANGUAGE = Language(language())

parser = Parser(CAQTUS_LANGUAGE)


def parse(code: str) -> Expression:
    tree = parser.parse(bytes(code, "utf-8"))

    root_node = tree.root_node
    assert root_node.type == "expression"
    assert root_node.text

    if root_node.has_error:
        error_node = find_first_error(root_node)
        assert error_node is not None
        raise InvalidSyntaxError(
            f"Invalid syntax encountered while parsing expression <{code}>",
            (
                "",
                1,
                error_node.byte_range[0] + 1,
                root_node.text.decode("utf-8"),
                1,
                error_node.byte_range[1] + 1,
            ),
        )

    return build_expression(tree.root_node)


def find_first_error(node: Node) -> Node | None:
    if node.is_error or node.is_missing:
        return node

    for child in node.children:
        error = find_first_error(child)
        if error:
            return error


def build_expression(node: Node) -> Expression:
    assert node.type == "expression"
    assert len(node.children) == 1
    child = node.children[0]
    assert child.text

    match child:
        case Node(type="variable"):
            return build_variable(node.children[0])
        case Node(type="integer"):
            return int(child.text.decode("utf-8"))
        case Node(type="float"):
            return float(child.text.decode("utf-8"))
        case Node(type="quantity"):
            raise NotImplementedError("Quantity parsing is not implemented yet")
        case Node(type="call"):
            raise NotImplementedError("Call parsing is not implemented yet")
        case _:
            raise AssertionError(f"Unexpected node type: {node.type}")


def build_variable(node: Node) -> Variable:
    assert node.type == "variable"

    names = []

    for child in node.children:
        assert child.text
        names.append(child.text.decode("utf-8"))

    return Variable(tuple(names))


class ParsingError(Exception):
    pass


class InvalidSyntaxError(ParsingError, SyntaxError):
    pass
