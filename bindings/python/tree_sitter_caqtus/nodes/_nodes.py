import attrs

type Expression = Variable


@attrs.frozen
class Variable:
    """Represents a variable in an expression.

    Attributes:
        names: The names of the variable.
            This can be a single name or a tuple of names which then represent the
            variable ``a.b.c`` as ``("a", "b", "c")``.

            It is guaranteed that the names are not empty.
    """

    names: tuple[str, ...]
