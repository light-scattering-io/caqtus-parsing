import tree_sitter
import caqtus_parsing


def test_can_load_grammar():
    tree_sitter.Language(caqtus_parsing.language())
