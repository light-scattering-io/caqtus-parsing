import tree_sitter
import tree_sitter_caqtus


def test_can_load_grammar():
    tree_sitter.Language(tree_sitter_caqtus.language())
