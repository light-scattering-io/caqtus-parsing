/**
 * @file Used to parse expressions for the caqtus framework
 * @author light-scattering-io <lecaqtus66@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const DIGITS = repeat1(/[0-9]+_?/);
const SIGN = /[-+]/;

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


    integer: $ => seq(
      optional(SIGN),
      DIGITS,
    ),

    float: $ => {
      const exponent = seq(/[eE][+-]?/, DIGITS);

      return seq(
        optional(SIGN),
        choice(
          seq(DIGITS, '.', optional(DIGITS), optional(exponent)),
          seq(optional(DIGITS), '.', DIGITS, optional(exponent)),
          seq(DIGITS, exponent),
        ),
      );

    },
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
      // Percents and degrees are allowed to be used as units.
      // Doesn't allow °C.
      field("base", choice(/[a-zA-Z]+/, '°', '%')),
      field("exponent", optional(seq(choice('^', '**'), $.integer))),
    ),
  }
});
