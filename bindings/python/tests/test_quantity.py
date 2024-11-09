from tree_sitter_caqtus import parse
from tree_sitter_caqtus.nodes import Quantity, Unit


def test_quantity():
    assert parse("1.0 m") == Quantity(1.0, ((Unit("m"), None),), ())
    assert parse("1.0 m * s") == Quantity(
        1.0, ((Unit("m"), None), (Unit("s"), None)), ()
    )
    assert parse("1.0 m/s") == Quantity(1.0, ((Unit("m"), None),), ((Unit("s"), None),))
    assert parse("1.0 m s^-1") == Quantity(
        1.0, ((Unit("m"), None), (Unit("s"), -1)), ()
    )
