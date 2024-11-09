#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 16
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 14
#define ALIAS_COUNT 0
#define TOKEN_COUNT 6
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_DOT = 1,
  sym_name = 2,
  aux_sym_integer_token1 = 3,
  anon_sym_PLUS = 4,
  anon_sym_DASH = 5,
  sym_expression = 6,
  sym_variable = 7,
  sym_scalar = 8,
  sym_number = 9,
  sym_integer = 10,
  sym_sign = 11,
  aux_sym_variable_repeat1 = 12,
  aux_sym_integer_repeat1 = 13,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOT] = ".",
  [sym_name] = "name",
  [aux_sym_integer_token1] = "integer_token1",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [sym_expression] = "expression",
  [sym_variable] = "variable",
  [sym_scalar] = "scalar",
  [sym_number] = "number",
  [sym_integer] = "integer",
  [sym_sign] = "sign",
  [aux_sym_variable_repeat1] = "variable_repeat1",
  [aux_sym_integer_repeat1] = "integer_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_name] = sym_name,
  [aux_sym_integer_token1] = aux_sym_integer_token1,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_expression] = sym_expression,
  [sym_variable] = sym_variable,
  [sym_scalar] = sym_scalar,
  [sym_number] = sym_number,
  [sym_integer] = sym_integer,
  [sym_sign] = sym_sign,
  [aux_sym_variable_repeat1] = aux_sym_variable_repeat1,
  [aux_sym_integer_repeat1] = aux_sym_integer_repeat1,
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
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
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
  [sym_scalar] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_sign] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(1);
      if (lookahead == '+') ADVANCE(6);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '_') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [aux_sym_integer_token1] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
  },
  [1] = {
    [sym_expression] = STATE(11),
    [sym_variable] = STATE(12),
    [sym_scalar] = STATE(12),
    [sym_number] = STATE(13),
    [sym_integer] = STATE(14),
    [sym_sign] = STATE(8),
    [aux_sym_integer_repeat1] = STATE(3),
    [sym_name] = ACTIONS(3),
    [aux_sym_integer_token1] = ACTIONS(5),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      anon_sym_DOT,
    STATE(4), 1,
      aux_sym_variable_repeat1,
  [10] = 3,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      aux_sym_integer_token1,
    STATE(6), 1,
      aux_sym_integer_repeat1,
  [20] = 3,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      aux_sym_variable_repeat1,
  [30] = 3,
    ACTIONS(15), 1,
      aux_sym_integer_token1,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      aux_sym_integer_repeat1,
  [40] = 3,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      aux_sym_integer_token1,
    STATE(6), 1,
      aux_sym_integer_repeat1,
  [50] = 3,
    ACTIONS(26), 1,
      ts_builtin_sym_end,
    ACTIONS(28), 1,
      anon_sym_DOT,
    STATE(7), 1,
      aux_sym_variable_repeat1,
  [60] = 2,
    ACTIONS(31), 1,
      aux_sym_integer_token1,
    STATE(5), 1,
      aux_sym_integer_repeat1,
  [67] = 1,
    ACTIONS(26), 2,
      ts_builtin_sym_end,
      anon_sym_DOT,
  [72] = 1,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
  [76] = 1,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
  [80] = 1,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
  [84] = 1,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
  [88] = 1,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
  [92] = 1,
    ACTIONS(43), 1,
      sym_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 10,
  [SMALL_STATE(4)] = 20,
  [SMALL_STATE(5)] = 30,
  [SMALL_STATE(6)] = 40,
  [SMALL_STATE(7)] = 50,
  [SMALL_STATE(8)] = 60,
  [SMALL_STATE(9)] = 67,
  [SMALL_STATE(10)] = 72,
  [SMALL_STATE(11)] = 76,
  [SMALL_STATE(12)] = 80,
  [SMALL_STATE(13)] = 84,
  [SMALL_STATE(14)] = 88,
  [SMALL_STATE(15)] = 92,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 2, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2, 0, 0),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sign, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
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
