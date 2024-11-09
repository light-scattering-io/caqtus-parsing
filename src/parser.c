#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 54
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
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
  sym__SINGLE_UNIT = 10,
  anon_sym_LPAREN = 11,
  anon_sym_RPAREN = 12,
  anon_sym_COMMA = 13,
  sym_expression = 14,
  sym_variable = 15,
  sym__DOT = 16,
  sym__scalar = 17,
  sym__number = 18,
  sym_integer = 19,
  sym_float = 20,
  sym_quantity = 21,
  sym_unit = 22,
  sym_unit_term = 23,
  sym_call = 24,
  sym_args = 25,
  aux_sym_variable_repeat1 = 26,
  aux_sym_unit_repeat1 = 27,
  aux_sym_unit_repeat2 = 28,
  aux_sym_args_repeat1 = 29,
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
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [sym_expression] = "expression",
  [sym_variable] = "variable",
  [sym__DOT] = "_DOT",
  [sym__scalar] = "_scalar",
  [sym__number] = "_number",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_quantity] = "quantity",
  [sym_unit] = "unit",
  [sym_unit_term] = "unit_term",
  [sym_call] = "call",
  [sym_args] = "args",
  [aux_sym_variable_repeat1] = "variable_repeat1",
  [aux_sym_unit_repeat1] = "unit_repeat1",
  [aux_sym_unit_repeat2] = "unit_repeat2",
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
  [sym__SINGLE_UNIT] = sym__SINGLE_UNIT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_expression] = sym_expression,
  [sym_variable] = sym_variable,
  [sym__DOT] = sym__DOT,
  [sym__scalar] = sym__scalar,
  [sym__number] = sym__number,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_quantity] = sym_quantity,
  [sym_unit] = sym_unit,
  [sym_unit_term] = sym_unit_term,
  [sym_call] = sym_call,
  [sym_args] = sym_args,
  [aux_sym_variable_repeat1] = aux_sym_variable_repeat1,
  [aux_sym_unit_repeat1] = aux_sym_unit_repeat1,
  [aux_sym_unit_repeat2] = aux_sym_unit_repeat2,
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
  [sym__SINGLE_UNIT] = {
    .visible = false,
    .named = true,
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
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [sym_unit_term] = {
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
  [aux_sym_unit_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unit_repeat2] = {
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
  field_base = 2,
  field_divisive = 3,
  field_exponent = 4,
  field_first = 5,
  field_function = 6,
  field_magnitude = 7,
  field_multiplicative = 8,
  field_unit = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_args] = "args",
  [field_base] = "base",
  [field_divisive] = "divisive",
  [field_exponent] = "exponent",
  [field_first] = "first",
  [field_function] = "function",
  [field_magnitude] = "magnitude",
  [field_multiplicative] = "multiplicative",
  [field_unit] = "unit",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
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
    {field_base, 0},
  [1] =
    {field_magnitude, 0},
    {field_unit, 1},
  [3] =
    {field_first, 0},
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
    {field_base, 0},
    {field_exponent, 1},
    {field_exponent, 2},
  [14] =
    {field_divisive, 2},
    {field_first, 0},
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
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      ADVANCE_MAP(
        '(', 20,
        ')', 21,
        '*', 14,
        ',', 22,
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
      if (lookahead == ')') ADVANCE(21);
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
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == ',') ADVANCE(22);
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
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == ',') ADVANCE(22);
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
    case 20:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 22:
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
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
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
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 0},
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
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
  },
  [1] = {
    [sym_expression] = STATE(44),
    [sym_variable] = STATE(34),
    [sym__scalar] = STATE(34),
    [sym__number] = STATE(34),
    [sym_integer] = STATE(34),
    [sym_float] = STATE(8),
    [sym_quantity] = STATE(34),
    [sym_call] = STATE(34),
    [anon_sym_DOT] = ACTIONS(3),
    [sym_NAME] = ACTIONS(5),
    [sym__DIGITS] = ACTIONS(7),
    [sym__SIGN] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
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
    STATE(8), 1,
      sym_float,
    STATE(39), 1,
      sym_expression,
    STATE(49), 1,
      sym_args,
    STATE(34), 6,
      sym_variable,
      sym__scalar,
      sym__number,
      sym_integer,
      sym_quantity,
      sym_call,
  [33] = 7,
    ACTIONS(3), 1,
      anon_sym_DOT,
    ACTIONS(5), 1,
      sym_NAME,
    ACTIONS(7), 1,
      sym__DIGITS,
    ACTIONS(9), 1,
      sym__SIGN,
    STATE(8), 1,
      sym_float,
    STATE(42), 1,
      sym_expression,
    STATE(34), 6,
      sym_variable,
      sym__scalar,
      sym__number,
      sym_integer,
      sym_quantity,
      sym_call,
  [60] = 5,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      aux_sym_variable_repeat1,
    STATE(52), 1,
      sym__DOT,
    ACTIONS(13), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [78] = 3,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 2,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
    ACTIONS(19), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [92] = 5,
    ACTIONS(27), 1,
      anon_sym_STAR,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    STATE(7), 1,
      aux_sym_unit_repeat1,
    STATE(19), 1,
      aux_sym_unit_repeat2,
    ACTIONS(25), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [110] = 5,
    ACTIONS(27), 1,
      anon_sym_STAR,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    STATE(15), 1,
      aux_sym_unit_repeat1,
    STATE(23), 1,
      aux_sym_unit_repeat2,
    ACTIONS(31), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [128] = 4,
    ACTIONS(35), 1,
      sym__SINGLE_UNIT,
    STATE(6), 1,
      sym_unit_term,
    STATE(33), 1,
      sym_unit,
    ACTIONS(33), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [143] = 4,
    ACTIONS(15), 1,
      anon_sym_DOT,
    STATE(12), 1,
      aux_sym_variable_repeat1,
    STATE(52), 1,
      sym__DOT,
    ACTIONS(37), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [158] = 4,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      aux_sym_float_token1,
    ACTIONS(45), 1,
      sym__SINGLE_UNIT,
    ACTIONS(39), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [173] = 4,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      aux_sym_float_token1,
    ACTIONS(53), 1,
      sym__SINGLE_UNIT,
    ACTIONS(47), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [188] = 4,
    ACTIONS(57), 1,
      anon_sym_DOT,
    STATE(12), 1,
      aux_sym_variable_repeat1,
    STATE(52), 1,
      sym__DOT,
    ACTIONS(55), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [203] = 4,
    ACTIONS(43), 1,
      aux_sym_float_token1,
    ACTIONS(45), 1,
      sym__SINGLE_UNIT,
    ACTIONS(62), 1,
      sym__DIGITS,
    ACTIONS(60), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [218] = 4,
    ACTIONS(66), 1,
      aux_sym_float_token1,
    ACTIONS(68), 1,
      sym__DIGITS,
    ACTIONS(70), 1,
      sym__SINGLE_UNIT,
    ACTIONS(64), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [233] = 3,
    ACTIONS(74), 1,
      anon_sym_STAR,
    STATE(15), 1,
      aux_sym_unit_repeat1,
    ACTIONS(72), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [246] = 1,
    ACTIONS(77), 5,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [254] = 1,
    ACTIONS(39), 5,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [262] = 3,
    ACTIONS(66), 1,
      aux_sym_float_token1,
    ACTIONS(70), 1,
      sym__SINGLE_UNIT,
    ACTIONS(64), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [274] = 3,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    STATE(24), 1,
      aux_sym_unit_repeat2,
    ACTIONS(79), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [286] = 3,
    ACTIONS(83), 1,
      aux_sym_float_token1,
    ACTIONS(85), 1,
      sym__SINGLE_UNIT,
    ACTIONS(81), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [298] = 1,
    ACTIONS(47), 5,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [306] = 1,
    ACTIONS(72), 5,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [314] = 3,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    STATE(24), 1,
      aux_sym_unit_repeat2,
    ACTIONS(87), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [326] = 3,
    ACTIONS(91), 1,
      anon_sym_SLASH,
    STATE(24), 1,
      aux_sym_unit_repeat2,
    ACTIONS(89), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [338] = 3,
    ACTIONS(43), 1,
      aux_sym_float_token1,
    ACTIONS(45), 1,
      sym__SINGLE_UNIT,
    ACTIONS(60), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [350] = 1,
    ACTIONS(64), 4,
      ts_builtin_sym_end,
      sym__SINGLE_UNIT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [357] = 1,
    ACTIONS(81), 4,
      ts_builtin_sym_end,
      sym__SINGLE_UNIT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [364] = 1,
    ACTIONS(89), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [371] = 1,
    ACTIONS(94), 4,
      ts_builtin_sym_end,
      sym__SINGLE_UNIT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [378] = 1,
    ACTIONS(55), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [385] = 1,
    ACTIONS(96), 4,
      ts_builtin_sym_end,
      sym__SINGLE_UNIT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [392] = 3,
    ACTIONS(98), 1,
      sym__DIGITS,
    ACTIONS(100), 1,
      sym__SIGN,
    STATE(16), 1,
      sym_integer,
  [402] = 1,
    ACTIONS(102), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [408] = 1,
    ACTIONS(104), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [414] = 1,
    ACTIONS(106), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [420] = 3,
    ACTIONS(108), 1,
      anon_sym_RPAREN,
    ACTIONS(110), 1,
      anon_sym_COMMA,
    STATE(38), 1,
      aux_sym_args_repeat1,
  [430] = 1,
    ACTIONS(112), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [436] = 3,
    ACTIONS(114), 1,
      anon_sym_RPAREN,
    ACTIONS(116), 1,
      anon_sym_COMMA,
    STATE(38), 1,
      aux_sym_args_repeat1,
  [446] = 3,
    ACTIONS(110), 1,
      anon_sym_COMMA,
    ACTIONS(119), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      aux_sym_args_repeat1,
  [456] = 2,
    ACTIONS(35), 1,
      sym__SINGLE_UNIT,
    STATE(22), 1,
      sym_unit_term,
  [463] = 2,
    ACTIONS(35), 1,
      sym__SINGLE_UNIT,
    STATE(28), 1,
      sym_unit_term,
  [470] = 1,
    ACTIONS(114), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [475] = 2,
    ACTIONS(121), 1,
      anon_sym_DOT,
    ACTIONS(123), 1,
      sym__DIGITS,
  [482] = 1,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
  [486] = 1,
    ACTIONS(127), 1,
      sym__DIGITS,
  [490] = 1,
    ACTIONS(129), 1,
      sym__DIGITS,
  [494] = 1,
    ACTIONS(131), 1,
      sym__DIGITS,
  [498] = 1,
    ACTIONS(133), 1,
      sym__DIGITS,
  [502] = 1,
    ACTIONS(135), 1,
      anon_sym_RPAREN,
  [506] = 1,
    ACTIONS(62), 1,
      sym__DIGITS,
  [510] = 1,
    ACTIONS(137), 1,
      sym__DIGITS,
  [514] = 1,
    ACTIONS(139), 1,
      sym_NAME,
  [518] = 1,
    ACTIONS(141), 1,
      sym__DIGITS,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 60,
  [SMALL_STATE(5)] = 78,
  [SMALL_STATE(6)] = 92,
  [SMALL_STATE(7)] = 110,
  [SMALL_STATE(8)] = 128,
  [SMALL_STATE(9)] = 143,
  [SMALL_STATE(10)] = 158,
  [SMALL_STATE(11)] = 173,
  [SMALL_STATE(12)] = 188,
  [SMALL_STATE(13)] = 203,
  [SMALL_STATE(14)] = 218,
  [SMALL_STATE(15)] = 233,
  [SMALL_STATE(16)] = 246,
  [SMALL_STATE(17)] = 254,
  [SMALL_STATE(18)] = 262,
  [SMALL_STATE(19)] = 274,
  [SMALL_STATE(20)] = 286,
  [SMALL_STATE(21)] = 298,
  [SMALL_STATE(22)] = 306,
  [SMALL_STATE(23)] = 314,
  [SMALL_STATE(24)] = 326,
  [SMALL_STATE(25)] = 338,
  [SMALL_STATE(26)] = 350,
  [SMALL_STATE(27)] = 357,
  [SMALL_STATE(28)] = 364,
  [SMALL_STATE(29)] = 371,
  [SMALL_STATE(30)] = 378,
  [SMALL_STATE(31)] = 385,
  [SMALL_STATE(32)] = 392,
  [SMALL_STATE(33)] = 402,
  [SMALL_STATE(34)] = 408,
  [SMALL_STATE(35)] = 414,
  [SMALL_STATE(36)] = 420,
  [SMALL_STATE(37)] = 430,
  [SMALL_STATE(38)] = 436,
  [SMALL_STATE(39)] = 446,
  [SMALL_STATE(40)] = 456,
  [SMALL_STATE(41)] = 463,
  [SMALL_STATE(42)] = 470,
  [SMALL_STATE(43)] = 475,
  [SMALL_STATE(44)] = 482,
  [SMALL_STATE(45)] = 486,
  [SMALL_STATE(46)] = 490,
  [SMALL_STATE(47)] = 494,
  [SMALL_STATE(48)] = 498,
  [SMALL_STATE(49)] = 502,
  [SMALL_STATE(50)] = 506,
  [SMALL_STATE(51)] = 510,
  [SMALL_STATE(52)] = 514,
  [SMALL_STATE(53)] = 518,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit_term, 1, 0, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit_term, 1, 0, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1, 0, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 2, 0, 5),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 2, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 2, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2, 0, 0),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 2, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 3, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 3, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unit_repeat1, 2, 0, 0),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unit_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit_term, 3, 0, 8),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 2, 0, 6),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 4, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 4, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 3, 0, 9),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unit_repeat2, 2, 0, 0),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unit_repeat2, 2, 0, 0), SHIFT_REPEAT(41),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 5, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 6, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 2, 0, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, 0, 7),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 2, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, 0, 4),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2, 0, 0),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [125] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
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
