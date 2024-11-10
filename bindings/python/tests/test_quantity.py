from caqtus_parsing import parse
from caqtus_parsing.nodes import Quantity, UnitTerm


def test_quantity():
    assert parse("1.0 m") == Quantity(1.0, (UnitTerm("m", None),), ())
    assert parse("1.0 m * s") == Quantity(
        1.0, (UnitTerm("m", None), UnitTerm("s", None)), ()
    )
    assert parse("1.0 m/s") == Quantity(
        1.0, (UnitTerm("m", None),), (UnitTerm("s", None),)
    )
    assert parse("1.0 m s**-1") == Quantity(
        1.0,
        (
            UnitTerm("m", None),
            UnitTerm("s", -1),
        ),
        (),
    )
