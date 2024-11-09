/**
 * @file Used to parse expressions for the caqtus framework
 * @author light-scattering-io <lecaqtus66@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "caqtus",

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => "hello"
  }
});
