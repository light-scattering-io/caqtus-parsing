#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 55
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 10

enum ts_symbol_identifiers {
  anon_sym_DOT = 1,
  sym_NAME = 2,
  aux_sym_float_token1 = 3,
  sym__DIGITS = 4,
  sym__SIGN = 5,
  anon_sym_STAR = 6,
  anon_sym_SLASH = 7,
  anon_sym_CARET = 8,
  anon_sym_STAR_STAR = 9,
  aux_sym_unit_token1 = 10,
  anon_sym_u00b0 = 11,
  anon_sym_PERCENT = 12,
  anon_sym_LPAREN = 13,
  anon_sym_RPAREN = 14,
  anon_sym_COMMA = 15,
  sym_expression = 16,
  sym__sub_expression = 17,
  sym_variable = 18,
  sym__DOT = 19,
  sym__scalar = 20,
  sym__number = 21,
  sym_integer = 22,
  sym_float = 23,
  sym_quantity = 24,
  sym_units = 25,
  sym_unit_term = 26,
  sym_unit = 27,
  sym_call = 28,
  sym_args = 29,
  aux_sym_variable_repeat1 = 30,
  aux_sym_units_repeat1 = 31,
  aux_sym_units_repeat2 = 32,
  aux_sym_args_repeat1 = 33,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOT] = ".",
  [sym_NAME] = "NAME",
  [aux_sym_float_token1] = "float_token1",
  [sym__DIGITS] = "_DIGITS",
  [sym__SIGN] = "_SIGN",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_CARET] = "^",
  [anon_sym_STAR_STAR] = "**",
  [aux_sym_unit_token1] = "unit_token1",
  [anon_sym_u00b0] = "\u00b0",
  [anon_sym_PERCENT] = "%",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [sym_expression] = "expression",
  [sym__sub_expression] = "_sub_expression",
  [sym_variable] = "variable",
  [sym__DOT] = "_DOT",
  [sym__scalar] = "_scalar",
  [sym__number] = "_number",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_quantity] = "quantity",
  [sym_units] = "units",
  [sym_unit_term] = "unit_term",
  [sym_unit] = "unit",
  [sym_call] = "call",
  [sym_args] = "args",
  [aux_sym_variable_repeat1] = "variable_repeat1",
  [aux_sym_units_repeat1] = "units_repeat1",
  [aux_sym_units_repeat2] = "units_repeat2",
  [aux_sym_args_repeat1] = "args_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_NAME] = sym_NAME,
  [aux_sym_float_token1] = aux_sym_float_token1,
  [sym__DIGITS] = sym__DIGITS,
  [sym__SIGN] = sym__SIGN,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [aux_sym_unit_token1] = aux_sym_unit_token1,
  [anon_sym_u00b0] = anon_sym_u00b0,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_expression] = sym_expression,
  [sym__sub_expression] = sym__sub_expression,
  [sym_variable] = sym_variable,
  [sym__DOT] = sym__DOT,
  [sym__scalar] = sym__scalar,
  [sym__number] = sym__number,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_quantity] = sym_quantity,
  [sym_units] = sym_units,
  [sym_unit_term] = sym_unit_term,
  [sym_unit] = sym_unit,
  [sym_call] = sym_call,
  [sym_args] = sym_args,
  [aux_sym_variable_repeat1] = aux_sym_variable_repeat1,
  [aux_sym_units_repeat1] = aux_sym_units_repeat1,
  [aux_sym_units_repeat2] = aux_sym_units_repeat2,
  [aux_sym_args_repeat1] = aux_sym_args_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_NAME] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_float_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__DIGITS] = {
    .visible = false,
    .named = true,
  },
  [sym__SIGN] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_unit_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u00b0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__sub_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym__DOT] = {
    .visible = false,
    .named = true,
  },
  [sym__scalar] = {
    .visible = false,
    .named = true,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_quantity] = {
    .visible = true,
    .named = true,
  },
  [sym_units] = {
    .visible = true,
    .named = true,
  },
  [sym_unit_term] = {
    .visible = true,
    .named = true,
  },
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym_args] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_variable_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_units_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_units_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_args_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_args = 1,
  field_divisive = 2,
  field_exponent = 3,
  field_first = 4,
  field_function = 5,
  field_magnitude = 6,
  field_multiplicative = 7,
  field_unit = 8,
  field_units = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_args] = "args",
  [field_divisive] = "divisive",
  [field_exponent] = "exponent",
  [field_first] = "first",
  [field_function] = "function",
  [field_magnitude] = "magnitude",
  [field_multiplicative] = "multiplicative",
  [field_unit] = "unit",
  [field_units] = "units",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 3},
  [9] = {.index = 14, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_magnitude, 0},
    {field_units, 1},
  [2] =
    {field_first, 0},
  [3] =
    {field_unit, 0},
  [4] =
    {field_function, 0},
  [5] =
    {field_first, 0},
    {field_multiplicative, 1},
  [7] =
    {field_divisive, 1},
    {field_first, 0},
  [9] =
    {field_args, 2},
    {field_function, 0},
  [11] =
    {field_divisive, 2},
    {field_first, 0},
    {field_multiplicative, 1},
  [14] =
    {field_exponent, 1},
    {field_exponent, 2},
    {field_unit, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      ADVANCE_MAP(
        '%', 20,
        '(', 21,
        ')', 22,
        '*', 14,
        ',', 23,
        '.', 5,
        '/', 15,
        '^', 16,
        0xb0, 19,
        '+', 13,
        '-', 13,
        'E', 6,
        'e', 6,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 1:
      if (lookahead == ')') ADVANCE(22);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 2:
      if (eof) ADVANCE(4);
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == ')') ADVANCE(22);
      if (lookahead == ',') ADVANCE(23);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == 0xb0) ADVANCE(19);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 3:
      if (eof) ADVANCE(4);
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == ')') ADVANCE(22);
      if (lookahead == ',') ADVANCE(23);
      if (lookahead == 0xb0) ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_NAME);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_NAME);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_float_token1);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym__DIGITS);
      if (lookahead == '_') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym__DIGITS);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym__SIGN);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(17);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_u00b0);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_NAME] = ACTIONS(1),
    [aux_sym_float_token1] = ACTIONS(1),
    [sym__DIGITS] = ACTIONS(1),
    [sym__SIGN] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [aux_sym_unit_token1] = ACTIONS(1),
    [anon_sym_u00b0] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
  },
  [1] = {
    [sym_expression] = STATE(49),
    [sym__sub_expression] = STATE(54),
    [sym_variable] = STATE(54),
    [sym__scalar] = STATE(54),
    [sym__number] = STATE(54),
    [sym_integer] = STATE(54),
    [sym_float] = STATE(4),
    [sym_quantity] = STATE(54),
    [sym_call] = STATE(54),
    [anon_sym_DOT] = ACTIONS(3),
    [sym_NAME] = ACTIONS(5),
    [sym__DIGITS] = ACTIONS(7),
    [sym__SIGN] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      anon_sym_DOT,
    ACTIONS(5), 1,
      sym_NAME,
    ACTIONS(7), 1,
      sym__DIGITS,
    ACTIONS(9), 1,
      sym__SIGN,
    ACTIONS(11), 1,
      anon_sym_RPAREN,
    STATE(4), 1,
      sym_float,
    STATE(46), 1,
      sym_args,
    STATE(37), 7,
      sym__sub_expression,
      sym_variable,
      sym__scalar,
      sym__number,
      sym_integer,
      sym_quantity,
      sym_call,
  [31] = 6,
    ACTIONS(3), 1,
      anon_sym_DOT,
    ACTIONS(5), 1,
      sym_NAME,
    ACTIONS(7), 1,
      sym__DIGITS,
    ACTIONS(9), 1,
      sym__SIGN,
    STATE(4), 1,
      sym_float,
    STATE(43), 7,
      sym__sub_expression,
      sym_variable,
      sym__scalar,
      sym__number,
      sym_integer,
      sym_quantity,
      sym_call,
  [56] = 5,
    STATE(12), 1,
      sym_unit_term,
    STATE(13), 1,
      sym_unit,
    STATE(40), 1,
      sym_units,
    ACTIONS(13), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(15), 3,
      aux_sym_unit_token1,
      anon_sym_u00b0,
      anon_sym_PERCENT,
  [76] = 5,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(21), 1,
      aux_sym_float_token1,
    ACTIONS(23), 1,
      aux_sym_unit_token1,
    ACTIONS(25), 2,
      anon_sym_u00b0,
      anon_sym_PERCENT,
    ACTIONS(17), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [95] = 4,
    ACTIONS(21), 1,
      aux_sym_float_token1,
    ACTIONS(23), 1,
      aux_sym_unit_token1,
    ACTIONS(27), 1,
      sym__DIGITS,
    ACTIONS(25), 5,
      ts_builtin_sym_end,
      anon_sym_u00b0,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [112] = 5,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      aux_sym_float_token1,
    ACTIONS(35), 1,
      aux_sym_unit_token1,
    ACTIONS(37), 2,
      anon_sym_u00b0,
      anon_sym_PERCENT,
    ACTIONS(29), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [131] = 4,
    ACTIONS(41), 1,
      aux_sym_float_token1,
    ACTIONS(43), 1,
      sym__DIGITS,
    ACTIONS(45), 1,
      aux_sym_unit_token1,
    ACTIONS(39), 5,
      ts_builtin_sym_end,
      anon_sym_u00b0,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [148] = 3,
    ACTIONS(21), 1,
      aux_sym_float_token1,
    ACTIONS(23), 1,
      aux_sym_unit_token1,
    ACTIONS(25), 5,
      ts_builtin_sym_end,
      anon_sym_u00b0,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [162] = 2,
    ACTIONS(49), 1,
      anon_sym_STAR,
    ACTIONS(47), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [174] = 5,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      aux_sym_variable_repeat1,
    STATE(53), 1,
      sym__DOT,
    ACTIONS(51), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [192] = 5,
    ACTIONS(59), 1,
      anon_sym_STAR,
    ACTIONS(61), 1,
      anon_sym_SLASH,
    STATE(14), 1,
      aux_sym_units_repeat1,
    STATE(28), 1,
      aux_sym_units_repeat2,
    ACTIONS(57), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [210] = 3,
    ACTIONS(65), 1,
      anon_sym_STAR,
    ACTIONS(67), 2,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
    ACTIONS(63), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [224] = 5,
    ACTIONS(59), 1,
      anon_sym_STAR,
    ACTIONS(61), 1,
      anon_sym_SLASH,
    STATE(21), 1,
      aux_sym_units_repeat1,
    STATE(26), 1,
      aux_sym_units_repeat2,
    ACTIONS(69), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [242] = 3,
    ACTIONS(41), 1,
      aux_sym_float_token1,
    ACTIONS(45), 1,
      aux_sym_unit_token1,
    ACTIONS(39), 5,
      ts_builtin_sym_end,
      anon_sym_u00b0,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [256] = 3,
    ACTIONS(73), 1,
      aux_sym_float_token1,
    ACTIONS(75), 1,
      aux_sym_unit_token1,
    ACTIONS(71), 5,
      ts_builtin_sym_end,
      anon_sym_u00b0,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [270] = 4,
    ACTIONS(53), 1,
      anon_sym_DOT,
    STATE(18), 1,
      aux_sym_variable_repeat1,
    STATE(53), 1,
      sym__DOT,
    ACTIONS(77), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [285] = 4,
    ACTIONS(81), 1,
      anon_sym_DOT,
    STATE(18), 1,
      aux_sym_variable_repeat1,
    STATE(53), 1,
      sym__DOT,
    ACTIONS(79), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [300] = 1,
    ACTIONS(71), 6,
      ts_builtin_sym_end,
      aux_sym_unit_token1,
      anon_sym_u00b0,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [309] = 1,
    ACTIONS(39), 6,
      ts_builtin_sym_end,
      aux_sym_unit_token1,
      anon_sym_u00b0,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [318] = 3,
    ACTIONS(86), 1,
      anon_sym_STAR,
    STATE(21), 1,
      aux_sym_units_repeat1,
    ACTIONS(84), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [331] = 1,
    ACTIONS(89), 6,
      ts_builtin_sym_end,
      aux_sym_unit_token1,
      anon_sym_u00b0,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [340] = 1,
    ACTIONS(91), 6,
      ts_builtin_sym_end,
      aux_sym_unit_token1,
      anon_sym_u00b0,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [349] = 1,
    ACTIONS(29), 5,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [357] = 3,
    STATE(13), 1,
      sym_unit,
    STATE(30), 1,
      sym_unit_term,
    ACTIONS(15), 3,
      aux_sym_unit_token1,
      anon_sym_u00b0,
      anon_sym_PERCENT,
  [369] = 3,
    ACTIONS(61), 1,
      anon_sym_SLASH,
    STATE(27), 1,
      aux_sym_units_repeat2,
    ACTIONS(93), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [381] = 3,
    ACTIONS(97), 1,
      anon_sym_SLASH,
    STATE(27), 1,
      aux_sym_units_repeat2,
    ACTIONS(95), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [393] = 3,
    ACTIONS(61), 1,
      anon_sym_SLASH,
    STATE(27), 1,
      aux_sym_units_repeat2,
    ACTIONS(100), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [405] = 1,
    ACTIONS(102), 5,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [413] = 1,
    ACTIONS(84), 5,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [421] = 1,
    ACTIONS(17), 5,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [429] = 3,
    STATE(13), 1,
      sym_unit,
    STATE(33), 1,
      sym_unit_term,
    ACTIONS(15), 3,
      aux_sym_unit_token1,
      anon_sym_u00b0,
      anon_sym_PERCENT,
  [441] = 1,
    ACTIONS(95), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [448] = 1,
    ACTIONS(79), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [455] = 3,
    ACTIONS(104), 1,
      anon_sym_RPAREN,
    ACTIONS(106), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      aux_sym_args_repeat1,
  [465] = 3,
    ACTIONS(108), 1,
      sym__DIGITS,
    ACTIONS(110), 1,
      sym__SIGN,
    STATE(29), 1,
      sym_integer,
  [475] = 3,
    ACTIONS(106), 1,
      anon_sym_COMMA,
    ACTIONS(112), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      aux_sym_args_repeat1,
  [485] = 1,
    ACTIONS(114), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [491] = 1,
    ACTIONS(116), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [497] = 1,
    ACTIONS(118), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [503] = 3,
    ACTIONS(120), 1,
      anon_sym_RPAREN,
    ACTIONS(122), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      aux_sym_args_repeat1,
  [513] = 2,
    ACTIONS(125), 1,
      anon_sym_DOT,
    ACTIONS(127), 1,
      sym__DIGITS,
  [520] = 1,
    ACTIONS(120), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [525] = 1,
    ACTIONS(129), 1,
      sym__DIGITS,
  [529] = 1,
    ACTIONS(131), 1,
      sym__DIGITS,
  [533] = 1,
    ACTIONS(133), 1,
      anon_sym_RPAREN,
  [537] = 1,
    ACTIONS(135), 1,
      sym__DIGITS,
  [541] = 1,
    ACTIONS(137), 1,
      sym__DIGITS,
  [545] = 1,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
  [549] = 1,
    ACTIONS(141), 1,
      sym__DIGITS,
  [553] = 1,
    ACTIONS(27), 1,
      sym__DIGITS,
  [557] = 1,
    ACTIONS(143), 1,
      sym__DIGITS,
  [561] = 1,
    ACTIONS(145), 1,
      sym_NAME,
  [565] = 1,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 56,
  [SMALL_STATE(5)] = 76,
  [SMALL_STATE(6)] = 95,
  [SMALL_STATE(7)] = 112,
  [SMALL_STATE(8)] = 131,
  [SMALL_STATE(9)] = 148,
  [SMALL_STATE(10)] = 162,
  [SMALL_STATE(11)] = 174,
  [SMALL_STATE(12)] = 192,
  [SMALL_STATE(13)] = 210,
  [SMALL_STATE(14)] = 224,
  [SMALL_STATE(15)] = 242,
  [SMALL_STATE(16)] = 256,
  [SMALL_STATE(17)] = 270,
  [SMALL_STATE(18)] = 285,
  [SMALL_STATE(19)] = 300,
  [SMALL_STATE(20)] = 309,
  [SMALL_STATE(21)] = 318,
  [SMALL_STATE(22)] = 331,
  [SMALL_STATE(23)] = 340,
  [SMALL_STATE(24)] = 349,
  [SMALL_STATE(25)] = 357,
  [SMALL_STATE(26)] = 369,
  [SMALL_STATE(27)] = 381,
  [SMALL_STATE(28)] = 393,
  [SMALL_STATE(29)] = 405,
  [SMALL_STATE(30)] = 413,
  [SMALL_STATE(31)] = 421,
  [SMALL_STATE(32)] = 429,
  [SMALL_STATE(33)] = 441,
  [SMALL_STATE(34)] = 448,
  [SMALL_STATE(35)] = 455,
  [SMALL_STATE(36)] = 465,
  [SMALL_STATE(37)] = 475,
  [SMALL_STATE(38)] = 485,
  [SMALL_STATE(39)] = 491,
  [SMALL_STATE(40)] = 497,
  [SMALL_STATE(41)] = 503,
  [SMALL_STATE(42)] = 513,
  [SMALL_STATE(43)] = 520,
  [SMALL_STATE(44)] = 525,
  [SMALL_STATE(45)] = 529,
  [SMALL_STATE(46)] = 533,
  [SMALL_STATE(47)] = 537,
  [SMALL_STATE(48)] = 541,
  [SMALL_STATE(49)] = 545,
  [SMALL_STATE(50)] = 549,
  [SMALL_STATE(51)] = 553,
  [SMALL_STATE(52)] = 557,
  [SMALL_STATE(53)] = 561,
  [SMALL_STATE(54)] = 565,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 2, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 2, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 2, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 3, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 3, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 1, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 1, 0, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit_term, 1, 0, 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit_term, 1, 0, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 2, 0, 5),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 4, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 4, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2, 0, 0),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_units_repeat1, 2, 0, 0),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_units_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 5, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 6, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 3, 0, 8),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_units_repeat2, 2, 0, 0),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_units_repeat2, 2, 0, 0), SHIFT_REPEAT(32),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 2, 0, 6),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit_term, 3, 0, 9),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 2, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 1, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, 0, 4),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, 0, 7),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 2, 0, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2, 0, 0),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [139] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_caqtus(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
