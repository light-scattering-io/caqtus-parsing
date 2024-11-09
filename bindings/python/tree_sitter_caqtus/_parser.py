from tree_sitter import Language, Parser, Node

from ._binding import language  # noqa: F401
from .nodes import Variable, Expression

CAQTUS_LANGUAGE = Language(language())

parser = Parser(CAQTUS_LANGUAGE)


def parse(code: str) -> Expression:
    tree = parser.parse(bytes(code, "utf-8"))

    if tree.root_node.has_error:
        error_node = find_first_error(tree.root_node)
        raise InvalidSyntaxError(
            f"Invalid syntax encountered while parsing expression <{code}>",
            (
                "",
                1,
                error_node.byte_range[0] + 1,
                tree.root_node.text.decode("utf-8"),
                1,
                error_node.byte_range[1] + 1,
            ),
        )

    return build_expression_from_node(tree.root_node)


def find_first_error(node: Node) -> Node:
    if node.is_error:
        return node

    for child in node.children:
        error = find_first_error(child)
        if error:
            return error


def build_expression_from_node(node: Node) -> Expression:
    match node:
        case Node(type="expression"):

            return build_variable(node.children[0])
        case _:
            raise AssertionError(f"Unexpected node type: {node.type}")


def build_variable(node: Node) -> Variable:
    assert node.type == "variable"

    names = tuple(child.text.decode("utf-8") for child in node.children)

    return Variable(names)


class ParsingError(Exception):
    pass


class InvalidSyntaxError(ParsingError, SyntaxError):
    pass
