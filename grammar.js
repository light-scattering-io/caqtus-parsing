/**
 * @file Used to parse expressions for the caqtus framework
 * @author light-scattering-io <lecaqtus66@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const PREC = {
  parenthesized_expression: 1,
  float: 2,
  integer: 3,
  plus: 4,
  times: 5,
  unary: 6,
  power: 7,
  call: 8,
};


module.exports = grammar({
  name: "caqtus",
  rules: {
    expression: $ => $._sub_expression,

    _sub_expression: $ => choice(
      $.parenthesized_expression,
      $.variable,
      $._scalar,
      $.call,
      $.binary_operator,
      $.unary_operator,
    ),

    parenthesized_expression: $ => prec(PREC.parenthesized_expression,
      seq(
        $._LPAREN,
        field('expression', $._sub_expression),
        $._RPAREN,
      )
    ),

    variable: $ => seq(
      $.NAME,
      repeat(seq($._DOT, $.NAME)),
    ),

    _scalar: $ => choice(
      $._number,
      $.quantity,
    ),

    _number: $ => choice(
      $.integer,
      $.float,
    ),

    integer: $ => prec(PREC.integer,
      seq(
        optional(alias(choice($.PLUS, $.MINUS), 'sign')),
        $._DIGITS,
      )
    ),

    float: $ => {
      const exponent = seq(/[eE][+-]?/, $._DIGITS);

      return prec(PREC.float,
        seq(
          optional(alias(choice($.PLUS, $.MINUS), 'sign')),
          choice(
            seq($._DIGITS, $._DOT, optional($._DIGITS), optional(exponent)),
            seq(optional($._DIGITS), $._DOT, $._DIGITS, optional(exponent)),
            seq($._DIGITS, optional(exponent)),
          ),
        )
      );
    },

    quantity: $ => seq(
      field("magnitude", $.float),
      field("units", $.units),
    ),

    // There is an ambiguity between the units and * and / operators.
    // It is resolved by making units consume as much as possible.
    // It means that 1 MHz * variable and 1 MHz / variable are parsed as quantities
    // with variable in the units part, and not as a multiplication or division of a
    // quantity by a variable.
    // It is necessary to disambiguate it like this: (1 MHz) * variable.
    // Maybe one solution to avoid this would be to explicitly define the units
    // available in the grammar?
    units: $ => prec.right(
      seq(
        field("first", $.unit_term),
        field("multiplicative", optional($._units_mult_part)),
        field("divisive", optional($._units_div_part)),
      )
    ),

    _units_mult_part: $ => repeat1(
      seq(optional($.TIMES), $.unit_term)
    ),

    _units_div_part: $ => repeat1(
      seq($.DIVIDE, $.unit_term)
    ),

    unit_term: $ => prec.right(
      seq(
        field("unit", $.unit),
        optional(seq($.POWER, field("exponent", $.integer))),
      )
    ),

    // Percents and degrees are allowed to be used as units.
    // Doesn't allow °C.
    unit: _ => choice(/[a-zA-Z]+/, '°', '%'),

    call: $ => prec(PREC.call, seq(
      field('function', $.NAME),
      $._LPAREN,
      field('args', optional($.args)),
      $._RPAREN,
    )),

    args: $ => seq(
      $._sub_expression,
      repeat(seq(',', $._sub_expression)),
    ),

    binary_operator: $ => {
      const table = [
        [prec.left, $.PLUS, PREC.plus],
        [prec.left, $.MINUS, PREC.plus],
        [prec.left, $.TIMES, PREC.times],
        [prec.left, $.DIVIDE, PREC.times],
        [prec.right, $.POWER, PREC.power],
      ];

      return choice(...table.map(([fn, operator, precedence]) => fn(precedence, seq(
        field('left', $._sub_expression),
        field('operator', operator),
        field('right', $._sub_expression),
      ))));
    },

    unary_operator: $ => prec(PREC.unary, seq(
        field('operator', $._sign),
        field('operand', $._sub_expression),
      )
    ),

    _sign: $ => choice($.PLUS, $.MINUS),

    // tokens
    _LPAREN: _ => token('('),
    _RPAREN: _ => token(')'),
    _DOT: _ => token('.'),
    NAME: _ => token(/[a-zA-Z][a-zA-Z0-9_]*/),
    _DIGITS: _ => token(repeat1(/[0-9]+_?/)),
    PLUS: _ => token('+'),
    MINUS: _ => token('-'),
    TIMES: _ => token('*'),
    DIVIDE: _ => token('/'),
    POWER: _ => token('**'),
  }
});
