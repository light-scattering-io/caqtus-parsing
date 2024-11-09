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
      $._scalar,
    ),
    variable: $ => seq(
      $.name,
      repeat(seq('.', $.name)),
    ),
    name: _ => /[a-zA-Z][a-zA-Z0-9_]*/,
    _scalar: $ => choice(
      $._number,
      $.quantity,
    ),

    _number: $ => choice(
      $.integer,
      $.float,
    ),

    quantity: $ => seq(
      field("magnitude", $._number),
      field("unit", $.unit),
    ),

    unit: $ => seq(
      field("base", $.unit_term),
      field("multiplicative", repeat(seq('*', $.unit_term))),
      field("divisive", repeat(seq('/', $.unit_term))),
    ),

    unit_term: $ => seq(
      field("base", /[a-zA-Z]+/),
      field("exponent", optional(seq(choice('^', '**'), $.integer))),
    ),


    integer: _ => token(seq(
      optional(/[-+]/),
      repeat1(/[0-9]+_?/),
    )),

    float: _ => {
      const digits = repeat1(/[0-9]+_?/);
      const exponent = seq(/[eE][+-]?/, digits);

      return token(seq(
        optional(/[-+]/),
        choice(
          seq(digits, '.', optional(digits), optional(exponent)),
          seq(optional(digits), '.', digits, optional(exponent)),
          seq(digits, exponent),
        ),
      ));
    },
  }
});
