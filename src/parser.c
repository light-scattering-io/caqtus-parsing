#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 45
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 7

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
  sym__SINGLE_UNIT = 10,
  sym_expression = 11,
  sym_variable = 12,
  sym__scalar = 13,
  sym__number = 14,
  sym_integer = 15,
  sym_float = 16,
  sym_quantity = 17,
  sym_unit = 18,
  sym_unit_term = 19,
  aux_sym_variable_repeat1 = 20,
  aux_sym_unit_repeat1 = 21,
  aux_sym_unit_repeat2 = 22,
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
  [sym__SINGLE_UNIT] = "_SINGLE_UNIT",
  [sym_expression] = "expression",
  [sym_variable] = "variable",
  [sym__scalar] = "_scalar",
  [sym__number] = "_number",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_quantity] = "quantity",
  [sym_unit] = "unit",
  [sym_unit_term] = "unit_term",
  [aux_sym_variable_repeat1] = "variable_repeat1",
  [aux_sym_unit_repeat1] = "unit_repeat1",
  [aux_sym_unit_repeat2] = "unit_repeat2",
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
  [sym__SINGLE_UNIT] = sym__SINGLE_UNIT,
  [sym_expression] = sym_expression,
  [sym_variable] = sym_variable,
  [sym__scalar] = sym__scalar,
  [sym__number] = sym__number,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_quantity] = sym_quantity,
  [sym_unit] = sym_unit,
  [sym_unit_term] = sym_unit_term,
  [aux_sym_variable_repeat1] = aux_sym_variable_repeat1,
  [aux_sym_unit_repeat1] = aux_sym_unit_repeat1,
  [aux_sym_unit_repeat2] = aux_sym_unit_repeat2,
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
  [sym__SINGLE_UNIT] = {
    .visible = false,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
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
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [sym_unit_term] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_variable_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unit_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unit_repeat2] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_base = 1,
  field_divisive = 2,
  field_exponent = 3,
  field_magnitude = 4,
  field_multiplicative = 5,
  field_unit = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_base] = "base",
  [field_divisive] = "divisive",
  [field_exponent] = "exponent",
  [field_magnitude] = "magnitude",
  [field_multiplicative] = "multiplicative",
  [field_unit] = "unit",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 3},
  [6] = {.index = 10, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_base, 0},
  [1] =
    {field_magnitude, 0},
    {field_unit, 1},
  [3] =
    {field_base, 0},
    {field_multiplicative, 1},
  [5] =
    {field_base, 0},
    {field_divisive, 1},
  [7] =
    {field_base, 0},
    {field_exponent, 1},
    {field_exponent, 2},
  [10] =
    {field_base, 0},
    {field_divisive, 2},
    {field_multiplicative, 1},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      ADVANCE_MAP(
        '*', 14,
        '.', 5,
        '/', 15,
        '^', 16,
        '%', 18,
        0xb0, 18,
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
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '%' ||
          lookahead == 0xb0) ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 3:
      if (eof) ADVANCE(4);
      if (lookahead == '%' ||
          lookahead == 0xb0) ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
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
      ACCEPT_TOKEN(sym__SINGLE_UNIT);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__SINGLE_UNIT);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
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
    [sym__SINGLE_UNIT] = ACTIONS(1),
  },
  [1] = {
    [sym_expression] = STATE(42),
    [sym_variable] = STATE(38),
    [sym__scalar] = STATE(38),
    [sym__number] = STATE(38),
    [sym_integer] = STATE(38),
    [sym_float] = STATE(7),
    [sym_quantity] = STATE(38),
    [anon_sym_DOT] = ACTIONS(3),
    [sym_NAME] = ACTIONS(5),
    [sym__DIGITS] = ACTIONS(7),
    [sym__SIGN] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_STAR,
    ACTIONS(15), 1,
      anon_sym_SLASH,
    STATE(10), 1,
      aux_sym_unit_repeat1,
    STATE(22), 1,
      aux_sym_unit_repeat2,
  [16] = 3,
    ACTIONS(19), 1,
      anon_sym_STAR,
    ACTIONS(17), 2,
      ts_builtin_sym_end,
      anon_sym_SLASH,
    ACTIONS(21), 2,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
  [28] = 5,
    ACTIONS(13), 1,
      anon_sym_STAR,
    ACTIONS(15), 1,
      anon_sym_SLASH,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_unit_repeat1,
    STATE(17), 1,
      aux_sym_unit_repeat2,
  [44] = 4,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      aux_sym_float_token1,
    ACTIONS(31), 1,
      sym__SINGLE_UNIT,
  [57] = 4,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      aux_sym_float_token1,
    ACTIONS(37), 1,
      sym__DIGITS,
    ACTIONS(39), 1,
      sym__SINGLE_UNIT,
  [70] = 4,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      sym__SINGLE_UNIT,
    STATE(4), 1,
      sym_unit_term,
    STATE(44), 1,
      sym_unit,
  [83] = 4,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      aux_sym_float_token1,
    ACTIONS(49), 1,
      sym__DIGITS,
    ACTIONS(51), 1,
      sym__SINGLE_UNIT,
  [96] = 4,
    ACTIONS(35), 1,
      aux_sym_float_token1,
    ACTIONS(39), 1,
      sym__SINGLE_UNIT,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 1,
      anon_sym_DOT,
  [109] = 3,
    ACTIONS(59), 1,
      anon_sym_STAR,
    STATE(10), 1,
      aux_sym_unit_repeat1,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      anon_sym_SLASH,
  [120] = 1,
    ACTIONS(62), 3,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
  [126] = 1,
    ACTIONS(53), 3,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
  [132] = 3,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 1,
      anon_sym_DOT,
    STATE(13), 1,
      aux_sym_variable_repeat1,
  [142] = 3,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      aux_sym_float_token1,
    ACTIONS(51), 1,
      sym__SINGLE_UNIT,
  [152] = 3,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      anon_sym_DOT,
    STATE(21), 1,
      aux_sym_variable_repeat1,
  [162] = 3,
    ACTIONS(73), 1,
      sym__DIGITS,
    ACTIONS(75), 1,
      sym__SIGN,
    STATE(11), 1,
      sym_integer,
  [172] = 3,
    ACTIONS(15), 1,
      anon_sym_SLASH,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      aux_sym_unit_repeat2,
  [182] = 3,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(81), 1,
      aux_sym_float_token1,
    ACTIONS(83), 1,
      sym__SINGLE_UNIT,
  [192] = 1,
    ACTIONS(25), 3,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
  [198] = 1,
    ACTIONS(57), 3,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
  [204] = 3,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      aux_sym_variable_repeat1,
  [214] = 3,
    ACTIONS(15), 1,
      anon_sym_SLASH,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      aux_sym_unit_repeat2,
  [224] = 3,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      anon_sym_SLASH,
    STATE(23), 1,
      aux_sym_unit_repeat2,
  [234] = 3,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      aux_sym_float_token1,
    ACTIONS(39), 1,
      sym__SINGLE_UNIT,
  [244] = 2,
    ACTIONS(43), 1,
      sym__SINGLE_UNIT,
    STATE(31), 1,
      sym_unit_term,
  [251] = 2,
    ACTIONS(43), 1,
      sym__SINGLE_UNIT,
    STATE(20), 1,
      sym_unit_term,
  [258] = 1,
    ACTIONS(64), 2,
      ts_builtin_sym_end,
      anon_sym_DOT,
  [263] = 1,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      sym__SINGLE_UNIT,
  [268] = 2,
    ACTIONS(94), 1,
      anon_sym_DOT,
    ACTIONS(96), 1,
      sym__DIGITS,
  [275] = 1,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      sym__SINGLE_UNIT,
  [280] = 1,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      anon_sym_SLASH,
  [285] = 1,
    ACTIONS(98), 2,
      ts_builtin_sym_end,
      sym__SINGLE_UNIT,
  [290] = 1,
    ACTIONS(100), 2,
      ts_builtin_sym_end,
      sym__SINGLE_UNIT,
  [295] = 1,
    ACTIONS(102), 1,
      sym__DIGITS,
  [299] = 1,
    ACTIONS(104), 1,
      sym__DIGITS,
  [303] = 1,
    ACTIONS(106), 1,
      sym__DIGITS,
  [307] = 1,
    ACTIONS(108), 1,
      sym__DIGITS,
  [311] = 1,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
  [315] = 1,
    ACTIONS(112), 1,
      sym__DIGITS,
  [319] = 1,
    ACTIONS(37), 1,
      sym__DIGITS,
  [323] = 1,
    ACTIONS(114), 1,
      sym_NAME,
  [327] = 1,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
  [331] = 1,
    ACTIONS(118), 1,
      sym__DIGITS,
  [335] = 1,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 16,
  [SMALL_STATE(4)] = 28,
  [SMALL_STATE(5)] = 44,
  [SMALL_STATE(6)] = 57,
  [SMALL_STATE(7)] = 70,
  [SMALL_STATE(8)] = 83,
  [SMALL_STATE(9)] = 96,
  [SMALL_STATE(10)] = 109,
  [SMALL_STATE(11)] = 120,
  [SMALL_STATE(12)] = 126,
  [SMALL_STATE(13)] = 132,
  [SMALL_STATE(14)] = 142,
  [SMALL_STATE(15)] = 152,
  [SMALL_STATE(16)] = 162,
  [SMALL_STATE(17)] = 172,
  [SMALL_STATE(18)] = 182,
  [SMALL_STATE(19)] = 192,
  [SMALL_STATE(20)] = 198,
  [SMALL_STATE(21)] = 204,
  [SMALL_STATE(22)] = 214,
  [SMALL_STATE(23)] = 224,
  [SMALL_STATE(24)] = 234,
  [SMALL_STATE(25)] = 244,
  [SMALL_STATE(26)] = 251,
  [SMALL_STATE(27)] = 258,
  [SMALL_STATE(28)] = 263,
  [SMALL_STATE(29)] = 268,
  [SMALL_STATE(30)] = 275,
  [SMALL_STATE(31)] = 280,
  [SMALL_STATE(32)] = 285,
  [SMALL_STATE(33)] = 290,
  [SMALL_STATE(34)] = 295,
  [SMALL_STATE(35)] = 299,
  [SMALL_STATE(36)] = 303,
  [SMALL_STATE(37)] = 307,
  [SMALL_STATE(38)] = 311,
  [SMALL_STATE(39)] = 315,
  [SMALL_STATE(40)] = 319,
  [SMALL_STATE(41)] = 323,
  [SMALL_STATE(42)] = 327,
  [SMALL_STATE(43)] = 331,
  [SMALL_STATE(44)] = 335,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 2, 0, 3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit_term, 1, 0, 1),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit_term, 1, 0, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1, 0, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 2, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 2, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 3, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 3, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unit_repeat1, 2, 0, 0),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unit_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit_term, 3, 0, 5),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2, 0, 0),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 2, 0, 4),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 4, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 4, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 3, 0, 6),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unit_repeat2, 2, 0, 0),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unit_repeat2, 2, 0, 0), SHIFT_REPEAT(25),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 5, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 6, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [116] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 2, 0, 2),
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
