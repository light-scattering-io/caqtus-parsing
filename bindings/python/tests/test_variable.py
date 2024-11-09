import pytest

from tree_sitter_caqtus import parse, InvalidSyntaxError
from tree_sitter_caqtus.nodes import Variable


def test_parse_variable():
    assert parse("variable_name") == Variable(("variable_name",))


def test_parse_variable_with_multiple_names():
    assert parse("variable.attribute_name") == Variable(("variable", "attribute_name"))


def test_parse_invalid_variable_name():
    with pytest.raises(InvalidSyntaxError):
        parse("vfdsg..name")


def test_parse_invalid_variable_name_1():
    with pytest.raises(InvalidSyntaxError):
        parse(".name")
