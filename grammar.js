/**
 * @file Used to parse expressions for the caqtus framework
 * @author light-scattering-io <lecaqtus66@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const PREC = {
  float: 1,
  integer: 2,
  plus: 3,
  times: 4,
  call: 5,
};


module.exports = grammar({
  name: "caqtus",
  rules: {
    expression: $ => $._sub_expression,

    _sub_expression: $ => choice(
      $.variable,
      $._scalar,
      $.call,
      $.binary_operator,
    ),


    variable: $ => seq(
      $.NAME,
      repeat(seq($._DOT, $.NAME)),
    ),

    _DOT: _ => token('.'),

    NAME: _ => token(/[a-zA-Z][a-zA-Z0-9_]*/),

    _scalar: $ => choice(
      $._number,
      $.quantity,
    ),

    _number: $ => choice(
      $.integer,
      $.float,
    ),

    integer: $ => prec(PREC.integer, seq(
      optional($._SIGN),
      $._DIGITS,
    )),

    float: $ => {
      const exponent = seq(/[eE][+-]?/, $._DIGITS);

      return prec(PREC.float, seq(
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
      field("units", $.units),
    ),

    units: $ => prec.right(seq(
      field("first", $.unit_term),
      field("multiplicative", optional($._units_mult_part)),
      field("divisive", optional($._units_div_part)),
    )),

    _units_mult_part: $ => repeat1(
      seq(optional('*'), $.unit_term)
    ),

    _units_div_part: $ => repeat1(
      seq('/', $.unit_term)
    ),

    unit_term: $ => seq(
      field("unit", $.unit),
      optional(seq(choice('^', '**'), field("exponent", $.integer))),
    ),

    // Percents and degrees are allowed to be used as units.
    // Doesn't allow °C.
    unit: _ => choice(/[a-zA-Z]+/, '°', '%'),

    call: $ => prec(PREC.call, seq(
      field('function', $.NAME),
      '(',
      field('args', optional($.args)),
      ')',
    )),

    args: $ => seq(
      $._sub_expression,
      repeat(seq(',', $._sub_expression)),
    ),

    binary_operator: $ => {
      const table = [
        [prec.left, '+', PREC.plus],
        [prec.left, '-', PREC.plus],
        [prec.left, '*', PREC.times],
        [prec.left, '/', PREC.times],
      ];

      return choice(...table.map(([fn, operator, precedence]) => fn(precedence, seq(
        field('left', $._sub_expression),
        field('operator', operator),
        field('right', $._sub_expression),
      ))));
    },
  }
});
