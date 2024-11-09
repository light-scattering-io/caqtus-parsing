from tree_sitter import Language, Parser, Node

from ._binding import language  # noqa: F401
from .nodes import Variable, Expression

CAQTUS_LANGUAGE = Language(language())

parser = Parser(CAQTUS_LANGUAGE)


def parse(code: str) -> Expression:
    tree = parser.parse(bytes(code, "utf-8"))
    return build_expression_from_node(tree.root_node)


def build_expression_from_node(node: Node) -> Expression:
    match node:
        case Node(type="expression"):

            assert len(node.children) == 1
            return build_variable(node.children[0])
        case _:
            raise AssertionError(f"Unexpected node type: {node.type}")


def build_variable(node: Node) -> Variable:
    assert node.type == "variable"

    names = tuple(child.text.decode("utf-8") for child in node.children)

    return Variable(names)
