import caqtus_parsing
from caqtus_parsing.nodes import Call


def test_call_no_args():
    s = "f()"

    result = caqtus_parsing.parse(s)
    assert result == Call(function="f")


def test_call_single_arg():
    s = "f(1)"

    result = caqtus_parsing.parse(s)
    assert result == Call(function="f", args=(1,))


def test_call_multiple_args():
    s = "f(1, 2)"

    result = caqtus_parsing.parse(s)
    assert result == Call(function="f", args=(1, 2))

