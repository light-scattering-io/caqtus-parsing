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
    expression: $ => choice(
      $.variable,
      $.scalar,
    ),
    variable: $ => seq(
      $.name,
      repeat(seq('.', $.name)),
    ),
    name: _ => /[a-zA-Z][a-zA-Z0-9_]*/,
    scalar: $ => choice(
      $.number,
    ),
    number: $ => choice(
      $.integer,
      // $.float,
    ),
    integer: _ => token(seq(
      optional(choice('+', '-')),
      repeat1(/[0-9]+_?/),
    )),
  }
});
