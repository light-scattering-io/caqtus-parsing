from tree_sitter_caqtus import parse
from tree_sitter_caqtus.nodes import Quantity


def test_quantity():
    assert parse("1.0 m") == Quantity(1.0, (("m", None),), ())


# assert parse("1.0 m/s") == Quantity(1.0, (("m", None),), (("s", None),))
# assert parse("1.0 m/s^2") == Quantity(1.0, (("m", None),), (("s", 2),))
# assert parse("1.0 m^2/s^2") == Quantity(1.0, (("m", 2),), (("s", 2),))
# assert parse("1.0 m^2/s") == Quantity(1.0, (("m", 2),), (("s", None),))
# assert parse("1.0 m^-2/s") == Quantity(1.0, (("m", -2),), (("s", None),))
# assert parse("1.0 m^2/s^-1") == Quantity(1.0, (("m", 2),), (("s", -1),))
# assert parse("1.0 m^-2/s^-1") == Quantity(1.0, (("m", -2),), (("s", -1),))
# assert parse("1.0 m^2/s^2") == Quantity(1.0, (("m", 2),), (("s", 2),))
# assert parse("1.0 m^2/s^2") == Quantity(1.0, (("m", 2),), (("s", 2),))
# assert parse("1.0 m^2/s^2") == Quantity(1.0, (("m", 2),), (("s", 2),))
# assert parse("1.0 m^2/s^2") == Quantity(1.0, (("m", 2),), (("s", 2),))
# assert parse("1.0 m^2/s^2") == Quantity(1.0, (("m", 2),), (("s", 2),))
# assert parse("1.0 m^2/s^2") == Quantity(1.0, (("m", 2),), (("s", 2),))
# assert parse("1.0 m^2/s^2") == Quantity(1.0, (("m", 2),), (("s", 2),))
