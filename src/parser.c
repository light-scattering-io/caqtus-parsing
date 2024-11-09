#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 24
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 20
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 7

enum ts_symbol_identifiers {
  anon_sym_DOT = 1,
  sym_name = 2,
  anon_sym_STAR = 3,
  anon_sym_SLASH = 4,
  aux_sym_unit_term_token1 = 5,
  anon_sym_CARET = 6,
  anon_sym_STAR_STAR = 7,
  sym_integer = 8,
  sym_float = 9,
  sym_expression = 10,
  sym_variable = 11,
  sym__scalar = 12,
  sym__number = 13,
  sym_quantity = 14,
  sym_unit = 15,
  sym_unit_term = 16,
  aux_sym_variable_repeat1 = 17,
  aux_sym_unit_repeat1 = 18,
  aux_sym_unit_repeat2 = 19,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOT] = ".",
  [sym_name] = "name",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [aux_sym_unit_term_token1] = "unit_term_token1",
  [anon_sym_CARET] = "^",
  [anon_sym_STAR_STAR] = "**",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_expression] = "expression",
  [sym_variable] = "variable",
  [sym__scalar] = "_scalar",
  [sym__number] = "_number",
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
  [sym_name] = sym_name,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [aux_sym_unit_term_token1] = aux_sym_unit_term_token1,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_expression] = sym_expression,
  [sym_variable] = sym_variable,
  [sym__scalar] = sym__scalar,
  [sym__number] = sym__number,
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
  [sym_name] = {
    .visible = true,
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
  [aux_sym_unit_term_token1] = {
    .visible = false,
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
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '^') ADVANCE(16);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 1:
      if (lookahead == '.') ADVANCE(4);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 3:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 4:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 7:
      if (eof) ADVANCE(8);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(17);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_unit_term_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '_') ADVANCE(19);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(24);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
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
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 7},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [aux_sym_unit_term_token1] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
  },
  [1] = {
    [sym_expression] = STATE(19),
    [sym_variable] = STATE(21),
    [sym__scalar] = STATE(21),
    [sym__number] = STATE(5),
    [sym_quantity] = STATE(21),
    [sym_name] = ACTIONS(3),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(11), 1,
      anon_sym_STAR,
    ACTIONS(9), 2,
      ts_builtin_sym_end,
      anon_sym_SLASH,
    ACTIONS(13), 2,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
  [12] = 5,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_STAR,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    STATE(4), 1,
      aux_sym_unit_repeat1,
    STATE(12), 1,
      aux_sym_unit_repeat2,
  [28] = 5,
    ACTIONS(17), 1,
      anon_sym_STAR,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      aux_sym_unit_repeat1,
    STATE(13), 1,
      aux_sym_unit_repeat2,
  [44] = 4,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      aux_sym_unit_term_token1,
    STATE(3), 1,
      sym_unit_term,
    STATE(22), 1,
      sym_unit,
  [57] = 3,
    ACTIONS(29), 1,
      anon_sym_STAR,
    STATE(6), 1,
      aux_sym_unit_repeat1,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      anon_sym_SLASH,
  [68] = 3,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    ACTIONS(34), 1,
      anon_sym_DOT,
    STATE(8), 1,
      aux_sym_variable_repeat1,
  [78] = 3,
    ACTIONS(34), 1,
      anon_sym_DOT,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      aux_sym_variable_repeat1,
  [88] = 1,
    ACTIONS(27), 3,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
  [94] = 3,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    ACTIONS(40), 1,
      anon_sym_DOT,
    STATE(10), 1,
      aux_sym_variable_repeat1,
  [104] = 1,
    ACTIONS(43), 3,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
  [110] = 3,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    STATE(14), 1,
      aux_sym_unit_repeat2,
  [120] = 3,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(14), 1,
      aux_sym_unit_repeat2,
  [130] = 3,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      anon_sym_SLASH,
    STATE(14), 1,
      aux_sym_unit_repeat2,
  [140] = 1,
    ACTIONS(38), 2,
      ts_builtin_sym_end,
      anon_sym_DOT,
  [145] = 2,
    ACTIONS(25), 1,
      aux_sym_unit_term_token1,
    STATE(18), 1,
      sym_unit_term,
  [152] = 2,
    ACTIONS(25), 1,
      aux_sym_unit_term_token1,
    STATE(9), 1,
      sym_unit_term,
  [159] = 1,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      anon_sym_SLASH,
  [164] = 1,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
  [168] = 1,
    ACTIONS(56), 1,
      sym_name,
  [172] = 1,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
  [176] = 1,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
  [180] = 1,
    ACTIONS(62), 1,
      sym_integer,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 12,
  [SMALL_STATE(4)] = 28,
  [SMALL_STATE(5)] = 44,
  [SMALL_STATE(6)] = 57,
  [SMALL_STATE(7)] = 68,
  [SMALL_STATE(8)] = 78,
  [SMALL_STATE(9)] = 88,
  [SMALL_STATE(10)] = 94,
  [SMALL_STATE(11)] = 104,
  [SMALL_STATE(12)] = 110,
  [SMALL_STATE(13)] = 120,
  [SMALL_STATE(14)] = 130,
  [SMALL_STATE(15)] = 140,
  [SMALL_STATE(16)] = 145,
  [SMALL_STATE(17)] = 152,
  [SMALL_STATE(18)] = 159,
  [SMALL_STATE(19)] = 164,
  [SMALL_STATE(20)] = 168,
  [SMALL_STATE(21)] = 172,
  [SMALL_STATE(22)] = 176,
  [SMALL_STATE(23)] = 180,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit_term, 1, 0, 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit_term, 1, 0, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1, 0, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 2, 0, 3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scalar, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unit_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unit_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2, 0, 0),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit_term, 3, 0, 5),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 2, 0, 4),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 3, 0, 6),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unit_repeat2, 2, 0, 0),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unit_repeat2, 2, 0, 0), SHIFT_REPEAT(16),
  [54] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 2, 0, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
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
