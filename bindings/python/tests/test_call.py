import pytest

import caqtus_parsing
from caqtus_parsing.nodes import Call, Variable, Quantity, UnitTerm


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


def test_call_variables():
    s = "f(a, b.c)"

    result = caqtus_parsing.parse(s)
    assert result == Call(
        function="f", args=(Variable(names=("a",)), Variable(names=("b", "c")))
    )


def test_call_nested():
    s = "f(g())"

    result = caqtus_parsing.parse(s)
    assert result == Call(function="f", args=(Call(function="g"),))


def test_call_quantity():
    s = "f(1.0m)"

    result = caqtus_parsing.parse(s)
    assert result == Call(
        function="f",
        args=(
            Quantity(
                1.0,
                (UnitTerm("m"),),
            ),
        ),
    )


def test_call_quantity_with_exponent():
    s = "f(1.0m**2)"

    result = caqtus_parsing.parse(s)
    assert result == Call(
        function="f",
        args=(
            Quantity(
                1.0,
                (UnitTerm("m", 2),),
            ),
        ),
    )


def test_call_quantity_product():
    s = "f(1.0m**2*kg/s)"

    result = caqtus_parsing.parse(s)
    assert result == Call(
        function="f",
        args=(
            Quantity(
                1.0,
                (
                    UnitTerm("m", 2),
                    UnitTerm("kg"),
                ),
                (UnitTerm("s"),),
            ),
        ),
    )


def test_invalid_dotted_name():
    s = "f.g()"

    with pytest.raises(caqtus_parsing.InvalidSyntaxError):
        caqtus_parsing.parse(s)
