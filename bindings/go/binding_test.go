package tree_sitter_caqtus_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_caqtus "github.com/tree-sitter/tree-sitter-caqtus/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_caqtus.Language())
	if language == nil {
		t.Errorf("Error loading Caqtus grammar")
	}
}
