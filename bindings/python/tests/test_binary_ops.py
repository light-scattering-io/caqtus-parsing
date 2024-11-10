from caqtus_parsing import parse
from caqtus_parsing.nodes import (
    Add,
    Subtract,
    Multiply,
    Divide,
    Variable,
    Quantity,
    UnitTerm,
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
