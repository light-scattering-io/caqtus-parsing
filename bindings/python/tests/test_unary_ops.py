from caqtus_parsing import parse
from caqtus_parsing.nodes import Subtract, Quantity, UnitTerm, Minus


def test_minus():
    s = "12 MHz - -5"
    result = parse(s)

    assert result == Subtract(Quantity(12, (UnitTerm("MHz"),)), -5)


def test_minus_negative():
    s = "--12 MHz"
    result = parse(s)

    assert result == Minus(Quantity(-12, (UnitTerm("MHz"),)))
