#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 47
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 7

enum ts_symbol_identifiers {
  anon_sym_DOT = 1,
  sym_name = 2,
  aux_sym_integer_token1 = 3,
  aux_sym_integer_token2 = 4,
  aux_sym_float_token1 = 5,
  anon_sym_STAR = 6,
  anon_sym_SLASH = 7,
  aux_sym_unit_term_token1 = 8,
  anon_sym_u00b0 = 9,
  anon_sym_PERCENT = 10,
  anon_sym_CARET = 11,
  anon_sym_STAR_STAR = 12,
  sym_expression = 13,
  sym_variable = 14,
  sym__scalar = 15,
  sym__number = 16,
  sym_integer = 17,
  sym_float = 18,
  sym_quantity = 19,
  sym_unit = 20,
  sym_unit_term = 21,
  aux_sym_variable_repeat1 = 22,
  aux_sym_integer_repeat1 = 23,
  aux_sym_unit_repeat1 = 24,
  aux_sym_unit_repeat2 = 25,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOT] = ".",
  [sym_name] = "name",
  [aux_sym_integer_token1] = "integer_token1",
  [aux_sym_integer_token2] = "integer_token2",
  [aux_sym_float_token1] = "float_token1",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [aux_sym_unit_term_token1] = "unit_term_token1",
  [anon_sym_u00b0] = "\u00b0",
  [anon_sym_PERCENT] = "%",
  [anon_sym_CARET] = "^",
  [anon_sym_STAR_STAR] = "**",
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
  [aux_sym_integer_repeat1] = "integer_repeat1",
  [aux_sym_unit_repeat1] = "unit_repeat1",
  [aux_sym_unit_repeat2] = "unit_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_name] = sym_name,
  [aux_sym_integer_token1] = aux_sym_integer_token1,
  [aux_sym_integer_token2] = aux_sym_integer_token2,
  [aux_sym_float_token1] = aux_sym_float_token1,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [aux_sym_unit_term_token1] = aux_sym_unit_term_token1,
  [anon_sym_u00b0] = anon_sym_u00b0,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
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
  [aux_sym_integer_repeat1] = aux_sym_integer_repeat1,
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
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_integer_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_unit_term_token1] = {
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
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
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
  [aux_sym_integer_repeat1] = {
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
  [14] = 2,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      ADVANCE_MAP(
        '%', 19,
        '*', 15,
        '.', 5,
        '/', 16,
        '^', 20,
        0xb0, 18,
        '+', 9,
        '-', 9,
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
          lookahead == '-') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 2:
      if (eof) ADVANCE(4);
      if (lookahead == '%') ADVANCE(19);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == 0xb0) ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 3:
      if (eof) ADVANCE(4);
      if (lookahead == '%') ADVANCE(19);
      if (lookahead == 0xb0) ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      if (lookahead == '_') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_float_token1);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(21);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_unit_term_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_u00b0);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
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
  [46] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [aux_sym_integer_token1] = ACTIONS(1),
    [aux_sym_integer_token2] = ACTIONS(1),
    [aux_sym_float_token1] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [aux_sym_unit_term_token1] = ACTIONS(1),
    [anon_sym_u00b0] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
  },
  [1] = {
    [sym_expression] = STATE(45),
    [sym_variable] = STATE(44),
    [sym__scalar] = STATE(44),
    [sym__number] = STATE(10),
    [sym_integer] = STATE(10),
    [sym_float] = STATE(10),
    [sym_quantity] = STATE(44),
    [aux_sym_integer_repeat1] = STATE(4),
    [anon_sym_DOT] = ACTIONS(3),
    [sym_name] = ACTIONS(5),
    [aux_sym_integer_token1] = ACTIONS(7),
    [aux_sym_integer_token2] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(13), 1,
      aux_sym_integer_token2,
    STATE(2), 1,
      aux_sym_integer_repeat1,
    ACTIONS(16), 2,
      aux_sym_float_token1,
      aux_sym_unit_term_token1,
    ACTIONS(11), 6,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_u00b0,
      anon_sym_PERCENT,
  [19] = 6,
    ACTIONS(20), 1,
      anon_sym_DOT,
    ACTIONS(22), 1,
      aux_sym_integer_token2,
    ACTIONS(24), 1,
      aux_sym_float_token1,
    ACTIONS(26), 1,
      aux_sym_unit_term_token1,
    STATE(2), 1,
      aux_sym_integer_repeat1,
    ACTIONS(18), 3,
      ts_builtin_sym_end,
      anon_sym_u00b0,
      anon_sym_PERCENT,
  [40] = 6,
    ACTIONS(22), 1,
      aux_sym_integer_token2,
    ACTIONS(30), 1,
      anon_sym_DOT,
    ACTIONS(32), 1,
      aux_sym_float_token1,
    ACTIONS(34), 1,
      aux_sym_unit_term_token1,
    STATE(2), 1,
      aux_sym_integer_repeat1,
    ACTIONS(28), 3,
      ts_builtin_sym_end,
      anon_sym_u00b0,
      anon_sym_PERCENT,
  [61] = 5,
    ACTIONS(24), 1,
      aux_sym_float_token1,
    ACTIONS(38), 1,
      aux_sym_integer_token2,
    ACTIONS(40), 1,
      aux_sym_unit_term_token1,
    STATE(7), 1,
      aux_sym_integer_repeat1,
    ACTIONS(36), 3,
      ts_builtin_sym_end,
      anon_sym_u00b0,
      anon_sym_PERCENT,
  [79] = 5,
    ACTIONS(22), 1,
      aux_sym_integer_token2,
    ACTIONS(24), 1,
      aux_sym_float_token1,
    ACTIONS(40), 1,
      aux_sym_unit_term_token1,
    STATE(2), 1,
      aux_sym_integer_repeat1,
    ACTIONS(36), 3,
      ts_builtin_sym_end,
      anon_sym_u00b0,
      anon_sym_PERCENT,
  [97] = 5,
    ACTIONS(22), 1,
      aux_sym_integer_token2,
    ACTIONS(44), 1,
      aux_sym_float_token1,
    ACTIONS(46), 1,
      aux_sym_unit_term_token1,
    STATE(2), 1,
      aux_sym_integer_repeat1,
    ACTIONS(42), 3,
      ts_builtin_sym_end,
      anon_sym_u00b0,
      anon_sym_PERCENT,
  [115] = 5,
    ACTIONS(44), 1,
      aux_sym_float_token1,
    ACTIONS(46), 1,
      aux_sym_unit_term_token1,
    ACTIONS(48), 1,
      aux_sym_integer_token2,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    ACTIONS(42), 3,
      ts_builtin_sym_end,
      anon_sym_u00b0,
      anon_sym_PERCENT,
  [133] = 5,
    ACTIONS(22), 1,
      aux_sym_integer_token2,
    ACTIONS(52), 1,
      aux_sym_float_token1,
    ACTIONS(54), 1,
      aux_sym_unit_term_token1,
    STATE(2), 1,
      aux_sym_integer_repeat1,
    ACTIONS(50), 3,
      ts_builtin_sym_end,
      anon_sym_u00b0,
      anon_sym_PERCENT,
  [151] = 4,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      sym_unit_term,
    STATE(43), 1,
      sym_unit,
    ACTIONS(58), 3,
      aux_sym_unit_term_token1,
      anon_sym_u00b0,
      anon_sym_PERCENT,
  [166] = 3,
    ACTIONS(62), 1,
      aux_sym_integer_token2,
    STATE(14), 1,
      aux_sym_integer_repeat1,
    ACTIONS(60), 4,
      ts_builtin_sym_end,
      aux_sym_unit_term_token1,
      anon_sym_u00b0,
      anon_sym_PERCENT,
  [179] = 3,
    ACTIONS(62), 1,
      aux_sym_integer_token2,
    STATE(14), 1,
      aux_sym_integer_repeat1,
    ACTIONS(42), 4,
      ts_builtin_sym_end,
      aux_sym_unit_term_token1,
      anon_sym_u00b0,
      anon_sym_PERCENT,
  [192] = 3,
    ACTIONS(62), 1,
      aux_sym_integer_token2,
    STATE(14), 1,
      aux_sym_integer_repeat1,
    ACTIONS(50), 4,
      ts_builtin_sym_end,
      aux_sym_unit_term_token1,
      anon_sym_u00b0,
      anon_sym_PERCENT,
  [205] = 3,
    ACTIONS(64), 1,
      aux_sym_integer_token2,
    STATE(14), 1,
      aux_sym_integer_repeat1,
    ACTIONS(11), 4,
      ts_builtin_sym_end,
      aux_sym_unit_term_token1,
      anon_sym_u00b0,
      anon_sym_PERCENT,
  [218] = 3,
    ACTIONS(62), 1,
      aux_sym_integer_token2,
    STATE(14), 1,
      aux_sym_integer_repeat1,
    ACTIONS(67), 4,
      ts_builtin_sym_end,
      aux_sym_unit_term_token1,
      anon_sym_u00b0,
      anon_sym_PERCENT,
  [231] = 3,
    ACTIONS(71), 1,
      anon_sym_STAR,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      anon_sym_SLASH,
    ACTIONS(73), 2,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
  [243] = 5,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_STAR,
    ACTIONS(79), 1,
      anon_sym_SLASH,
    STATE(20), 1,
      aux_sym_unit_repeat1,
    STATE(26), 1,
      aux_sym_unit_repeat2,
  [259] = 3,
    ACTIONS(22), 1,
      aux_sym_integer_token2,
    STATE(2), 1,
      aux_sym_integer_repeat1,
    ACTIONS(18), 3,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
  [271] = 3,
    ACTIONS(22), 1,
      aux_sym_integer_token2,
    STATE(2), 1,
      aux_sym_integer_repeat1,
    ACTIONS(28), 3,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
  [283] = 5,
    ACTIONS(77), 1,
      anon_sym_STAR,
    ACTIONS(79), 1,
      anon_sym_SLASH,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      aux_sym_unit_repeat1,
    STATE(31), 1,
      aux_sym_unit_repeat2,
  [299] = 4,
    ACTIONS(83), 1,
      aux_sym_integer_token1,
    ACTIONS(85), 1,
      aux_sym_integer_token2,
    STATE(19), 1,
      aux_sym_integer_repeat1,
    STATE(25), 1,
      sym_integer,
  [312] = 2,
    STATE(40), 1,
      sym_unit_term,
    ACTIONS(58), 3,
      aux_sym_unit_term_token1,
      anon_sym_u00b0,
      anon_sym_PERCENT,
  [321] = 3,
    ACTIONS(89), 1,
      anon_sym_STAR,
    STATE(23), 1,
      aux_sym_unit_repeat1,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      anon_sym_SLASH,
  [332] = 2,
    STATE(30), 1,
      sym_unit_term,
    ACTIONS(58), 3,
      aux_sym_unit_term_token1,
      anon_sym_u00b0,
      anon_sym_PERCENT,
  [341] = 1,
    ACTIONS(92), 3,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
  [347] = 3,
    ACTIONS(79), 1,
      anon_sym_SLASH,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      aux_sym_unit_repeat2,
  [357] = 3,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    ACTIONS(98), 1,
      anon_sym_DOT,
    STATE(33), 1,
      aux_sym_variable_repeat1,
  [367] = 3,
    ACTIONS(100), 1,
      anon_sym_DOT,
    ACTIONS(102), 1,
      aux_sym_integer_token2,
    STATE(3), 1,
      aux_sym_integer_repeat1,
  [377] = 3,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    ACTIONS(106), 1,
      anon_sym_SLASH,
    STATE(29), 1,
      aux_sym_unit_repeat2,
  [387] = 1,
    ACTIONS(87), 3,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
  [393] = 3,
    ACTIONS(79), 1,
      anon_sym_SLASH,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      aux_sym_unit_repeat2,
  [403] = 3,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    ACTIONS(113), 1,
      anon_sym_DOT,
    STATE(32), 1,
      aux_sym_variable_repeat1,
  [413] = 3,
    ACTIONS(98), 1,
      anon_sym_DOT,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    STATE(32), 1,
      aux_sym_variable_repeat1,
  [423] = 2,
    ACTIONS(118), 1,
      aux_sym_integer_token2,
    STATE(12), 1,
      aux_sym_integer_repeat1,
  [430] = 2,
    ACTIONS(120), 1,
      aux_sym_integer_token2,
    STATE(18), 1,
      aux_sym_integer_repeat1,
  [437] = 2,
    ACTIONS(122), 1,
      aux_sym_integer_token2,
    STATE(6), 1,
      aux_sym_integer_repeat1,
  [444] = 2,
    ACTIONS(124), 1,
      aux_sym_integer_token2,
    STATE(11), 1,
      aux_sym_integer_repeat1,
  [451] = 2,
    ACTIONS(126), 1,
      aux_sym_integer_token2,
    STATE(13), 1,
      aux_sym_integer_repeat1,
  [458] = 1,
    ACTIONS(111), 2,
      ts_builtin_sym_end,
      anon_sym_DOT,
  [463] = 1,
    ACTIONS(104), 2,
      ts_builtin_sym_end,
      anon_sym_SLASH,
  [468] = 2,
    ACTIONS(128), 1,
      aux_sym_integer_token2,
    STATE(15), 1,
      aux_sym_integer_repeat1,
  [475] = 2,
    ACTIONS(38), 1,
      aux_sym_integer_token2,
    STATE(7), 1,
      aux_sym_integer_repeat1,
  [482] = 1,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
  [486] = 1,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
  [490] = 1,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
  [494] = 1,
    ACTIONS(136), 1,
      sym_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 19,
  [SMALL_STATE(4)] = 40,
  [SMALL_STATE(5)] = 61,
  [SMALL_STATE(6)] = 79,
  [SMALL_STATE(7)] = 97,
  [SMALL_STATE(8)] = 115,
  [SMALL_STATE(9)] = 133,
  [SMALL_STATE(10)] = 151,
  [SMALL_STATE(11)] = 166,
  [SMALL_STATE(12)] = 179,
  [SMALL_STATE(13)] = 192,
  [SMALL_STATE(14)] = 205,
  [SMALL_STATE(15)] = 218,
  [SMALL_STATE(16)] = 231,
  [SMALL_STATE(17)] = 243,
  [SMALL_STATE(18)] = 259,
  [SMALL_STATE(19)] = 271,
  [SMALL_STATE(20)] = 283,
  [SMALL_STATE(21)] = 299,
  [SMALL_STATE(22)] = 312,
  [SMALL_STATE(23)] = 321,
  [SMALL_STATE(24)] = 332,
  [SMALL_STATE(25)] = 341,
  [SMALL_STATE(26)] = 347,
  [SMALL_STATE(27)] = 357,
  [SMALL_STATE(28)] = 367,
  [SMALL_STATE(29)] = 377,
  [SMALL_STATE(30)] = 387,
  [SMALL_STATE(31)] = 393,
  [SMALL_STATE(32)] = 403,
  [SMALL_STATE(33)] = 413,
  [SMALL_STATE(34)] = 423,
  [SMALL_STATE(35)] = 430,
  [SMALL_STATE(36)] = 437,
  [SMALL_STATE(37)] = 444,
  [SMALL_STATE(38)] = 451,
  [SMALL_STATE(39)] = 458,
  [SMALL_STATE(40)] = 463,
  [SMALL_STATE(41)] = 468,
  [SMALL_STATE(42)] = 475,
  [SMALL_STATE(43)] = 482,
  [SMALL_STATE(44)] = 486,
  [SMALL_STATE(45)] = 490,
  [SMALL_STATE(46)] = 494,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2, 0, 0),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [16] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2, 0, 0),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 2, 0, 0),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [24] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 2, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 2, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 2, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 3, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 3, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 4, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 4, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scalar, 1, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 5, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 6, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit_term, 1, 0, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit_term, 1, 0, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1, 0, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 2, 0, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unit_repeat1, 2, 0, 0),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unit_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit_term, 3, 0, 5),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 2, 0, 4),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unit_repeat2, 2, 0, 0),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unit_repeat2, 2, 0, 0), SHIFT_REPEAT(22),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 3, 0, 6),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2, 0, 0),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 2, 0, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
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
