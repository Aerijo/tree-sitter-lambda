#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 5
#define STATE_COUNT 66
#define SYMBOL_COUNT 48
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym_comment = 1,
  anon_sym_GT_GT = 2,
  anon_sym_PIPE_GT = 3,
  anon_sym_DOLLAR_GT = 4,
  anon_sym_LF = 5,
  anon_sym_SEMI = 6,
  anon_sym_True = 7,
  anon_sym_False = 8,
  anon_sym_0 = 9,
  anon_sym_1 = 10,
  anon_sym_2 = 11,
  aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH = 12,
  aux_sym_SLASH_QMARK_BSLASHd_PLUS_SLASH = 13,
  anon_sym_BSLASH = 14,
  aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH = 15,
  anon_sym_3 = 16,
  anon_sym_LPAREN = 17,
  anon_sym_RPAREN = 18,
  anon_sym_DOT = 19,
  anon_sym_DASH_GT = 20,
  anon_sym_EQ_GT = 21,
  anon_sym_EQ = 22,
  anon_sym_4 = 23,
  anon_sym_EQ_EQ = 24,
  anon_sym_5 = 25,
  sym_program = 26,
  sym_block = 27,
  sym_begin_block = 28,
  sym__operator = 29,
  sym_expression = 30,
  sym__term = 31,
  sym_named_variable = 32,
  sym_apply = 33,
  sym_variable = 34,
  sym_numbered_variable = 35,
  sym_function = 36,
  sym_bound_variables = 37,
  sym_func_body = 38,
  sym__lambda = 39,
  sym_group = 40,
  sym__func_sep = 41,
  sym_beta_reduce = 42,
  sym_alpha_convert = 43,
  aux_sym_program_repeat1 = 44,
  aux_sym_block_repeat1 = 45,
  aux_sym_expression_repeat1 = 46,
  aux_sym_bound_variables_repeat1 = 47,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym_comment] = "comment",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_PIPE_GT] = "|>",
  [anon_sym_DOLLAR_GT] = "$>",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI] = ";",
  [anon_sym_True] = "True",
  [anon_sym_False] = "False",
  [anon_sym_0] = " 0",
  [anon_sym_1] = " 1",
  [anon_sym_2] = " 2",
  [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = "/[a-z]/",
  [aux_sym_SLASH_QMARK_BSLASHd_PLUS_SLASH] = "/_?\\d+/",
  [anon_sym_BSLASH] = "\\",
  [aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH] = "/\\\\?(LAMBDA|lambda|Lambda)/",
  [anon_sym_3] = "λ",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOT] = ".",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_EQ] = "=",
  [anon_sym_4] = "β",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_5] = "α",
  [sym_program] = "program",
  [sym_block] = "block",
  [sym_begin_block] = "begin_block",
  [sym__operator] = "_operator",
  [sym_expression] = "expression",
  [sym__term] = "_term",
  [sym_named_variable] = "named_variable",
  [sym_apply] = "apply",
  [sym_variable] = "variable",
  [sym_numbered_variable] = "numbered_variable",
  [sym_function] = "function",
  [sym_bound_variables] = "bound_variables",
  [sym_func_body] = "func_body",
  [sym__lambda] = "_lambda",
  [sym_group] = "group",
  [sym__func_sep] = "_func_sep",
  [sym_beta_reduce] = "beta_reduce",
  [sym_alpha_convert] = "alpha_convert",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_expression_repeat1] = "expression_repeat1",
  [aux_sym_bound_variables_repeat1] = "bound_variables_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_True] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_False] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_QMARK_BSLASHd_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_3] = {
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_5] = {
    .visible = true,
    .named = false,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_block] = {
    .visible = true,
    .named = true,
  },
  [sym__operator] = {
    .visible = false,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__term] = {
    .visible = false,
    .named = true,
  },
  [sym_named_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_apply] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_numbered_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_bound_variables] = {
    .visible = true,
    .named = true,
  },
  [sym_func_body] = {
    .visible = true,
    .named = true,
  },
  [sym__lambda] = {
    .visible = false,
    .named = true,
  },
  [sym_group] = {
    .visible = true,
    .named = true,
  },
  [sym__func_sep] = {
    .visible = false,
    .named = true,
  },
  [sym_beta_reduce] = {
    .visible = true,
    .named = true,
  },
  [sym_alpha_convert] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bound_variables_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == ' ')
        ADVANCE(3);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '$')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '.')
        ADVANCE(17);
      if (lookahead == ';')
        ADVANCE(22);
      if (lookahead == '=')
        ADVANCE(23);
      if (lookahead == '>')
        ADVANCE(26);
      if (lookahead == 'F')
        ADVANCE(28);
      if (lookahead == 'L')
        ADVANCE(33);
      if (lookahead == 'T')
        ADVANCE(43);
      if (lookahead == '\\')
        ADVANCE(47);
      if (lookahead == '_')
        ADVANCE(49);
      if (lookahead == 'l')
        ADVANCE(50);
      if (lookahead == '|')
        ADVANCE(51);
      if (lookahead == 945)
        ADVANCE(53);
      if (lookahead == 946)
        ADVANCE(54);
      if (lookahead == 955)
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 3:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == ' ')
        ADVANCE(3);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '$')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '.')
        ADVANCE(17);
      if (lookahead == '0')
        ADVANCE(18);
      if (lookahead == '1')
        ADVANCE(20);
      if (lookahead == '2')
        ADVANCE(21);
      if (lookahead == ';')
        ADVANCE(22);
      if (lookahead == '=')
        ADVANCE(23);
      if (lookahead == '>')
        ADVANCE(26);
      if (lookahead == 'F')
        ADVANCE(28);
      if (lookahead == 'L')
        ADVANCE(33);
      if (lookahead == 'T')
        ADVANCE(43);
      if (lookahead == '\\')
        ADVANCE(47);
      if (lookahead == '_')
        ADVANCE(49);
      if (lookahead == 'l')
        ADVANCE(50);
      if (lookahead == '|')
        ADVANCE(51);
      if (lookahead == 945)
        ADVANCE(53);
      if (lookahead == 946)
        ADVANCE(54);
      if (lookahead == 955)
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(0);
      if (('3' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      END_STATE();
    case 4:
      if (lookahead == '\"')
        ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '\"')
        ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '\"')
        ADVANCE(7);
      if (lookahead != 0)
        ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '\"')
        ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '\"')
        ADVANCE(9);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 10:
      if (lookahead == '>')
        ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_DOLLAR_GT);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 14:
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '>')
        ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == '\n')
        ADVANCE(9);
      if (lookahead != 0)
        ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_SLASH_QMARK_BSLASHd_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_1);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_2);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(24);
      if (lookahead == '>')
        ADVANCE(25);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 26:
      if (lookahead == '>')
        ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 28:
      if (lookahead == 'a')
        ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'l')
        ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 's')
        ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == 'e')
        ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_False);
      END_STATE();
    case 33:
      if (lookahead == 'A')
        ADVANCE(34);
      if (lookahead == 'a')
        ADVANCE(39);
      END_STATE();
    case 34:
      if (lookahead == 'M')
        ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 'B')
        ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 'D')
        ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 'A')
        ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH);
      END_STATE();
    case 39:
      if (lookahead == 'm')
        ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 'b')
        ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == 'd')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 'a')
        ADVANCE(38);
      END_STATE();
    case 43:
      if (lookahead == 'r')
        ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == 'u')
        ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 'e')
        ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_True);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'L')
        ADVANCE(33);
      if (lookahead == 'l')
        ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 'a')
        ADVANCE(39);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(39);
      END_STATE();
    case 51:
      if (lookahead == '>')
        ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_PIPE_GT);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH);
      END_STATE();
    case 57:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(57);
      if (lookahead == ' ')
        ADVANCE(58);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '$')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == '-')
        ADVANCE(59);
      if (lookahead == '=')
        ADVANCE(23);
      if (lookahead == '>')
        ADVANCE(26);
      if (lookahead == 'F')
        ADVANCE(28);
      if (lookahead == 'L')
        ADVANCE(33);
      if (lookahead == 'T')
        ADVANCE(43);
      if (lookahead == '\\')
        ADVANCE(47);
      if (lookahead == 'l')
        ADVANCE(50);
      if (lookahead == '|')
        ADVANCE(51);
      if (lookahead == 945)
        ADVANCE(53);
      if (lookahead == 946)
        ADVANCE(54);
      if (lookahead == 955)
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(57);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      END_STATE();
    case 58:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(57);
      if (lookahead == ' ')
        ADVANCE(58);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '$')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == '-')
        ADVANCE(59);
      if (lookahead == '0')
        ADVANCE(60);
      if (lookahead == '1')
        ADVANCE(61);
      if (lookahead == '2')
        ADVANCE(62);
      if (lookahead == '=')
        ADVANCE(23);
      if (lookahead == '>')
        ADVANCE(26);
      if (lookahead == 'F')
        ADVANCE(28);
      if (lookahead == 'L')
        ADVANCE(33);
      if (lookahead == 'T')
        ADVANCE(43);
      if (lookahead == '\\')
        ADVANCE(47);
      if (lookahead == 'l')
        ADVANCE(50);
      if (lookahead == '|')
        ADVANCE(51);
      if (lookahead == 945)
        ADVANCE(53);
      if (lookahead == 946)
        ADVANCE(54);
      if (lookahead == 955)
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(57);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      END_STATE();
    case 59:
      if (lookahead == '-')
        ADVANCE(15);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 63:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == ' ')
        ADVANCE(64);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(59);
      if (lookahead == ';')
        ADVANCE(22);
      if (lookahead == 'F')
        ADVANCE(28);
      if (lookahead == 'L')
        ADVANCE(33);
      if (lookahead == 'T')
        ADVANCE(43);
      if (lookahead == '\\')
        ADVANCE(47);
      if (lookahead == '_')
        ADVANCE(49);
      if (lookahead == 'l')
        ADVANCE(50);
      if (lookahead == 955)
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(63);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      END_STATE();
    case 64:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == ' ')
        ADVANCE(64);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(59);
      if (lookahead == '0')
        ADVANCE(18);
      if (lookahead == '1')
        ADVANCE(20);
      if (lookahead == '2')
        ADVANCE(21);
      if (lookahead == ';')
        ADVANCE(22);
      if (lookahead == 'F')
        ADVANCE(28);
      if (lookahead == 'L')
        ADVANCE(33);
      if (lookahead == 'T')
        ADVANCE(43);
      if (lookahead == '\\')
        ADVANCE(47);
      if (lookahead == '_')
        ADVANCE(49);
      if (lookahead == 'l')
        ADVANCE(50);
      if (lookahead == 955)
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(63);
      if (('3' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      END_STATE();
    case 65:
      if (lookahead == '\n')
        SKIP(65);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '.')
        ADVANCE(17);
      if (lookahead == '_')
        ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(65);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      END_STATE();
    case 66:
      if (lookahead == '\n')
        SKIP(66);
      if (lookahead == ' ')
        ADVANCE(67);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == '-')
        ADVANCE(59);
      if (lookahead == 'F')
        ADVANCE(28);
      if (lookahead == 'L')
        ADVANCE(33);
      if (lookahead == 'T')
        ADVANCE(43);
      if (lookahead == '\\')
        ADVANCE(47);
      if (lookahead == '_')
        ADVANCE(49);
      if (lookahead == 'l')
        ADVANCE(50);
      if (lookahead == 955)
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(66);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      END_STATE();
    case 67:
      if (lookahead == '\n')
        SKIP(66);
      if (lookahead == ' ')
        ADVANCE(67);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == '-')
        ADVANCE(59);
      if (lookahead == '0')
        ADVANCE(18);
      if (lookahead == '1')
        ADVANCE(20);
      if (lookahead == '2')
        ADVANCE(21);
      if (lookahead == 'F')
        ADVANCE(28);
      if (lookahead == 'L')
        ADVANCE(33);
      if (lookahead == 'T')
        ADVANCE(43);
      if (lookahead == '\\')
        ADVANCE(47);
      if (lookahead == '_')
        ADVANCE(49);
      if (lookahead == 'l')
        ADVANCE(50);
      if (lookahead == 955)
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(66);
      if (('3' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 57},
  [2] = {.lex_state = 57},
  [3] = {.lex_state = 63},
  [4] = {.lex_state = 63},
  [5] = {.lex_state = 65},
  [6] = {.lex_state = 57},
  [7] = {.lex_state = 57},
  [8] = {.lex_state = 57},
  [9] = {.lex_state = 57},
  [10] = {.lex_state = 63},
  [11] = {.lex_state = 63},
  [12] = {.lex_state = 63},
  [13] = {.lex_state = 65},
  [14] = {.lex_state = 57},
  [15] = {.lex_state = 63},
  [16] = {.lex_state = 63},
  [17] = {.lex_state = 57},
  [18] = {.lex_state = 66},
  [19] = {.lex_state = 57},
  [20] = {.lex_state = 63},
  [21] = {.lex_state = 57},
  [22] = {.lex_state = 57},
  [23] = {.lex_state = 57},
  [24] = {.lex_state = 65},
  [25] = {.lex_state = 57},
  [26] = {.lex_state = 57},
  [27] = {.lex_state = 63},
  [28] = {.lex_state = 65},
  [29] = {.lex_state = 65},
  [30] = {.lex_state = 65},
  [31] = {.lex_state = 65},
  [32] = {.lex_state = 57},
  [33] = {.lex_state = 57},
  [34] = {.lex_state = 63},
  [35] = {.lex_state = 57},
  [36] = {.lex_state = 57},
  [37] = {.lex_state = 57},
  [38] = {.lex_state = 57},
  [39] = {.lex_state = 65},
  [40] = {.lex_state = 63},
  [41] = {.lex_state = 57},
  [42] = {.lex_state = 57},
  [43] = {.lex_state = 57},
  [44] = {.lex_state = 57},
  [45] = {.lex_state = 57},
  [46] = {.lex_state = 57},
  [47] = {.lex_state = 57},
  [48] = {.lex_state = 57},
  [49] = {.lex_state = 57},
  [50] = {.lex_state = 65},
  [51] = {.lex_state = 57},
  [52] = {.lex_state = 57},
  [53] = {.lex_state = 65},
  [54] = {.lex_state = 57},
  [55] = {.lex_state = 57},
  [56] = {.lex_state = 57},
  [57] = {.lex_state = 57},
  [58] = {.lex_state = 57},
  [59] = {.lex_state = 57},
  [60] = {.lex_state = 63},
  [61] = {.lex_state = 63},
  [62] = {.lex_state = 57},
  [63] = {.lex_state = 57},
  [64] = {.lex_state = 63},
  [65] = {.lex_state = 57},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_PIPE_GT] = ACTIONS(1),
    [anon_sym_DOLLAR_GT] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_True] = ACTIONS(1),
    [anon_sym_False] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_QMARK_BSLASHd_PLUS_SLASH] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH] = ACTIONS(1),
    [anon_sym_3] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_4] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_5] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(7),
    [sym_block] = STATE(8),
    [sym_begin_block] = STATE(9),
    [sym_expression] = STATE(8),
    [sym__term] = STATE(10),
    [sym_named_variable] = STATE(11),
    [sym_apply] = STATE(12),
    [sym_variable] = STATE(11),
    [sym_numbered_variable] = STATE(11),
    [sym_function] = STATE(11),
    [sym__lambda] = STATE(13),
    [sym_group] = STATE(11),
    [aux_sym_program_repeat1] = STATE(14),
    [aux_sym_expression_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(6),
    [sym_comment] = ACTIONS(8),
    [anon_sym_GT_GT] = ACTIONS(10),
    [anon_sym_PIPE_GT] = ACTIONS(10),
    [anon_sym_DOLLAR_GT] = ACTIONS(10),
    [anon_sym_True] = ACTIONS(12),
    [anon_sym_False] = ACTIONS(12),
    [anon_sym_0] = ACTIONS(12),
    [anon_sym_1] = ACTIONS(12),
    [anon_sym_2] = ACTIONS(12),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(14),
    [anon_sym_BSLASH] = ACTIONS(16),
    [aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH] = ACTIONS(18),
    [anon_sym_3] = ACTIONS(18),
    [anon_sym_LPAREN] = ACTIONS(20),
  },
  [2] = {
    [sym_comment] = ACTIONS(8),
    [anon_sym_True] = ACTIONS(22),
    [anon_sym_False] = ACTIONS(22),
    [anon_sym_0] = ACTIONS(22),
    [anon_sym_1] = ACTIONS(22),
    [anon_sym_2] = ACTIONS(22),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(24),
    [aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH] = ACTIONS(22),
    [anon_sym_3] = ACTIONS(22),
    [anon_sym_LPAREN] = ACTIONS(22),
  },
  [3] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_LF] = ACTIONS(28),
    [anon_sym_SEMI] = ACTIONS(28),
    [anon_sym_True] = ACTIONS(28),
    [anon_sym_False] = ACTIONS(28),
    [anon_sym_0] = ACTIONS(28),
    [anon_sym_1] = ACTIONS(28),
    [anon_sym_2] = ACTIONS(28),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(28),
    [anon_sym_BSLASH] = ACTIONS(28),
    [aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH] = ACTIONS(28),
    [anon_sym_3] = ACTIONS(28),
    [anon_sym_LPAREN] = ACTIONS(28),
  },
  [4] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_LF] = ACTIONS(30),
    [anon_sym_SEMI] = ACTIONS(30),
    [anon_sym_True] = ACTIONS(30),
    [anon_sym_False] = ACTIONS(30),
    [anon_sym_0] = ACTIONS(30),
    [anon_sym_1] = ACTIONS(30),
    [anon_sym_2] = ACTIONS(30),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(30),
    [aux_sym_SLASH_QMARK_BSLASHd_PLUS_SLASH] = ACTIONS(32),
    [anon_sym_BSLASH] = ACTIONS(30),
    [aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH] = ACTIONS(30),
    [anon_sym_3] = ACTIONS(30),
    [anon_sym_LPAREN] = ACTIONS(30),
  },
  [5] = {
    [sym_comment] = ACTIONS(8),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(34),
  },
  [6] = {
    [sym__term] = STATE(21),
    [sym_named_variable] = STATE(22),
    [sym_apply] = STATE(23),
    [sym_variable] = STATE(22),
    [sym_numbered_variable] = STATE(22),
    [sym_function] = STATE(22),
    [sym__lambda] = STATE(24),
    [sym_group] = STATE(22),
    [aux_sym_expression_repeat1] = STATE(25),
    [sym_comment] = ACTIONS(8),
    [anon_sym_True] = ACTIONS(36),
    [anon_sym_False] = ACTIONS(36),
    [anon_sym_0] = ACTIONS(36),
    [anon_sym_1] = ACTIONS(36),
    [anon_sym_2] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(38),
    [anon_sym_BSLASH] = ACTIONS(16),
    [aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH] = ACTIONS(18),
    [anon_sym_3] = ACTIONS(18),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_RPAREN] = ACTIONS(42),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(44),
    [sym_comment] = ACTIONS(8),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(46),
    [sym_comment] = ACTIONS(8),
    [anon_sym_GT_GT] = ACTIONS(46),
    [anon_sym_PIPE_GT] = ACTIONS(46),
    [anon_sym_DOLLAR_GT] = ACTIONS(46),
    [anon_sym_True] = ACTIONS(46),
    [anon_sym_False] = ACTIONS(46),
    [anon_sym_0] = ACTIONS(46),
    [anon_sym_1] = ACTIONS(46),
    [anon_sym_2] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(48),
    [anon_sym_BSLASH] = ACTIONS(48),
    [aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH] = ACTIONS(46),
    [anon_sym_3] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(46),
  },
  [9] = {
    [sym_expression] = STATE(26),
    [sym__term] = STATE(10),
    [sym_named_variable] = STATE(11),
    [sym_apply] = STATE(12),
    [sym_variable] = STATE(11),
    [sym_numbered_variable] = STATE(11),
    [sym_function] = STATE(11),
    [sym__lambda] = STATE(13),
    [sym_group] = STATE(11),
    [aux_sym_expression_repeat1] = STATE(15),
    [sym_comment] = ACTIONS(8),
    [anon_sym_True] = ACTIONS(12),
    [anon_sym_False] = ACTIONS(12),
    [anon_sym_0] = ACTIONS(12),
    [anon_sym_1] = ACTIONS(12),
    [anon_sym_2] = ACTIONS(12),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(14),
    [anon_sym_BSLASH] = ACTIONS(16),
    [aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH] = ACTIONS(18),
    [anon_sym_3] = ACTIONS(18),
    [anon_sym_LPAREN] = ACTIONS(20),
  },
  [10] = {
    [sym__term] = STATE(27),
    [sym_named_variable] = STATE(11),
    [sym_apply] = STATE(12),
    [sym_variable] = STATE(11),
    [sym_numbered_variable] = STATE(11),
    [sym_function] = STATE(11),
    [sym__lambda] = STATE(13),
    [sym_group] = STATE(11),
    [sym_comment] = ACTIONS(26),
    [anon_sym_LF] = ACTIONS(50),
    [anon_sym_SEMI] = ACTIONS(50),
    [anon_sym_True] = ACTIONS(52),
    [anon_sym_False] = ACTIONS(52),
    [anon_sym_0] = ACTIONS(52),
    [anon_sym_1] = ACTIONS(52),
    [anon_sym_2] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(54),
    [anon_sym_BSLASH] = ACTIONS(56),
    [aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH] = ACTIONS(56),
    [anon_sym_3] = ACTIONS(56),
    [anon_sym_LPAREN] = ACTIONS(58),
  },
  [11] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_LF] = ACTIONS(60),
    [anon_sym_SEMI] = ACTIONS(60),
    [anon_sym_True] = ACTIONS(60),
    [anon_sym_False] = ACTIONS(60),
    [anon_sym_0] = ACTIONS(60),
    [anon_sym_1] = ACTIONS(60),
    [anon_sym_2] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(60),
    [anon_sym_BSLASH] = ACTIONS(60),
    [aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH] = ACTIONS(60),
    [anon_sym_3] = ACTIONS(60),
    [anon_sym_LPAREN] = ACTIONS(60),
  },
  [12] = {
    [sym__term] = STATE(27),
    [sym_named_variable] = STATE(11),
    [sym_apply] = STATE(12),
    [sym_variable] = STATE(11),
    [sym_numbered_variable] = STATE(11),
    [sym_function] = STATE(11),
    [sym__lambda] = STATE(13),
    [sym_group] = STATE(11),
    [sym_comment] = ACTIONS(26),
    [anon_sym_LF] = ACTIONS(60),
    [anon_sym_SEMI] = ACTIONS(60),
    [anon_sym_True] = ACTIONS(52),
    [anon_sym_False] = ACTIONS(52),
    [anon_sym_0] = ACTIONS(52),
    [anon_sym_1] = ACTIONS(52),
    [anon_sym_2] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(54),
    [anon_sym_BSLASH] = ACTIONS(56),
    [aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH] = ACTIONS(56),
    [anon_sym_3] = ACTIONS(56),
    [anon_sym_LPAREN] = ACTIONS(58),
  },
  [13] = {
    [sym_variable] = STATE(29),
    [sym_numbered_variable] = STATE(29),
    [sym_bound_variables] = STATE(30),
    [aux_sym_bound_variables_repeat1] = STATE(31),
    [sym_comment] = ACTIONS(8),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(62),
  },
  [14] = {
    [sym_block] = STATE(8),
    [sym_begin_block] = STATE(9),
    [sym_expression] = STATE(8),
    [sym__term] = STATE(10),
    [sym_named_variable] = STATE(11),
    [sym_apply] = STATE(12),
    [sym_variable] = STATE(11),
    [sym_numbered_variable] = STATE(11),
    [sym_function] = STATE(11),
    [sym__lambda] = STATE(13),
    [sym_group] = STATE(11),
    [aux_sym_program_repeat1] = STATE(32),
    [aux_sym_expression_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(64),
    [sym_comment] = ACTIONS(8),
    [anon_sym_GT_GT] = ACTIONS(10),
    [anon_sym_PIPE_GT] = ACTIONS(10),
    [anon_sym_DOLLAR_GT] = ACTIONS(10),
    [anon_sym_True] = ACTIONS(12),
    [anon_sym_False] = ACTIONS(12),
    [anon_sym_0] = ACTIONS(12),
    [anon_sym_1] = ACTIONS(12),
    [anon_sym_2] = ACTIONS(12),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(14),
    [anon_sym_BSLASH] = ACTIONS(16),
    [aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH] = ACTIONS(18),
    [anon_sym_3] = ACTIONS(18),
    [anon_sym_LPAREN] = ACTIONS(20),
  },
  [15] = {
    [sym__term] = STATE(10),
    [sym_named_variable] = STATE(11),
    [sym_apply] = STATE(12),
    [sym_variable] = STATE(11),
    [sym_numbered_variable] = STATE(11),
    [sym_function] = STATE(11),
    [sym__lambda] = STATE(13),
    [sym_group] = STATE(11),
    [aux_sym_expression_repeat1] = STATE(34),
    [sym_comment] = ACTIONS(26),
    [anon_sym_LF] = ACTIONS(66),
    [anon_sym_SEMI] = ACTIONS(66),
    [anon_sym_True] = ACTIONS(52),
    [anon_sym_False] = ACTIONS(52),
    [anon_sym_0] = ACTIONS(52),
    [anon_sym_1] = ACTIONS(52),
    [anon_sym_2] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(54),
    [anon_sym_BSLASH] = ACTIONS(56),
    [aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH] = ACTIONS(56),
    [anon_sym_3] = ACTIONS(56),
    [anon_sym_LPAREN] = ACTIONS(58),
  },
  [16] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_LF] = ACTIONS(68),
    [anon_sym_SEMI] = ACTIONS(68),
    [anon_sym_True] = ACTIONS(68),
    [anon_sym_False] = ACTIONS(68),
    [anon_sym_0] = ACTIONS(68),
    [anon_sym_1] = ACTIONS(68),
    [anon_sym_2] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(68),
    [anon_sym_BSLASH] = ACTIONS(68),
    [aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH] = ACTIONS(68),
    [anon_sym_3] = ACTIONS(68),
    [anon_sym_LPAREN] = ACTIONS(68),
  },
  [17] = {
    [sym_comment] = ACTIONS(8),
    [anon_sym_True] = ACTIONS(70),
    [anon_sym_False] = ACTIONS(70),
    [anon_sym_0] = ACTIONS(70),
    [anon_sym_1] = ACTIONS(70),
    [anon_sym_2] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(72),
    [anon_sym_BSLASH] = ACTIONS(72),
    [aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH] = ACTIONS(70),
    [anon_sym_3] = ACTIONS(70),
    [anon_sym_LPAREN] = ACTIONS(70),
    [anon_sym_RPAREN] = ACTIONS(70),
  },
  [18] = {
    [sym_comment] = ACTIONS(8),
    [anon_sym_True] = ACTIONS(74),
    [anon_sym_False] = ACTIONS(74),
    [anon_sym_0] = ACTIONS(76),
    [anon_sym_1] = ACTIONS(76),
    [anon_sym_2] = ACTIONS(76),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(76),
    [aux_sym_SLASH_QMARK_BSLASHd_PLUS_SLASH] = ACTIONS(78),
    [anon_sym_BSLASH] = ACTIONS(76),
    [aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH] = ACTIONS(74),
    [anon_sym_3] = ACTIONS(74),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_RPAREN] = ACTIONS(74),
  },
  [19] = {
    [sym__term] = STATE(21),
    [sym_named_variable] = STATE(22),
    [sym_apply] = STATE(23),
    [sym_variable] = STATE(22),
    [sym_numbered_variable] = STATE(22),
    [sym_function] = STATE(22),
    [sym__lambda] = STATE(24),
    [sym_group] = STATE(22),
    [aux_sym_expression_repeat1] = STATE(37),
    [sym_comment] = ACTIONS(8),
    [anon_sym_True] = ACTIONS(36),
    [anon_sym_False] = ACTIONS(36),
    [anon_sym_0] = ACTIONS(36),
    [anon_sym_1] = ACTIONS(36),
    [anon_sym_2] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(38),
    [anon_sym_BSLASH] = ACTIONS(16),
    [aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH] = ACTIONS(18),
    [anon_sym_3] = ACTIONS(18),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_RPAREN] = ACTIONS(80),
  },
  [20] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_LF] = ACTIONS(82),
    [anon_sym_SEMI] = ACTIONS(82),
    [anon_sym_True] = ACTIONS(82),
    [anon_sym_False] = ACTIONS(82),
    [anon_sym_0] = ACTIONS(82),
    [anon_sym_1] = ACTIONS(82),
    [anon_sym_2] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(82),
    [anon_sym_BSLASH] = ACTIONS(82),
    [aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH] = ACTIONS(82),
    [anon_sym_3] = ACTIONS(82),
    [anon_sym_LPAREN] = ACTIONS(82),
  },
  [21] = {
    [sym__term] = STATE(38),
    [sym_named_variable] = STATE(22),
    [sym_apply] = STATE(23),
    [sym_variable] = STATE(22),
    [sym_numbered_variable] = STATE(22),
    [sym_function] = STATE(22),
    [sym__lambda] = STATE(24),
    [sym_group] = STATE(22),
    [sym_comment] = ACTIONS(8),
    [anon_sym_True] = ACTIONS(36),
    [anon_sym_False] = ACTIONS(36),
    [anon_sym_0] = ACTIONS(36),
    [anon_sym_1] = ACTIONS(36),
    [anon_sym_2] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(38),
    [anon_sym_BSLASH] = ACTIONS(16),
    [aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH] = ACTIONS(18),
    [anon_sym_3] = ACTIONS(18),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_RPAREN] = ACTIONS(84),
  },
  [22] = {
    [sym_comment] = ACTIONS(8),
    [anon_sym_True] = ACTIONS(86),
    [anon_sym_False] = ACTIONS(86),
    [anon_sym_0] = ACTIONS(86),
    [anon_sym_1] = ACTIONS(86),
    [anon_sym_2] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(88),
    [anon_sym_BSLASH] = ACTIONS(88),
    [aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH] = ACTIONS(86),
    [anon_sym_3] = ACTIONS(86),
    [anon_sym_LPAREN] = ACTIONS(86),
    [anon_sym_RPAREN] = ACTIONS(86),
  },
  [23] = {
    [sym__term] = STATE(38),
    [sym_named_variable] = STATE(22),
    [sym_apply] = STATE(23),
    [sym_variable] = STATE(22),
    [sym_numbered_variable] = STATE(22),
    [sym_function] = STATE(22),
    [sym__lambda] = STATE(24),
    [sym_group] = STATE(22),
    [sym_comment] = ACTIONS(8),
    [anon_sym_True] = ACTIONS(36),
    [anon_sym_False] = ACTIONS(36),
    [anon_sym_0] = ACTIONS(36),
    [anon_sym_1] = ACTIONS(36),
    [anon_sym_2] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(38),
    [anon_sym_BSLASH] = ACTIONS(16),
    [aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH] = ACTIONS(18),
    [anon_sym_3] = ACTIONS(18),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_RPAREN] = ACTIONS(86),
  },
  [24] = {
    [sym_variable] = STATE(29),
    [sym_numbered_variable] = STATE(29),
    [sym_bound_variables] = STATE(39),
    [aux_sym_bound_variables_repeat1] = STATE(31),
    [sym_comment] = ACTIONS(8),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(62),
  },
  [25] = {
    [sym__term] = STATE(21),
    [sym_named_variable] = STATE(22),
    [sym_apply] = STATE(23),
    [sym_variable] = STATE(22),
    [sym_numbered_variable] = STATE(22),
    [sym_function] = STATE(22),
    [sym__lambda] = STATE(24),
    [sym_group] = STATE(22),
    [aux_sym_expression_repeat1] = STATE(41),
    [sym_comment] = ACTIONS(8),
    [anon_sym_True] = ACTIONS(36),
    [anon_sym_False] = ACTIONS(36),
    [anon_sym_0] = ACTIONS(36),
    [anon_sym_1] = ACTIONS(36),
    [anon_sym_2] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(38),
    [anon_sym_BSLASH] = ACTIONS(16),
    [aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH] = ACTIONS(18),
    [anon_sym_3] = ACTIONS(18),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_RPAREN] = ACTIONS(90),
  },
  [26] = {
    [sym__operator] = STATE(47),
    [sym_beta_reduce] = STATE(48),
    [sym_alpha_convert] = STATE(48),
    [aux_sym_block_repeat1] = STATE(49),
    [ts_builtin_sym_end] = ACTIONS(92),
    [sym_comment] = ACTIONS(8),
    [anon_sym_GT_GT] = ACTIONS(92),
    [anon_sym_PIPE_GT] = ACTIONS(92),
    [anon_sym_DOLLAR_GT] = ACTIONS(92),
    [anon_sym_True] = ACTIONS(92),
    [anon_sym_False] = ACTIONS(92),
    [anon_sym_0] = ACTIONS(92),
    [anon_sym_1] = ACTIONS(92),
    [anon_sym_2] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(94),
    [anon_sym_BSLASH] = ACTIONS(94),
    [aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH] = ACTIONS(92),
    [anon_sym_3] = ACTIONS(92),
    [anon_sym_LPAREN] = ACTIONS(92),
    [anon_sym_EQ_GT] = ACTIONS(96),
    [anon_sym_EQ] = ACTIONS(98),
    [anon_sym_4] = ACTIONS(100),
    [anon_sym_EQ_EQ] = ACTIONS(102),
    [anon_sym_5] = ACTIONS(104),
  },
  [27] = {
    [sym__term] = STATE(27),
    [sym_named_variable] = STATE(11),
    [sym_apply] = STATE(12),
    [sym_variable] = STATE(11),
    [sym_numbered_variable] = STATE(11),
    [sym_function] = STATE(11),
    [sym__lambda] = STATE(13),
    [sym_group] = STATE(11),
    [sym_comment] = ACTIONS(26),
    [anon_sym_LF] = ACTIONS(106),
    [anon_sym_SEMI] = ACTIONS(106),
    [anon_sym_True] = ACTIONS(106),
    [anon_sym_False] = ACTIONS(106),
    [anon_sym_0] = ACTIONS(106),
    [anon_sym_1] = ACTIONS(106),
    [anon_sym_2] = ACTIONS(106),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(106),
    [anon_sym_BSLASH] = ACTIONS(106),
    [aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH] = ACTIONS(106),
    [anon_sym_3] = ACTIONS(106),
    [anon_sym_LPAREN] = ACTIONS(106),
  },
  [28] = {
    [sym_comment] = ACTIONS(8),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_QMARK_BSLASHd_PLUS_SLASH] = ACTIONS(108),
    [anon_sym_DOT] = ACTIONS(74),
    [anon_sym_DASH_GT] = ACTIONS(74),
  },
  [29] = {
    [sym_comment] = ACTIONS(8),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(110),
    [anon_sym_DOT] = ACTIONS(110),
    [anon_sym_DASH_GT] = ACTIONS(110),
  },
  [30] = {
    [sym__func_sep] = STATE(52),
    [sym_comment] = ACTIONS(8),
    [anon_sym_DOT] = ACTIONS(112),
    [anon_sym_DASH_GT] = ACTIONS(112),
  },
  [31] = {
    [sym_variable] = STATE(29),
    [sym_numbered_variable] = STATE(29),
    [aux_sym_bound_variables_repeat1] = STATE(53),
    [sym_comment] = ACTIONS(8),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(62),
    [anon_sym_DOT] = ACTIONS(114),
    [anon_sym_DASH_GT] = ACTIONS(114),
  },
  [32] = {
    [sym_block] = STATE(8),
    [sym_begin_block] = STATE(9),
    [sym_expression] = STATE(8),
    [sym__term] = STATE(10),
    [sym_named_variable] = STATE(11),
    [sym_apply] = STATE(12),
    [sym_variable] = STATE(11),
    [sym_numbered_variable] = STATE(11),
    [sym_function] = STATE(11),
    [sym__lambda] = STATE(13),
    [sym_group] = STATE(11),
    [aux_sym_program_repeat1] = STATE(32),
    [aux_sym_expression_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(116),
    [sym_comment] = ACTIONS(8),
    [anon_sym_GT_GT] = ACTIONS(118),
    [anon_sym_PIPE_GT] = ACTIONS(118),
    [anon_sym_DOLLAR_GT] = ACTIONS(118),
    [anon_sym_True] = ACTIONS(121),
    [anon_sym_False] = ACTIONS(121),
    [anon_sym_0] = ACTIONS(121),
    [anon_sym_1] = ACTIONS(121),
    [anon_sym_2] = ACTIONS(121),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(124),
    [anon_sym_BSLASH] = ACTIONS(127),
    [aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH] = ACTIONS(130),
    [anon_sym_3] = ACTIONS(130),
    [anon_sym_LPAREN] = ACTIONS(133),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(136),
    [sym_comment] = ACTIONS(8),
    [anon_sym_GT_GT] = ACTIONS(136),
    [anon_sym_PIPE_GT] = ACTIONS(136),
    [anon_sym_DOLLAR_GT] = ACTIONS(136),
    [anon_sym_True] = ACTIONS(136),
    [anon_sym_False] = ACTIONS(136),
    [anon_sym_0] = ACTIONS(136),
    [anon_sym_1] = ACTIONS(136),
    [anon_sym_2] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(138),
    [anon_sym_BSLASH] = ACTIONS(138),
    [aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH] = ACTIONS(136),
    [anon_sym_3] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_EQ_GT] = ACTIONS(136),
    [anon_sym_EQ] = ACTIONS(138),
    [anon_sym_4] = ACTIONS(136),
    [anon_sym_EQ_EQ] = ACTIONS(136),
    [anon_sym_5] = ACTIONS(136),
  },
  [34] = {
    [sym__term] = STATE(10),
    [sym_named_variable] = STATE(11),
    [sym_apply] = STATE(12),
    [sym_variable] = STATE(11),
    [sym_numbered_variable] = STATE(11),
    [sym_function] = STATE(11),
    [sym__lambda] = STATE(13),
    [sym_group] = STATE(11),
    [aux_sym_expression_repeat1] = STATE(34),
    [sym_comment] = ACTIONS(26),
    [anon_sym_LF] = ACTIONS(140),
    [anon_sym_SEMI] = ACTIONS(140),
    [anon_sym_True] = ACTIONS(142),
    [anon_sym_False] = ACTIONS(142),
    [anon_sym_0] = ACTIONS(142),
    [anon_sym_1] = ACTIONS(142),
    [anon_sym_2] = ACTIONS(142),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(145),
    [anon_sym_BSLASH] = ACTIONS(148),
    [aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH] = ACTIONS(148),
    [anon_sym_3] = ACTIONS(148),
    [anon_sym_LPAREN] = ACTIONS(151),
  },
  [35] = {
    [sym_comment] = ACTIONS(8),
    [anon_sym_True] = ACTIONS(154),
    [anon_sym_False] = ACTIONS(154),
    [anon_sym_0] = ACTIONS(154),
    [anon_sym_1] = ACTIONS(154),
    [anon_sym_2] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(156),
    [anon_sym_BSLASH] = ACTIONS(156),
    [aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH] = ACTIONS(154),
    [anon_sym_3] = ACTIONS(154),
    [anon_sym_LPAREN] = ACTIONS(154),
    [anon_sym_RPAREN] = ACTIONS(154),
  },
  [36] = {
    [sym_comment] = ACTIONS(8),
    [anon_sym_True] = ACTIONS(158),
    [anon_sym_False] = ACTIONS(158),
    [anon_sym_0] = ACTIONS(158),
    [anon_sym_1] = ACTIONS(158),
    [anon_sym_2] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(160),
    [anon_sym_BSLASH] = ACTIONS(160),
    [aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH] = ACTIONS(158),
    [anon_sym_3] = ACTIONS(158),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_RPAREN] = ACTIONS(158),
  },
  [37] = {
    [sym__term] = STATE(21),
    [sym_named_variable] = STATE(22),
    [sym_apply] = STATE(23),
    [sym_variable] = STATE(22),
    [sym_numbered_variable] = STATE(22),
    [sym_function] = STATE(22),
    [sym__lambda] = STATE(24),
    [sym_group] = STATE(22),
    [aux_sym_expression_repeat1] = STATE(41),
    [sym_comment] = ACTIONS(8),
    [anon_sym_True] = ACTIONS(36),
    [anon_sym_False] = ACTIONS(36),
    [anon_sym_0] = ACTIONS(36),
    [anon_sym_1] = ACTIONS(36),
    [anon_sym_2] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(38),
    [anon_sym_BSLASH] = ACTIONS(16),
    [aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH] = ACTIONS(18),
    [anon_sym_3] = ACTIONS(18),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_RPAREN] = ACTIONS(162),
  },
  [38] = {
    [sym__term] = STATE(38),
    [sym_named_variable] = STATE(22),
    [sym_apply] = STATE(23),
    [sym_variable] = STATE(22),
    [sym_numbered_variable] = STATE(22),
    [sym_function] = STATE(22),
    [sym__lambda] = STATE(24),
    [sym_group] = STATE(22),
    [sym_comment] = ACTIONS(8),
    [anon_sym_True] = ACTIONS(164),
    [anon_sym_False] = ACTIONS(164),
    [anon_sym_0] = ACTIONS(164),
    [anon_sym_1] = ACTIONS(164),
    [anon_sym_2] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(166),
    [anon_sym_BSLASH] = ACTIONS(166),
    [aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH] = ACTIONS(164),
    [anon_sym_3] = ACTIONS(164),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_RPAREN] = ACTIONS(164),
  },
  [39] = {
    [sym__func_sep] = STATE(55),
    [sym_comment] = ACTIONS(8),
    [anon_sym_DOT] = ACTIONS(112),
    [anon_sym_DASH_GT] = ACTIONS(112),
  },
  [40] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_LF] = ACTIONS(168),
    [anon_sym_SEMI] = ACTIONS(168),
    [anon_sym_True] = ACTIONS(168),
    [anon_sym_False] = ACTIONS(168),
    [anon_sym_0] = ACTIONS(168),
    [anon_sym_1] = ACTIONS(168),
    [anon_sym_2] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(168),
    [anon_sym_BSLASH] = ACTIONS(168),
    [aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH] = ACTIONS(168),
    [anon_sym_3] = ACTIONS(168),
    [anon_sym_LPAREN] = ACTIONS(168),
  },
  [41] = {
    [sym__term] = STATE(21),
    [sym_named_variable] = STATE(22),
    [sym_apply] = STATE(23),
    [sym_variable] = STATE(22),
    [sym_numbered_variable] = STATE(22),
    [sym_function] = STATE(22),
    [sym__lambda] = STATE(24),
    [sym_group] = STATE(22),
    [aux_sym_expression_repeat1] = STATE(41),
    [sym_comment] = ACTIONS(8),
    [anon_sym_True] = ACTIONS(170),
    [anon_sym_False] = ACTIONS(170),
    [anon_sym_0] = ACTIONS(170),
    [anon_sym_1] = ACTIONS(170),
    [anon_sym_2] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(173),
    [anon_sym_BSLASH] = ACTIONS(176),
    [aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH] = ACTIONS(179),
    [anon_sym_3] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(182),
    [anon_sym_RPAREN] = ACTIONS(185),
  },
  [42] = {
    [sym_comment] = ACTIONS(8),
    [anon_sym_True] = ACTIONS(187),
    [anon_sym_False] = ACTIONS(187),
    [anon_sym_0] = ACTIONS(187),
    [anon_sym_1] = ACTIONS(187),
    [anon_sym_2] = ACTIONS(187),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(189),
    [anon_sym_BSLASH] = ACTIONS(189),
    [aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH] = ACTIONS(187),
    [anon_sym_3] = ACTIONS(187),
    [anon_sym_LPAREN] = ACTIONS(187),
  },
  [43] = {
    [sym_comment] = ACTIONS(8),
    [anon_sym_4] = ACTIONS(191),
    [anon_sym_5] = ACTIONS(193),
  },
  [44] = {
    [sym_comment] = ACTIONS(8),
    [anon_sym_EQ] = ACTIONS(191),
  },
  [45] = {
    [sym_comment] = ACTIONS(8),
    [anon_sym_True] = ACTIONS(195),
    [anon_sym_False] = ACTIONS(195),
    [anon_sym_0] = ACTIONS(195),
    [anon_sym_1] = ACTIONS(195),
    [anon_sym_2] = ACTIONS(195),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(197),
    [anon_sym_BSLASH] = ACTIONS(197),
    [aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH] = ACTIONS(195),
    [anon_sym_3] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(195),
  },
  [46] = {
    [sym_comment] = ACTIONS(8),
    [anon_sym_EQ] = ACTIONS(193),
  },
  [47] = {
    [sym_expression] = STATE(58),
    [sym__term] = STATE(10),
    [sym_named_variable] = STATE(11),
    [sym_apply] = STATE(12),
    [sym_variable] = STATE(11),
    [sym_numbered_variable] = STATE(11),
    [sym_function] = STATE(11),
    [sym__lambda] = STATE(13),
    [sym_group] = STATE(11),
    [aux_sym_expression_repeat1] = STATE(15),
    [sym_comment] = ACTIONS(8),
    [anon_sym_True] = ACTIONS(12),
    [anon_sym_False] = ACTIONS(12),
    [anon_sym_0] = ACTIONS(12),
    [anon_sym_1] = ACTIONS(12),
    [anon_sym_2] = ACTIONS(12),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(14),
    [anon_sym_BSLASH] = ACTIONS(16),
    [aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH] = ACTIONS(18),
    [anon_sym_3] = ACTIONS(18),
    [anon_sym_LPAREN] = ACTIONS(20),
  },
  [48] = {
    [sym_comment] = ACTIONS(8),
    [anon_sym_True] = ACTIONS(199),
    [anon_sym_False] = ACTIONS(199),
    [anon_sym_0] = ACTIONS(199),
    [anon_sym_1] = ACTIONS(199),
    [anon_sym_2] = ACTIONS(199),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(201),
    [anon_sym_BSLASH] = ACTIONS(201),
    [aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH] = ACTIONS(199),
    [anon_sym_3] = ACTIONS(199),
    [anon_sym_LPAREN] = ACTIONS(199),
  },
  [49] = {
    [sym__operator] = STATE(47),
    [sym_beta_reduce] = STATE(48),
    [sym_alpha_convert] = STATE(48),
    [aux_sym_block_repeat1] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(203),
    [sym_comment] = ACTIONS(8),
    [anon_sym_GT_GT] = ACTIONS(203),
    [anon_sym_PIPE_GT] = ACTIONS(203),
    [anon_sym_DOLLAR_GT] = ACTIONS(203),
    [anon_sym_True] = ACTIONS(203),
    [anon_sym_False] = ACTIONS(203),
    [anon_sym_0] = ACTIONS(203),
    [anon_sym_1] = ACTIONS(203),
    [anon_sym_2] = ACTIONS(203),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(205),
    [anon_sym_BSLASH] = ACTIONS(205),
    [aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH] = ACTIONS(203),
    [anon_sym_3] = ACTIONS(203),
    [anon_sym_LPAREN] = ACTIONS(203),
    [anon_sym_EQ_GT] = ACTIONS(96),
    [anon_sym_EQ] = ACTIONS(98),
    [anon_sym_4] = ACTIONS(100),
    [anon_sym_EQ_EQ] = ACTIONS(102),
    [anon_sym_5] = ACTIONS(104),
  },
  [50] = {
    [sym_comment] = ACTIONS(8),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(154),
    [anon_sym_DOT] = ACTIONS(154),
    [anon_sym_DASH_GT] = ACTIONS(154),
  },
  [51] = {
    [sym_comment] = ACTIONS(8),
    [anon_sym_True] = ACTIONS(207),
    [anon_sym_False] = ACTIONS(207),
    [anon_sym_0] = ACTIONS(207),
    [anon_sym_1] = ACTIONS(207),
    [anon_sym_2] = ACTIONS(207),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(209),
    [anon_sym_BSLASH] = ACTIONS(209),
    [aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH] = ACTIONS(207),
    [anon_sym_3] = ACTIONS(207),
    [anon_sym_LPAREN] = ACTIONS(207),
  },
  [52] = {
    [sym__term] = STATE(60),
    [sym_named_variable] = STATE(11),
    [sym_apply] = STATE(12),
    [sym_variable] = STATE(11),
    [sym_numbered_variable] = STATE(11),
    [sym_function] = STATE(11),
    [sym_func_body] = STATE(61),
    [sym__lambda] = STATE(13),
    [sym_group] = STATE(11),
    [sym_comment] = ACTIONS(8),
    [anon_sym_True] = ACTIONS(12),
    [anon_sym_False] = ACTIONS(12),
    [anon_sym_0] = ACTIONS(12),
    [anon_sym_1] = ACTIONS(12),
    [anon_sym_2] = ACTIONS(12),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(14),
    [anon_sym_BSLASH] = ACTIONS(16),
    [aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH] = ACTIONS(18),
    [anon_sym_3] = ACTIONS(18),
    [anon_sym_LPAREN] = ACTIONS(20),
  },
  [53] = {
    [sym_variable] = STATE(29),
    [sym_numbered_variable] = STATE(29),
    [aux_sym_bound_variables_repeat1] = STATE(53),
    [sym_comment] = ACTIONS(8),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(211),
    [anon_sym_DOT] = ACTIONS(214),
    [anon_sym_DASH_GT] = ACTIONS(214),
  },
  [54] = {
    [sym_comment] = ACTIONS(8),
    [anon_sym_True] = ACTIONS(216),
    [anon_sym_False] = ACTIONS(216),
    [anon_sym_0] = ACTIONS(216),
    [anon_sym_1] = ACTIONS(216),
    [anon_sym_2] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(218),
    [anon_sym_BSLASH] = ACTIONS(218),
    [aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH] = ACTIONS(216),
    [anon_sym_3] = ACTIONS(216),
    [anon_sym_LPAREN] = ACTIONS(216),
    [anon_sym_RPAREN] = ACTIONS(216),
  },
  [55] = {
    [sym__term] = STATE(62),
    [sym_named_variable] = STATE(22),
    [sym_apply] = STATE(23),
    [sym_variable] = STATE(22),
    [sym_numbered_variable] = STATE(22),
    [sym_function] = STATE(22),
    [sym_func_body] = STATE(63),
    [sym__lambda] = STATE(24),
    [sym_group] = STATE(22),
    [sym_comment] = ACTIONS(8),
    [anon_sym_True] = ACTIONS(36),
    [anon_sym_False] = ACTIONS(36),
    [anon_sym_0] = ACTIONS(36),
    [anon_sym_1] = ACTIONS(36),
    [anon_sym_2] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(38),
    [anon_sym_BSLASH] = ACTIONS(16),
    [aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH] = ACTIONS(18),
    [anon_sym_3] = ACTIONS(18),
    [anon_sym_LPAREN] = ACTIONS(40),
  },
  [56] = {
    [sym_comment] = ACTIONS(8),
    [anon_sym_True] = ACTIONS(220),
    [anon_sym_False] = ACTIONS(220),
    [anon_sym_0] = ACTIONS(220),
    [anon_sym_1] = ACTIONS(220),
    [anon_sym_2] = ACTIONS(220),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(222),
    [anon_sym_BSLASH] = ACTIONS(222),
    [aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH] = ACTIONS(220),
    [anon_sym_3] = ACTIONS(220),
    [anon_sym_LPAREN] = ACTIONS(220),
  },
  [57] = {
    [sym_comment] = ACTIONS(8),
    [anon_sym_True] = ACTIONS(224),
    [anon_sym_False] = ACTIONS(224),
    [anon_sym_0] = ACTIONS(224),
    [anon_sym_1] = ACTIONS(224),
    [anon_sym_2] = ACTIONS(224),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(226),
    [anon_sym_BSLASH] = ACTIONS(226),
    [aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH] = ACTIONS(224),
    [anon_sym_3] = ACTIONS(224),
    [anon_sym_LPAREN] = ACTIONS(224),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(228),
    [sym_comment] = ACTIONS(8),
    [anon_sym_GT_GT] = ACTIONS(228),
    [anon_sym_PIPE_GT] = ACTIONS(228),
    [anon_sym_DOLLAR_GT] = ACTIONS(228),
    [anon_sym_True] = ACTIONS(228),
    [anon_sym_False] = ACTIONS(228),
    [anon_sym_0] = ACTIONS(228),
    [anon_sym_1] = ACTIONS(228),
    [anon_sym_2] = ACTIONS(228),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(230),
    [anon_sym_BSLASH] = ACTIONS(230),
    [aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH] = ACTIONS(228),
    [anon_sym_3] = ACTIONS(228),
    [anon_sym_LPAREN] = ACTIONS(228),
    [anon_sym_EQ_GT] = ACTIONS(228),
    [anon_sym_EQ] = ACTIONS(230),
    [anon_sym_4] = ACTIONS(228),
    [anon_sym_EQ_EQ] = ACTIONS(228),
    [anon_sym_5] = ACTIONS(228),
  },
  [59] = {
    [sym__operator] = STATE(47),
    [sym_beta_reduce] = STATE(48),
    [sym_alpha_convert] = STATE(48),
    [aux_sym_block_repeat1] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(228),
    [sym_comment] = ACTIONS(8),
    [anon_sym_GT_GT] = ACTIONS(228),
    [anon_sym_PIPE_GT] = ACTIONS(228),
    [anon_sym_DOLLAR_GT] = ACTIONS(228),
    [anon_sym_True] = ACTIONS(228),
    [anon_sym_False] = ACTIONS(228),
    [anon_sym_0] = ACTIONS(228),
    [anon_sym_1] = ACTIONS(228),
    [anon_sym_2] = ACTIONS(228),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(230),
    [anon_sym_BSLASH] = ACTIONS(230),
    [aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH] = ACTIONS(228),
    [anon_sym_3] = ACTIONS(228),
    [anon_sym_LPAREN] = ACTIONS(228),
    [anon_sym_EQ_GT] = ACTIONS(232),
    [anon_sym_EQ] = ACTIONS(235),
    [anon_sym_4] = ACTIONS(238),
    [anon_sym_EQ_EQ] = ACTIONS(241),
    [anon_sym_5] = ACTIONS(244),
  },
  [60] = {
    [sym__term] = STATE(27),
    [sym_named_variable] = STATE(11),
    [sym_apply] = STATE(12),
    [sym_variable] = STATE(11),
    [sym_numbered_variable] = STATE(11),
    [sym_function] = STATE(11),
    [sym__lambda] = STATE(13),
    [sym_group] = STATE(11),
    [aux_sym_expression_repeat1] = STATE(64),
    [sym_comment] = ACTIONS(26),
    [anon_sym_LF] = ACTIONS(247),
    [anon_sym_SEMI] = ACTIONS(247),
    [anon_sym_True] = ACTIONS(52),
    [anon_sym_False] = ACTIONS(52),
    [anon_sym_0] = ACTIONS(52),
    [anon_sym_1] = ACTIONS(52),
    [anon_sym_2] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(54),
    [anon_sym_BSLASH] = ACTIONS(56),
    [aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH] = ACTIONS(56),
    [anon_sym_3] = ACTIONS(56),
    [anon_sym_LPAREN] = ACTIONS(58),
  },
  [61] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_LF] = ACTIONS(249),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_True] = ACTIONS(249),
    [anon_sym_False] = ACTIONS(249),
    [anon_sym_0] = ACTIONS(249),
    [anon_sym_1] = ACTIONS(249),
    [anon_sym_2] = ACTIONS(249),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(249),
    [anon_sym_BSLASH] = ACTIONS(249),
    [aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH] = ACTIONS(249),
    [anon_sym_3] = ACTIONS(249),
    [anon_sym_LPAREN] = ACTIONS(249),
  },
  [62] = {
    [sym__term] = STATE(38),
    [sym_named_variable] = STATE(22),
    [sym_apply] = STATE(23),
    [sym_variable] = STATE(22),
    [sym_numbered_variable] = STATE(22),
    [sym_function] = STATE(22),
    [sym__lambda] = STATE(24),
    [sym_group] = STATE(22),
    [aux_sym_expression_repeat1] = STATE(65),
    [sym_comment] = ACTIONS(8),
    [anon_sym_True] = ACTIONS(36),
    [anon_sym_False] = ACTIONS(36),
    [anon_sym_0] = ACTIONS(36),
    [anon_sym_1] = ACTIONS(36),
    [anon_sym_2] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(38),
    [anon_sym_BSLASH] = ACTIONS(16),
    [aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH] = ACTIONS(18),
    [anon_sym_3] = ACTIONS(18),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_RPAREN] = ACTIONS(251),
  },
  [63] = {
    [sym_comment] = ACTIONS(8),
    [anon_sym_True] = ACTIONS(253),
    [anon_sym_False] = ACTIONS(253),
    [anon_sym_0] = ACTIONS(253),
    [anon_sym_1] = ACTIONS(253),
    [anon_sym_2] = ACTIONS(253),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(255),
    [anon_sym_BSLASH] = ACTIONS(255),
    [aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH] = ACTIONS(253),
    [anon_sym_3] = ACTIONS(253),
    [anon_sym_LPAREN] = ACTIONS(253),
    [anon_sym_RPAREN] = ACTIONS(253),
  },
  [64] = {
    [sym__term] = STATE(10),
    [sym_named_variable] = STATE(11),
    [sym_apply] = STATE(12),
    [sym_variable] = STATE(11),
    [sym_numbered_variable] = STATE(11),
    [sym_function] = STATE(11),
    [sym__lambda] = STATE(13),
    [sym_group] = STATE(11),
    [aux_sym_expression_repeat1] = STATE(34),
    [sym_comment] = ACTIONS(26),
    [anon_sym_LF] = ACTIONS(257),
    [anon_sym_SEMI] = ACTIONS(257),
    [anon_sym_True] = ACTIONS(257),
    [anon_sym_False] = ACTIONS(257),
    [anon_sym_0] = ACTIONS(257),
    [anon_sym_1] = ACTIONS(257),
    [anon_sym_2] = ACTIONS(257),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(257),
    [anon_sym_BSLASH] = ACTIONS(257),
    [aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH] = ACTIONS(257),
    [anon_sym_3] = ACTIONS(257),
    [anon_sym_LPAREN] = ACTIONS(257),
  },
  [65] = {
    [sym__term] = STATE(21),
    [sym_named_variable] = STATE(22),
    [sym_apply] = STATE(23),
    [sym_variable] = STATE(22),
    [sym_numbered_variable] = STATE(22),
    [sym_function] = STATE(22),
    [sym__lambda] = STATE(24),
    [sym_group] = STATE(22),
    [aux_sym_expression_repeat1] = STATE(41),
    [sym_comment] = ACTIONS(8),
    [anon_sym_True] = ACTIONS(259),
    [anon_sym_False] = ACTIONS(259),
    [anon_sym_0] = ACTIONS(259),
    [anon_sym_1] = ACTIONS(259),
    [anon_sym_2] = ACTIONS(259),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(261),
    [anon_sym_BSLASH] = ACTIONS(261),
    [aux_sym_SLASH_BSLASH_BSLASH_QMARK_LPARENLAMBDA_PIPElambda_PIPELambda_RPAREN_SLASH] = ACTIONS(259),
    [anon_sym_3] = ACTIONS(259),
    [anon_sym_LPAREN] = ACTIONS(259),
    [anon_sym_RPAREN] = ACTIONS(259),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(), RECOVER(),
  [6] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 0),
  [8] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [10] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
  [12] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(3),
  [14] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
  [16] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
  [18] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(5),
  [20] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(6),
  [22] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_begin_block, 1),
  [24] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_block, 1),
  [26] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [28] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_named_variable, 1),
  [30] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable, 1),
  [32] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(16),
  [34] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__lambda, 1),
  [36] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(17),
  [38] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(18),
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(19),
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(20),
  [44] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1),
  [50] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_expression_repeat1, 1, .fragile = true),
  [52] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(3),
  [54] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(4),
  [56] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(5),
  [58] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(6),
  [60] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__term, 1),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(28),
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [66] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(33),
  [68] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_numbered_variable, 2),
  [70] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_named_variable, 1),
  [72] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_named_variable, 1),
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable, 1),
  [76] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable, 1),
  [78] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(35),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(36),
  [82] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_group, 2),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_expression_repeat1, 1, .fragile = true),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__term, 1),
  [88] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__term, 1),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_block, 2),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_block, 2),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(42),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(43),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(44),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(45),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(46),
  [106] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_apply, 2),
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(50),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_bound_variables_repeat1, 1),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(51),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_bound_variables, 1),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [118] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [121] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [124] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [127] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [130] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [133] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression, 2),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression, 2),
  [140] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_expression_repeat1, 2),
  [142] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(3),
  [145] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(4),
  [148] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(5),
  [151] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(6),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_numbered_variable, 2),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_numbered_variable, 2),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_group, 2),
  [160] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_group, 2),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
  [164] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_apply, 2),
  [166] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_apply, 2),
  [168] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_group, 3),
  [170] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(17),
  [173] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(18),
  [176] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(5),
  [179] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(5),
  [182] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(19),
  [185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_expression_repeat1, 2),
  [187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_beta_reduce, 1),
  [189] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_beta_reduce, 1),
  [191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(56),
  [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
  [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_alpha_convert, 1),
  [197] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_alpha_convert, 1),
  [199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__operator, 1),
  [201] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__operator, 1),
  [203] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_block, 3),
  [205] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_block, 3),
  [207] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__func_sep, 1),
  [209] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__func_sep, 1),
  [211] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_bound_variables_repeat1, 2), SHIFT_REPEAT(28),
  [214] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_bound_variables_repeat1, 2),
  [216] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_group, 3),
  [218] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_group, 3),
  [220] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_beta_reduce, 2),
  [222] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_beta_reduce, 2),
  [224] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_alpha_convert, 2),
  [226] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_alpha_convert, 2),
  [228] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_block_repeat1, 2),
  [230] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_block_repeat1, 2),
  [232] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(42),
  [235] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(43),
  [238] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(44),
  [241] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(45),
  [244] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(46),
  [247] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_func_body, 1, .fragile = true),
  [249] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function, 4),
  [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_func_body, 1, .fragile = true),
  [253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function, 4),
  [255] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function, 4),
  [257] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_func_body, 2),
  [259] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_func_body, 2),
  [261] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_func_body, 2),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_lambda() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
