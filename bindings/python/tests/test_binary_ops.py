import pytest

from caqtus_parsing import parse, InvalidSyntaxError
from caqtus_parsing.nodes import (
    Add,
    Subtract,
    Multiply,
    Divide,
    Variable,
    Quantity,
    UnitTerm,
    Power,
    Call,
)


def test_add():
    s = "1 + 2"
    result = parse(s)
    assert result == Add(left=1, right=2)


def test_subtract():
    s = "1 - 2"
    result = parse(s)
    assert result == Subtract(left=1, right=2)


def test_add_subtract():
    s = "1 + 2 - 3"
    result = parse(s)
    assert result == Subtract(left=Add(left=1, right=2), right=3)


def test_multiply():
    s = "1 * 2"
    result = parse(s)
    assert result == Multiply(left=1, right=2)


def test_divide():
    s = "1 / 2"
    result = parse(s)
    assert result == Divide(left=1, right=2)


def test_arithmetic_priority():
    s = "1 + 2 * 3"
    result = parse(s)
    assert result == Add(left=1, right=Multiply(left=2, right=3))

    s = "1 * 2 + 3"
    result = parse(s)
    assert result == Add(left=Multiply(left=1, right=2), right=3)

    s = "1 + 2 * 3 - 4 / 5"
    result = parse(s)
    assert result == Subtract(
        left=Add(left=1, right=Multiply(left=2, right=3)),
        right=Divide(left=4, right=5),
    )

    s = "1 * 2 + 3 / 4 - 5"
    result = parse(s)
    assert result == Subtract(
        left=Add(left=Multiply(left=1, right=2), right=Divide(left=3, right=4)),
        right=5,
    )


def test_parentheses():
    s = "(1 + 2) * 3"
    result = parse(s)
    assert result == Multiply(left=Add(left=1, right=2), right=3)

    s = "1 * (2 + 3)"
    result = parse(s)
    assert result == Multiply(left=1, right=Add(left=2, right=3))

    s = "(1 + 2) * (3 + 4)"
    result = parse(s)
    assert result == Multiply(left=Add(left=1, right=2), right=Add(left=3, right=4))

    s = "(1 + 2) * (3 + 4) - 5"
    result = parse(s)
    assert result == Subtract(
        left=Multiply(left=Add(left=1, right=2), right=Add(left=3, right=4)), right=5
    )


def test_multiply_quantity():
    s = "t * 12 MHz"
    result = parse(s)

    assert result == Multiply(
        left=Variable(("t",)), right=Quantity(12, (UnitTerm("MHz"),))
    )


def test_quantity_divide_ambiguity():
    s = "(12 MHz) / t"
    result = parse(s)

    assert result == Divide(
        left=Quantity(12, (UnitTerm("MHz"),)), right=Variable(("t",))
    )

    s = "12 MHz / t"
    result = parse(s)

    assert result == Quantity(12, (UnitTerm("MHz"),), (UnitTerm("t"),))


def test_power():
    s = "t ** 2"
    result = parse(s)

    assert result == Power(Variable(("t",)), 2)


def test_power_add_priority():
    s = "t ** 2 + 1"
    result = parse(s)

    assert result == Add(left=Power(Variable(("t",)), 2), right=1)

    s = "t ** (2 + 1)"
    result = parse(s)

    assert result == Power(Variable(("t",)), Add(left=2, right=1))


def test_power_multiplication_priority():
    s = "t ** 2 * 3"
    result = parse(s)

    assert result == Multiply(left=Power(Variable(("t",)), 2), right=3)

    s = "t ** 2 * (3 + 1)"
    result = parse(s)

    assert result == Multiply(
        left=Power(Variable(("t",)), 2), right=Add(left=3, right=1)
    )


def test_quantity_power():
    s = "(1.0 m)**variable"
    result = parse(s)

    assert result == Power(Quantity(1.0, (UnitTerm("m"),)), Variable(("variable",)))

    s = "1.0 m ** variable"
    # Could maybe be Power(Quantity(1.0, (UnitTerm("m"),)), Variable(("variable",))),
    # but didn't manage to allow it in the grammar, possibly because LR(1) parsing?
    with pytest.raises(InvalidSyntaxError):
        parse(s)


def test_call_power():
    s = "f(1.0 m)**variable"
    result = parse(s)

    assert result == Power(
        Call(function="f", args=(Quantity(1.0, (UnitTerm("m"),)),)),
        Variable(("variable",)),
    )

    s = "5 ** f(a.b)"
    result = parse(s)

    assert result == Power(5, Call(function="f", args=(Variable(("a", "b")),)))
