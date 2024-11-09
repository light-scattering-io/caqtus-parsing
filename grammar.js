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
      $.NAME,
      repeat(seq('.', $.NAME)),
    ),

    NAME: _ => token(/[a-zA-Z][a-zA-Z0-9_]*/),

    _scalar: $ => choice(
      $._number,
      $.quantity,
    ),

    _number: $ => choice(
      $.integer,
      $.float,
    ),

    integer: $ => prec(2, seq(
      optional($._SIGN),
      $._DIGITS,
    )),

    float: $ => {
      const exponent = seq(/[eE][+-]?/, $._DIGITS);

      return prec(1, seq(
          optional($._SIGN),
          choice(
            seq($._DIGITS, '.', optional($._DIGITS), optional(exponent)),
            seq(optional($._DIGITS), '.', $._DIGITS, optional(exponent)),
            seq($._DIGITS, optional(exponent)),
          ),
        )
      );
    },

    _DIGITS: _ => token(repeat1(/[0-9]+_?/)),

    _SIGN: _ => token(/[-+]/),

    quantity: $ => seq(
      field("magnitude", $.float),
      field("unit", $.unit),
    ),

    unit: $ => seq(
      field("base", $.unit_term),
      field("multiplicative", repeat(seq('*', $.unit_term))),
      field("divisive", repeat(seq('/', $.unit_term))),
    ),

    unit_term: $ => seq(
      field("base", $._SINGLE_UNIT),
      field("exponent", optional(seq(choice('^', '**'), $.integer))),
    ),

    // Percents and degrees are allowed to be used as units.
    // Doesn't allow °C.
    _SINGLE_UNIT: _ => token(choice(/[a-zA-Z]+/, '°', '%')),
  }
});
