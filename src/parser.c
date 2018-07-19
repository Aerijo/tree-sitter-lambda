#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 8
#define STATE_COUNT 125
#define SYMBOL_COUNT 75
#define ALIAS_COUNT 1
#define TOKEN_COUNT 47
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  anon_sym_GT = 1,
  anon_sym_EQ = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_SEMI = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  anon_sym_LBRACK = 8,
  anon_sym_RBRACK = 9,
  sym__newline = 10,
  sym_block_start = 11,
  sym_block_end = 12,
  anon_sym_EQ_EQ = 13,
  anon_sym_EQ1 = 14,
  anon_sym_EQ2 = 15,
  anon_sym_a_EQ = 16,
  anon_sym_EQa = 17,
  anon_sym_EQ_GT = 18,
  anon_sym_EQ3 = 19,
  anon_sym_EQ4 = 20,
  anon_sym_b_EQ = 21,
  anon_sym_EQb = 22,
  anon_sym_BSLASH = 23,
  anon_sym_1 = 24,
  anon_sym_lambda = 25,
  anon_sym_DASH_GT = 26,
  anon_sym_DOT = 27,
  anon_sym_COLON = 28,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 29,
  aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH = 30,
  aux_sym_SLASH_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH = 31,
  aux_sym_SLASH_DQUOTE_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH = 32,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 33,
  aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH = 34,
  aux_sym_SLASH_SQUOTE_LBRACK_CARET_SQUOTE_RBRACK_SLASH = 35,
  aux_sym_SLASH_SQUOTE_SQUOTE_LBRACK_CARET_SQUOTE_RBRACK_SLASH = 36,
  anon_sym_COLON_EQ = 37,
  anon_sym_SLASH = 38,
  anon_sym_PIPE = 39,
  anon_sym_LT_DASH = 40,
  sym_identifier = 41,
  sym_func_identifier = 42,
  sym_line_comment = 43,
  sym_block_comment = 44,
  sym_integer = 45,
  sym_string = 46,
  sym_program = 47,
  sym_function_definition = 48,
  sym_block = 49,
  sym_block_tag = 50,
  sym__block_contents = 51,
  sym_block_expression = 52,
  sym__relation_operator = 53,
  sym_expression = 54,
  sym__term = 55,
  sym_group = 56,
  sym_function = 57,
  sym_func_body = 58,
  sym_beta_replacement = 59,
  sym__replacement_indicator = 60,
  sym__terminal = 61,
  sym_alpha_convert = 62,
  sym_beta_reduce = 63,
  sym_func_indicator = 64,
  sym_func_sep = 65,
  sym_annotation = 66,
  sym_replace_forwards = 67,
  sym_replace_backwards = 68,
  aux_sym_program_repeat1 = 69,
  aux_sym__block_contents_repeat1 = 70,
  aux_sym_block_expression_repeat1 = 71,
  aux_sym_function_repeat1 = 72,
  aux_sym_annotation_repeat1 = 73,
  aux_sym_annotation_repeat2 = 74,
  anon_alias_sym_expression = 75,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_GT] = ">",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym__newline] = "_newline",
  [sym_block_start] = "block_start",
  [sym_block_end] = "block_end",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_EQ1] = "α=",
  [anon_sym_EQ2] = "=α",
  [anon_sym_a_EQ] = "a=",
  [anon_sym_EQa] = "=a",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_EQ3] = "β=",
  [anon_sym_EQ4] = "=β",
  [anon_sym_b_EQ] = "b=",
  [anon_sym_EQb] = "=b",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_1] = "λ",
  [anon_sym_lambda] = "lambda",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_DOT] = ".",
  [anon_sym_COLON] = ":",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = "/[^\"]/",
  [aux_sym_SLASH_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = "/\"[^\"]/",
  [aux_sym_SLASH_DQUOTE_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = "/\"\"[^\"]/",
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = "'''",
  [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = "/[^']/",
  [aux_sym_SLASH_SQUOTE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = "/'[^']/",
  [aux_sym_SLASH_SQUOTE_SQUOTE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = "/''[^']/",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_SLASH] = "/",
  [anon_sym_PIPE] = "|",
  [anon_sym_LT_DASH] = "<-",
  [sym_identifier] = "identifier",
  [sym_func_identifier] = "func_identifier",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [sym_integer] = "integer",
  [sym_string] = "string",
  [sym_program] = "program",
  [sym_function_definition] = "function_definition",
  [sym_block] = "block",
  [sym_block_tag] = "block_tag",
  [sym__block_contents] = "_block_contents",
  [sym_block_expression] = "block_expression",
  [sym__relation_operator] = "_relation_operator",
  [sym_expression] = "expression",
  [sym__term] = "_term",
  [sym_group] = "group",
  [sym_function] = "function",
  [sym_func_body] = "func_body",
  [sym_beta_replacement] = "beta_replacement",
  [sym__replacement_indicator] = "_replacement_indicator",
  [sym__terminal] = "_terminal",
  [sym_alpha_convert] = "alpha_convert",
  [sym_beta_reduce] = "beta_reduce",
  [sym_func_indicator] = "func_indicator",
  [sym_func_sep] = "func_sep",
  [sym_annotation] = "annotation",
  [sym_replace_forwards] = "replace_forwards",
  [sym_replace_backwards] = "replace_backwards",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym__block_contents_repeat1] = "_block_contents_repeat1",
  [aux_sym_block_expression_repeat1] = "block_expression_repeat1",
  [aux_sym_function_repeat1] = "function_repeat1",
  [aux_sym_annotation_repeat1] = "annotation_repeat1",
  [aux_sym_annotation_repeat2] = "annotation_repeat2",
  [anon_alias_sym_expression] = "expression",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_block_start] = {
    .visible = true,
    .named = true,
  },
  [sym_block_end] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_a_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQa] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_b_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lambda] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_DQUOTE_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_SQUOTE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_SQUOTE_SQUOTE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_func_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_block_tag] = {
    .visible = true,
    .named = true,
  },
  [sym__block_contents] = {
    .visible = false,
    .named = true,
  },
  [sym_block_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__relation_operator] = {
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
  [sym_group] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_func_body] = {
    .visible = true,
    .named = true,
  },
  [sym_beta_replacement] = {
    .visible = true,
    .named = true,
  },
  [sym__replacement_indicator] = {
    .visible = false,
    .named = true,
  },
  [sym__terminal] = {
    .visible = false,
    .named = true,
  },
  [sym_alpha_convert] = {
    .visible = true,
    .named = true,
  },
  [sym_beta_reduce] = {
    .visible = true,
    .named = true,
  },
  [sym_func_indicator] = {
    .visible = true,
    .named = true,
  },
  [sym_func_sep] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_replace_forwards] = {
    .visible = true,
    .named = true,
  },
  [sym_replace_backwards] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__block_contents_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_annotation_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_annotation_repeat2] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_expression] = {
    .visible = true,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[3][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = anon_alias_sym_expression,
  },
  [2] = {
    [1] = anon_alias_sym_expression,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(13);
      if (lookahead == '(')
        ADVANCE(23);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '-')
        ADVANCE(25);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(33);
      if (lookahead == ';')
        ADVANCE(34);
      if (lookahead == '<')
        ADVANCE(35);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '>')
        ADVANCE(44);
      if (lookahead == '[')
        ADVANCE(47);
      if (lookahead == '\\')
        ADVANCE(48);
      if (lookahead == ']')
        ADVANCE(49);
      if (lookahead == '`')
        ADVANCE(50);
      if (lookahead == 'a')
        ADVANCE(53);
      if (lookahead == 'b')
        ADVANCE(56);
      if (lookahead == '{')
        ADVANCE(58);
      if (lookahead == '|')
        ADVANCE(59);
      if (lookahead == '}')
        ADVANCE(60);
      if (lookahead == 945)
        ADVANCE(61);
      if (lookahead == 946)
        ADVANCE(63);
      if (lookahead == 955)
        ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(66);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(67);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == '\n')
        ADVANCE(3);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '\\')
        ADVANCE(7);
      if (lookahead != 0)
        ADVANCE(12);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(aux_sym_SLASH_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(6);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(aux_sym_SLASH_DQUOTE_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_SLASH_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead == '\n')
        ADVANCE(8);
      if (lookahead == '\r')
        ADVANCE(11);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '\"')
        ADVANCE(9);
      if (lookahead == '\\')
        ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 10:
      if (lookahead == '\n')
        ADVANCE(8);
      if (lookahead == '\r')
        ADVANCE(11);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == '\n')
        ADVANCE(8);
      if (lookahead == '\"')
        ADVANCE(9);
      if (lookahead == '\\')
        ADVANCE(10);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_SLASH_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead == '\"')
        ADVANCE(9);
      if (lookahead == '\\')
        ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(8);
      END_STATE();
    case 13:
      if (lookahead == '\n')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '\\')
        ADVANCE(18);
      if (lookahead != 0)
        ADVANCE(22);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_SLASH_SQUOTE_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\'')
        ADVANCE(16);
      if (lookahead != 0)
        ADVANCE(17);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_SLASH_SQUOTE_SQUOTE_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_SLASH_SQUOTE_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      if (lookahead == '\n')
        ADVANCE(19);
      if (lookahead == '\r')
        ADVANCE(21);
      if (lookahead != 0)
        ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == '\'')
        ADVANCE(9);
      if (lookahead == '\\')
        ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '\n')
        ADVANCE(19);
      if (lookahead == '\r')
        ADVANCE(21);
      if (lookahead != 0)
        ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == '\n')
        ADVANCE(19);
      if (lookahead == '\'')
        ADVANCE(9);
      if (lookahead == '\\')
        ADVANCE(20);
      if (lookahead != 0)
        ADVANCE(19);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_SLASH_SQUOTE_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      if (lookahead == '\'')
        ADVANCE(9);
      if (lookahead == '\\')
        ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(19);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 25:
      if (lookahead == '-')
        ADVANCE(26);
      if (lookahead == '>')
        ADVANCE(27);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == '*')
        ADVANCE(31);
      if (lookahead != 0)
        ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '*')
        ADVANCE(31);
      if (lookahead == '/')
        ADVANCE(32);
      if (lookahead != 0)
        ADVANCE(30);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 35:
      if (lookahead == '-')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(37);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 37:
      if (lookahead == '<')
        ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_block_end);
      if (lookahead == '<')
        ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(40);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == 945)
        ADVANCE(42);
      if (lookahead == 946)
        ADVANCE(43);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_EQ4);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>')
        ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == '>')
        ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_block_start);
      if (lookahead == '>')
        ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 50:
      if (lookahead == '\\')
        ADVANCE(51);
      if (lookahead == '`')
        ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(50);
      END_STATE();
    case 51:
      if (lookahead == '\n')
        ADVANCE(50);
      if (lookahead == '\r')
        ADVANCE(52);
      if (lookahead != 0)
        ADVANCE(50);
      END_STATE();
    case 52:
      if (lookahead == '\n')
        ADVANCE(50);
      if (lookahead == '\\')
        ADVANCE(51);
      if (lookahead == '`')
        ADVANCE(9);
      if (lookahead != 0)
        ADVANCE(50);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '=')
        ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_a_EQ);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '=')
        ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_b_EQ);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 61:
      if (lookahead == '=')
        ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_EQ1);
      END_STATE();
    case 63:
      if (lookahead == '=')
        ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_EQ3);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_func_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(67);
      END_STATE();
    case 68:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(69);
      if (lookahead == '\"')
        ADVANCE(70);
      if (lookahead == '\'')
        ADVANCE(72);
      if (lookahead == '-')
        ADVANCE(74);
      if (lookahead == '/')
        ADVANCE(75);
      if (lookahead == '>')
        ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(68);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(67);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 70:
      if (lookahead == '\"')
        ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == '\"')
        ADVANCE(5);
      END_STATE();
    case 72:
      if (lookahead == '\'')
        ADVANCE(73);
      END_STATE();
    case 73:
      if (lookahead == '\'')
        ADVANCE(16);
      END_STATE();
    case 74:
      if (lookahead == '-')
        ADVANCE(26);
      END_STATE();
    case 75:
      if (lookahead == '*')
        ADVANCE(30);
      END_STATE();
    case 76:
      if (lookahead == '\"')
        ADVANCE(8);
      if (lookahead == '\'')
        ADVANCE(19);
      if (lookahead == '(')
        ADVANCE(23);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '-')
        ADVANCE(74);
      if (lookahead == '/')
        ADVANCE(75);
      if (lookahead == '[')
        ADVANCE(47);
      if (lookahead == '\\')
        ADVANCE(48);
      if (lookahead == '`')
        ADVANCE(50);
      if (lookahead == 955)
        ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(76);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(67);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 77:
      if (lookahead == '\n')
        ADVANCE(69);
      if (lookahead == '\"')
        ADVANCE(78);
      if (lookahead == '\'')
        ADVANCE(80);
      if (lookahead == '(')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(74);
      if (lookahead == '/')
        ADVANCE(75);
      if (lookahead == '<')
        ADVANCE(82);
      if (lookahead == '=')
        ADVANCE(83);
      if (lookahead == '\\')
        ADVANCE(48);
      if (lookahead == '`')
        ADVANCE(50);
      if (lookahead == 'a')
        ADVANCE(53);
      if (lookahead == 'b')
        ADVANCE(56);
      if (lookahead == '{')
        ADVANCE(58);
      if (lookahead == 945)
        ADVANCE(61);
      if (lookahead == 946)
        ADVANCE(63);
      if (lookahead == 955)
        ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(77);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(66);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(67);
      END_STATE();
    case 78:
      if (lookahead == '\"')
        ADVANCE(79);
      if (lookahead == '\\')
        ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(8);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\"')
        ADVANCE(5);
      END_STATE();
    case 80:
      if (lookahead == '\'')
        ADVANCE(81);
      if (lookahead == '\\')
        ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(19);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\'')
        ADVANCE(16);
      END_STATE();
    case 82:
      if (lookahead == '<')
        ADVANCE(37);
      END_STATE();
    case 83:
      if (lookahead == '=')
        ADVANCE(40);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == 'a')
        ADVANCE(84);
      if (lookahead == 'b')
        ADVANCE(85);
      if (lookahead == 945)
        ADVANCE(42);
      if (lookahead == 946)
        ADVANCE(43);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_EQa);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_EQb);
      END_STATE();
    case 86:
      if (lookahead == '\"')
        ADVANCE(87);
      if (lookahead == '-')
        ADVANCE(89);
      if (lookahead == '/')
        ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(91);
      if (lookahead != 0)
        ADVANCE(91);
      END_STATE();
    case 87:
      if (lookahead == '\"')
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(3);
      END_STATE();
    case 88:
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(6);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(26);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead == '*')
        ADVANCE(30);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      END_STATE();
    case 92:
      if (lookahead == '\'')
        ADVANCE(93);
      if (lookahead == '-')
        ADVANCE(95);
      if (lookahead == '/')
        ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(97);
      if (lookahead != 0)
        ADVANCE(97);
      END_STATE();
    case 93:
      if (lookahead == '\'')
        ADVANCE(94);
      if (lookahead != 0)
        ADVANCE(14);
      END_STATE();
    case 94:
      if (lookahead == '\'')
        ADVANCE(16);
      if (lookahead != 0)
        ADVANCE(17);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(26);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      if (lookahead == '*')
        ADVANCE(30);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      END_STATE();
    case 98:
      if (lookahead == '-')
        ADVANCE(74);
      if (lookahead == '/')
        ADVANCE(75);
      if (lookahead == '=')
        ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 100:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(74);
      if (lookahead == '/')
        ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(100);
      END_STATE();
    case 101:
      if (lookahead == '-')
        ADVANCE(25);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(75);
      if (lookahead == ':')
        ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(101);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 102:
      if (lookahead == '\n')
        ADVANCE(69);
      if (lookahead == '\"')
        ADVANCE(8);
      if (lookahead == '\'')
        ADVANCE(19);
      if (lookahead == '(')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(74);
      if (lookahead == '/')
        ADVANCE(75);
      if (lookahead == ';')
        ADVANCE(34);
      if (lookahead == '[')
        ADVANCE(47);
      if (lookahead == '\\')
        ADVANCE(48);
      if (lookahead == '`')
        ADVANCE(50);
      if (lookahead == 955)
        ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(102);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(67);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 103:
      if (lookahead == '-')
        ADVANCE(74);
      if (lookahead == '/')
        ADVANCE(75);
      if (lookahead == '<')
        ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(103);
      END_STATE();
    case 104:
      if (lookahead == '\n')
        ADVANCE(69);
      if (lookahead == '\"')
        ADVANCE(78);
      if (lookahead == '\'')
        ADVANCE(80);
      if (lookahead == '(')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(74);
      if (lookahead == '/')
        ADVANCE(75);
      if (lookahead == ';')
        ADVANCE(34);
      if (lookahead == '<')
        ADVANCE(82);
      if (lookahead == '=')
        ADVANCE(83);
      if (lookahead == '[')
        ADVANCE(47);
      if (lookahead == '\\')
        ADVANCE(48);
      if (lookahead == '`')
        ADVANCE(50);
      if (lookahead == 'a')
        ADVANCE(53);
      if (lookahead == 'b')
        ADVANCE(56);
      if (lookahead == 945)
        ADVANCE(61);
      if (lookahead == 946)
        ADVANCE(63);
      if (lookahead == 955)
        ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(104);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(66);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(67);
      END_STATE();
    case 105:
      if (lookahead == '\"')
        ADVANCE(8);
      if (lookahead == '\'')
        ADVANCE(19);
      if (lookahead == '(')
        ADVANCE(23);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '-')
        ADVANCE(25);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(106);
      if (lookahead == '<')
        ADVANCE(108);
      if (lookahead == '[')
        ADVANCE(47);
      if (lookahead == '\\')
        ADVANCE(48);
      if (lookahead == ']')
        ADVANCE(49);
      if (lookahead == '`')
        ADVANCE(50);
      if (lookahead == '|')
        ADVANCE(59);
      if (lookahead == 955)
        ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(105);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(67);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 106:
      if (lookahead == '=')
        ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 108:
      if (lookahead == '-')
        ADVANCE(36);
      END_STATE();
    case 109:
      if (lookahead == '-')
        ADVANCE(74);
      if (lookahead == '/')
        ADVANCE(75);
      if (lookahead == '}')
        ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(109);
      END_STATE();
    case 110:
      if (lookahead == '\"')
        ADVANCE(8);
      if (lookahead == '\'')
        ADVANCE(19);
      if (lookahead == '(')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(25);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(106);
      if (lookahead == '<')
        ADVANCE(108);
      if (lookahead == '[')
        ADVANCE(47);
      if (lookahead == '\\')
        ADVANCE(48);
      if (lookahead == '`')
        ADVANCE(50);
      if (lookahead == '|')
        ADVANCE(59);
      if (lookahead == 955)
        ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(110);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(67);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 111:
      if (lookahead == '\"')
        ADVANCE(8);
      if (lookahead == '\'')
        ADVANCE(19);
      if (lookahead == '(')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(74);
      if (lookahead == '/')
        ADVANCE(75);
      if (lookahead == '[')
        ADVANCE(47);
      if (lookahead == '\\')
        ADVANCE(48);
      if (lookahead == ']')
        ADVANCE(49);
      if (lookahead == '`')
        ADVANCE(50);
      if (lookahead == 955)
        ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(111);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(67);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 'l')
        ADVANCE(1);
      END_STATE();
    case 1:
      if (lookahead == 'a')
        ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == 'm')
        ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == 'b')
        ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == 'd')
        ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == 'a')
        ADVANCE(6);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_lambda);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 68},
  [2] = {.lex_state = 76},
  [3] = {.lex_state = 77},
  [4] = {.lex_state = 86},
  [5] = {.lex_state = 92},
  [6] = {.lex_state = 98},
  [7] = {.lex_state = 100},
  [8] = {.lex_state = 68},
  [9] = {.lex_state = 76},
  [10] = {.lex_state = 101},
  [11] = {.lex_state = 68},
  [12] = {.lex_state = 102},
  [13] = {.lex_state = 101},
  [14] = {.lex_state = 102},
  [15] = {.lex_state = 76},
  [16] = {.lex_state = 76},
  [17] = {.lex_state = 68},
  [18] = {.lex_state = 76},
  [19] = {.lex_state = 76},
  [20] = {.lex_state = 86},
  [21] = {.lex_state = 92},
  [22] = {.lex_state = 77},
  [23] = {.lex_state = 103},
  [24] = {.lex_state = 104},
  [25] = {.lex_state = 76},
  [26] = {.lex_state = 104},
  [27] = {.lex_state = 101},
  [28] = {.lex_state = 77},
  [29] = {.lex_state = 104},
  [30] = {.lex_state = 68},
  [31] = {.lex_state = 86},
  [32] = {.lex_state = 92},
  [33] = {.lex_state = 76},
  [34] = {.lex_state = 68},
  [35] = {.lex_state = 76},
  [36] = {.lex_state = 102},
  [37] = {.lex_state = 105},
  [38] = {.lex_state = 101},
  [39] = {.lex_state = 76},
  [40] = {.lex_state = 76},
  [41] = {.lex_state = 102},
  [42] = {.lex_state = 102},
  [43] = {.lex_state = 102},
  [44] = {.lex_state = 101},
  [45] = {.lex_state = 68},
  [46] = {.lex_state = 102},
  [47] = {.lex_state = 109},
  [48] = {.lex_state = 104},
  [49] = {.lex_state = 76},
  [50] = {.lex_state = 77},
  [51] = {.lex_state = 86},
  [52] = {.lex_state = 92},
  [53] = {.lex_state = 68},
  [54] = {.lex_state = 103},
  [55] = {.lex_state = 77},
  [56] = {.lex_state = 104},
  [57] = {.lex_state = 76},
  [58] = {.lex_state = 104},
  [59] = {.lex_state = 104},
  [60] = {.lex_state = 104},
  [61] = {.lex_state = 101},
  [62] = {.lex_state = 77},
  [63] = {.lex_state = 104},
  [64] = {.lex_state = 68},
  [65] = {.lex_state = 86},
  [66] = {.lex_state = 92},
  [67] = {.lex_state = 68},
  [68] = {.lex_state = 105},
  [69] = {.lex_state = 76},
  [70] = {.lex_state = 76},
  [71] = {.lex_state = 105},
  [72] = {.lex_state = 105},
  [73] = {.lex_state = 76},
  [74] = {.lex_state = 101},
  [75] = {.lex_state = 102},
  [76] = {.lex_state = 76},
  [77] = {.lex_state = 110},
  [78] = {.lex_state = 101},
  [79] = {.lex_state = 102},
  [80] = {.lex_state = 102},
  [81] = {.lex_state = 102},
  [82] = {.lex_state = 101},
  [83] = {.lex_state = 77},
  [84] = {.lex_state = 104},
  [85] = {.lex_state = 77},
  [86] = {.lex_state = 68},
  [87] = {.lex_state = 77},
  [88] = {.lex_state = 110},
  [89] = {.lex_state = 104},
  [90] = {.lex_state = 104},
  [91] = {.lex_state = 104},
  [92] = {.lex_state = 105},
  [93] = {.lex_state = 110},
  [94] = {.lex_state = 105},
  [95] = {.lex_state = 76},
  [96] = {.lex_state = 76},
  [97] = {.lex_state = 76},
  [98] = {.lex_state = 76},
  [99] = {.lex_state = 76},
  [100] = {.lex_state = 110},
  [101] = {.lex_state = 101},
  [102] = {.lex_state = 102},
  [103] = {.lex_state = 102},
  [104] = {.lex_state = 76},
  [105] = {.lex_state = 104},
  [106] = {.lex_state = 104},
  [107] = {.lex_state = 76},
  [108] = {.lex_state = 76},
  [109] = {.lex_state = 105},
  [110] = {.lex_state = 111},
  [111] = {.lex_state = 101},
  [112] = {.lex_state = 110},
  [113] = {.lex_state = 110},
  [114] = {.lex_state = 111},
  [115] = {.lex_state = 111},
  [116] = {.lex_state = 102},
  [117] = {.lex_state = 111},
  [118] = {.lex_state = 101},
  [119] = {.lex_state = 110},
  [120] = {.lex_state = 104},
  [121] = {.lex_state = 105},
  [122] = {.lex_state = 111},
  [123] = {.lex_state = 111},
  [124] = {.lex_state = 111},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_block_start] = ACTIONS(1),
    [sym_block_end] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_EQ1] = ACTIONS(1),
    [anon_sym_EQ2] = ACTIONS(1),
    [anon_sym_a_EQ] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_EQ3] = ACTIONS(1),
    [anon_sym_EQ4] = ACTIONS(1),
    [anon_sym_b_EQ] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [anon_sym_lambda] = ACTIONS(3),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [aux_sym_SLASH_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_DQUOTE_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(1),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(1),
    [aux_sym_SLASH_SQUOTE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_SQUOTE_SQUOTE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
    [sym_identifier] = ACTIONS(3),
    [sym_func_identifier] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [sym_block_comment] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_string] = ACTIONS(3),
  },
  [1] = {
    [sym_program] = STATE(7),
    [sym_function_definition] = STATE(8),
    [sym_block] = STATE(8),
    [sym_annotation] = STATE(8),
    [aux_sym_program_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(7),
    [sym__newline] = ACTIONS(9),
    [sym_block_start] = ACTIONS(11),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(15),
    [sym_func_identifier] = ACTIONS(17),
    [sym_line_comment] = ACTIONS(19),
    [sym_block_comment] = ACTIONS(19),
  },
  [2] = {
    [sym_expression] = STATE(11),
    [sym__term] = STATE(14),
    [sym_group] = STATE(12),
    [sym_function] = STATE(12),
    [sym__terminal] = STATE(12),
    [sym_func_indicator] = STATE(13),
    [aux_sym_block_expression_repeat1] = STATE(14),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_1] = ACTIONS(24),
    [anon_sym_lambda] = ACTIONS(26),
    [sym_identifier] = ACTIONS(28),
    [sym_func_identifier] = ACTIONS(30),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(30),
    [sym_string] = ACTIONS(30),
  },
  [3] = {
    [sym_block_tag] = STATE(22),
    [sym__block_contents] = STATE(23),
    [sym_block_expression] = STATE(24),
    [sym__relation_operator] = STATE(25),
    [sym__term] = STATE(29),
    [sym_group] = STATE(26),
    [sym_function] = STATE(26),
    [sym__terminal] = STATE(26),
    [sym_alpha_convert] = STATE(25),
    [sym_beta_reduce] = STATE(25),
    [sym_func_indicator] = STATE(27),
    [sym_annotation] = STATE(28),
    [aux_sym__block_contents_repeat1] = STATE(28),
    [aux_sym_block_expression_repeat1] = STATE(29),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_LPAREN] = ACTIONS(36),
    [sym__newline] = ACTIONS(38),
    [sym_block_end] = ACTIONS(40),
    [anon_sym_EQ_EQ] = ACTIONS(42),
    [anon_sym_EQ1] = ACTIONS(42),
    [anon_sym_EQ2] = ACTIONS(42),
    [anon_sym_a_EQ] = ACTIONS(42),
    [anon_sym_EQa] = ACTIONS(42),
    [anon_sym_EQ_GT] = ACTIONS(44),
    [anon_sym_EQ3] = ACTIONS(44),
    [anon_sym_EQ4] = ACTIONS(44),
    [anon_sym_b_EQ] = ACTIONS(44),
    [anon_sym_EQb] = ACTIONS(44),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_1] = ACTIONS(26),
    [anon_sym_lambda] = ACTIONS(26),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(46),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(50),
    [sym_func_identifier] = ACTIONS(50),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(50),
    [sym_string] = ACTIONS(50),
  },
  [4] = {
    [aux_sym_annotation_repeat1] = STATE(31),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(54),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_DQUOTE_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(56),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
  },
  [5] = {
    [aux_sym_annotation_repeat2] = STATE(32),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(54),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_SQUOTE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_SQUOTE_SQUOTE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(58),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
  },
  [6] = {
    [anon_sym_EQ] = ACTIONS(60),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(62),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
  },
  [8] = {
    [sym_function_definition] = STATE(34),
    [sym_block] = STATE(34),
    [sym_annotation] = STATE(34),
    [aux_sym_program_repeat1] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(64),
    [anon_sym_GT] = ACTIONS(7),
    [sym__newline] = ACTIONS(66),
    [sym_block_start] = ACTIONS(11),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(15),
    [sym_func_identifier] = ACTIONS(17),
    [sym_line_comment] = ACTIONS(68),
    [sym_block_comment] = ACTIONS(68),
  },
  [9] = {
    [sym__term] = STATE(39),
    [sym_group] = STATE(37),
    [sym_function] = STATE(37),
    [sym__terminal] = STATE(37),
    [sym_func_indicator] = STATE(38),
    [aux_sym_block_expression_repeat1] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(73),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_1] = ACTIONS(24),
    [anon_sym_lambda] = ACTIONS(26),
    [sym_identifier] = ACTIONS(75),
    [sym_func_identifier] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(77),
    [sym_string] = ACTIONS(77),
  },
  [10] = {
    [anon_sym_DASH_GT] = ACTIONS(79),
    [anon_sym_DOT] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_identifier] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(81),
    [anon_sym_GT] = ACTIONS(83),
    [sym__newline] = ACTIONS(81),
    [sym_block_start] = ACTIONS(83),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(83),
    [sym_func_identifier] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(83),
    [sym_block_comment] = ACTIONS(83),
  },
  [12] = {
    [sym_beta_replacement] = STATE(41),
    [anon_sym_SEMI] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [sym__newline] = ACTIONS(89),
    [anon_sym_BSLASH] = ACTIONS(85),
    [anon_sym_1] = ACTIONS(85),
    [anon_sym_lambda] = ACTIONS(85),
    [sym_identifier] = ACTIONS(85),
    [sym_func_identifier] = ACTIONS(85),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(85),
    [sym_string] = ACTIONS(85),
  },
  [13] = {
    [sym_func_sep] = STATE(43),
    [aux_sym_function_repeat1] = STATE(44),
    [anon_sym_DASH_GT] = ACTIONS(91),
    [anon_sym_DOT] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(91),
    [sym_identifier] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
  },
  [14] = {
    [sym__term] = STATE(46),
    [sym_group] = STATE(12),
    [sym_function] = STATE(12),
    [sym__terminal] = STATE(12),
    [sym_func_indicator] = STATE(13),
    [aux_sym_block_expression_repeat1] = STATE(46),
    [anon_sym_SEMI] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(97),
    [sym__newline] = ACTIONS(99),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_1] = ACTIONS(26),
    [anon_sym_lambda] = ACTIONS(26),
    [sym_identifier] = ACTIONS(28),
    [sym_func_identifier] = ACTIONS(28),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(28),
    [sym_string] = ACTIONS(28),
  },
  [15] = {
    [sym_identifier] = ACTIONS(101),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
  },
  [16] = {
    [sym__term] = STATE(49),
    [sym_group] = STATE(37),
    [sym_function] = STATE(37),
    [sym__terminal] = STATE(37),
    [sym_func_indicator] = STATE(38),
    [aux_sym_block_expression_repeat1] = STATE(49),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(103),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_1] = ACTIONS(24),
    [anon_sym_lambda] = ACTIONS(26),
    [sym_identifier] = ACTIONS(75),
    [sym_func_identifier] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(77),
    [sym_string] = ACTIONS(77),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(105),
    [anon_sym_GT] = ACTIONS(107),
    [sym__newline] = ACTIONS(105),
    [sym_block_start] = ACTIONS(107),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(107),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(107),
    [sym_func_identifier] = ACTIONS(107),
    [sym_line_comment] = ACTIONS(107),
    [sym_block_comment] = ACTIONS(107),
  },
  [18] = {
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym_BSLASH] = ACTIONS(109),
    [anon_sym_1] = ACTIONS(109),
    [anon_sym_lambda] = ACTIONS(111),
    [sym_identifier] = ACTIONS(111),
    [sym_func_identifier] = ACTIONS(109),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(109),
    [sym_string] = ACTIONS(109),
  },
  [19] = {
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_BSLASH] = ACTIONS(113),
    [anon_sym_1] = ACTIONS(113),
    [anon_sym_lambda] = ACTIONS(115),
    [sym_identifier] = ACTIONS(115),
    [sym_func_identifier] = ACTIONS(113),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(113),
    [sym_string] = ACTIONS(113),
  },
  [20] = {
    [aux_sym_annotation_repeat1] = STATE(51),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(117),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(119),
    [aux_sym_SLASH_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(119),
    [aux_sym_SLASH_DQUOTE_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(119),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
  },
  [21] = {
    [aux_sym_annotation_repeat2] = STATE(52),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(117),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(121),
    [aux_sym_SLASH_SQUOTE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(121),
    [aux_sym_SLASH_SQUOTE_SQUOTE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(121),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
  },
  [22] = {
    [sym__block_contents] = STATE(54),
    [sym_block_expression] = STATE(24),
    [sym__relation_operator] = STATE(25),
    [sym__term] = STATE(29),
    [sym_group] = STATE(26),
    [sym_function] = STATE(26),
    [sym__terminal] = STATE(26),
    [sym_alpha_convert] = STATE(25),
    [sym_beta_reduce] = STATE(25),
    [sym_func_indicator] = STATE(27),
    [sym_annotation] = STATE(28),
    [aux_sym__block_contents_repeat1] = STATE(28),
    [aux_sym_block_expression_repeat1] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(36),
    [sym__newline] = ACTIONS(38),
    [sym_block_end] = ACTIONS(123),
    [anon_sym_EQ_EQ] = ACTIONS(42),
    [anon_sym_EQ1] = ACTIONS(42),
    [anon_sym_EQ2] = ACTIONS(42),
    [anon_sym_a_EQ] = ACTIONS(42),
    [anon_sym_EQa] = ACTIONS(42),
    [anon_sym_EQ_GT] = ACTIONS(44),
    [anon_sym_EQ3] = ACTIONS(44),
    [anon_sym_EQ4] = ACTIONS(44),
    [anon_sym_b_EQ] = ACTIONS(44),
    [anon_sym_EQb] = ACTIONS(44),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_1] = ACTIONS(26),
    [anon_sym_lambda] = ACTIONS(26),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(46),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(50),
    [sym_func_identifier] = ACTIONS(50),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(50),
    [sym_string] = ACTIONS(50),
  },
  [23] = {
    [sym_block_end] = ACTIONS(125),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
  },
  [24] = {
    [anon_sym_SEMI] = ACTIONS(127),
    [anon_sym_LPAREN] = ACTIONS(129),
    [sym__newline] = ACTIONS(131),
    [sym_block_end] = ACTIONS(129),
    [anon_sym_EQ_EQ] = ACTIONS(129),
    [anon_sym_EQ1] = ACTIONS(129),
    [anon_sym_EQ2] = ACTIONS(129),
    [anon_sym_a_EQ] = ACTIONS(129),
    [anon_sym_EQa] = ACTIONS(129),
    [anon_sym_EQ_GT] = ACTIONS(129),
    [anon_sym_EQ3] = ACTIONS(129),
    [anon_sym_EQ4] = ACTIONS(129),
    [anon_sym_b_EQ] = ACTIONS(129),
    [anon_sym_EQb] = ACTIONS(129),
    [anon_sym_BSLASH] = ACTIONS(129),
    [anon_sym_1] = ACTIONS(129),
    [anon_sym_lambda] = ACTIONS(129),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(129),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(129),
    [sym_identifier] = ACTIONS(129),
    [sym_func_identifier] = ACTIONS(129),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(129),
    [sym_string] = ACTIONS(129),
  },
  [25] = {
    [sym_block_expression] = STATE(56),
    [sym__term] = STATE(29),
    [sym_group] = STATE(26),
    [sym_function] = STATE(26),
    [sym__terminal] = STATE(26),
    [sym_func_indicator] = STATE(27),
    [aux_sym_block_expression_repeat1] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(133),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_1] = ACTIONS(24),
    [anon_sym_lambda] = ACTIONS(26),
    [sym_identifier] = ACTIONS(50),
    [sym_func_identifier] = ACTIONS(135),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(135),
    [sym_string] = ACTIONS(135),
  },
  [26] = {
    [sym_beta_replacement] = STATE(58),
    [anon_sym_SEMI] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(137),
    [sym__newline] = ACTIONS(89),
    [sym_block_end] = ACTIONS(85),
    [anon_sym_EQ_EQ] = ACTIONS(85),
    [anon_sym_EQ1] = ACTIONS(85),
    [anon_sym_EQ2] = ACTIONS(85),
    [anon_sym_a_EQ] = ACTIONS(85),
    [anon_sym_EQa] = ACTIONS(85),
    [anon_sym_EQ_GT] = ACTIONS(85),
    [anon_sym_EQ3] = ACTIONS(85),
    [anon_sym_EQ4] = ACTIONS(85),
    [anon_sym_b_EQ] = ACTIONS(85),
    [anon_sym_EQb] = ACTIONS(85),
    [anon_sym_BSLASH] = ACTIONS(85),
    [anon_sym_1] = ACTIONS(85),
    [anon_sym_lambda] = ACTIONS(85),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(85),
    [sym_identifier] = ACTIONS(85),
    [sym_func_identifier] = ACTIONS(85),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(85),
    [sym_string] = ACTIONS(85),
  },
  [27] = {
    [sym_func_sep] = STATE(60),
    [aux_sym_function_repeat1] = STATE(61),
    [anon_sym_DASH_GT] = ACTIONS(139),
    [anon_sym_DOT] = ACTIONS(139),
    [anon_sym_COLON] = ACTIONS(139),
    [sym_identifier] = ACTIONS(141),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
  },
  [28] = {
    [sym_block_expression] = STATE(24),
    [sym__relation_operator] = STATE(25),
    [sym__term] = STATE(29),
    [sym_group] = STATE(26),
    [sym_function] = STATE(26),
    [sym__terminal] = STATE(26),
    [sym_alpha_convert] = STATE(25),
    [sym_beta_reduce] = STATE(25),
    [sym_func_indicator] = STATE(27),
    [sym_annotation] = STATE(62),
    [aux_sym__block_contents_repeat1] = STATE(62),
    [aux_sym_block_expression_repeat1] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(36),
    [sym__newline] = ACTIONS(143),
    [sym_block_end] = ACTIONS(145),
    [anon_sym_EQ_EQ] = ACTIONS(42),
    [anon_sym_EQ1] = ACTIONS(42),
    [anon_sym_EQ2] = ACTIONS(42),
    [anon_sym_a_EQ] = ACTIONS(42),
    [anon_sym_EQa] = ACTIONS(42),
    [anon_sym_EQ_GT] = ACTIONS(44),
    [anon_sym_EQ3] = ACTIONS(44),
    [anon_sym_EQ4] = ACTIONS(44),
    [anon_sym_b_EQ] = ACTIONS(44),
    [anon_sym_EQb] = ACTIONS(44),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_1] = ACTIONS(26),
    [anon_sym_lambda] = ACTIONS(26),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(46),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(50),
    [sym_func_identifier] = ACTIONS(50),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(50),
    [sym_string] = ACTIONS(50),
  },
  [29] = {
    [sym__term] = STATE(63),
    [sym_group] = STATE(26),
    [sym_function] = STATE(26),
    [sym__terminal] = STATE(26),
    [sym_func_indicator] = STATE(27),
    [aux_sym_block_expression_repeat1] = STATE(63),
    [anon_sym_SEMI] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(36),
    [sym__newline] = ACTIONS(149),
    [sym_block_end] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(147),
    [anon_sym_EQ1] = ACTIONS(147),
    [anon_sym_EQ2] = ACTIONS(147),
    [anon_sym_a_EQ] = ACTIONS(147),
    [anon_sym_EQa] = ACTIONS(147),
    [anon_sym_EQ_GT] = ACTIONS(147),
    [anon_sym_EQ3] = ACTIONS(147),
    [anon_sym_EQ4] = ACTIONS(147),
    [anon_sym_b_EQ] = ACTIONS(147),
    [anon_sym_EQb] = ACTIONS(147),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_1] = ACTIONS(26),
    [anon_sym_lambda] = ACTIONS(26),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(147),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(147),
    [sym_identifier] = ACTIONS(50),
    [sym_func_identifier] = ACTIONS(50),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(50),
    [sym_string] = ACTIONS(50),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(151),
    [anon_sym_GT] = ACTIONS(153),
    [sym__newline] = ACTIONS(151),
    [sym_block_start] = ACTIONS(153),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(153),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(153),
    [sym_func_identifier] = ACTIONS(153),
    [sym_line_comment] = ACTIONS(153),
    [sym_block_comment] = ACTIONS(153),
  },
  [31] = {
    [aux_sym_annotation_repeat1] = STATE(65),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(155),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_DQUOTE_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(157),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
  },
  [32] = {
    [aux_sym_annotation_repeat2] = STATE(66),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(155),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(159),
    [aux_sym_SLASH_SQUOTE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(159),
    [aux_sym_SLASH_SQUOTE_SQUOTE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(159),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
  },
  [33] = {
    [sym_expression] = STATE(67),
    [sym__term] = STATE(14),
    [sym_group] = STATE(12),
    [sym_function] = STATE(12),
    [sym__terminal] = STATE(12),
    [sym_func_indicator] = STATE(13),
    [aux_sym_block_expression_repeat1] = STATE(14),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_1] = ACTIONS(24),
    [anon_sym_lambda] = ACTIONS(26),
    [sym_identifier] = ACTIONS(28),
    [sym_func_identifier] = ACTIONS(30),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(30),
    [sym_string] = ACTIONS(30),
  },
  [34] = {
    [sym_function_definition] = STATE(34),
    [sym_block] = STATE(34),
    [sym_annotation] = STATE(34),
    [aux_sym_program_repeat1] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(81),
    [anon_sym_GT] = ACTIONS(161),
    [sym__newline] = ACTIONS(164),
    [sym_block_start] = ACTIONS(167),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(170),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(173),
    [sym_func_identifier] = ACTIONS(176),
    [sym_line_comment] = ACTIONS(179),
    [sym_block_comment] = ACTIONS(179),
  },
  [35] = {
    [sym__term] = STATE(69),
    [sym_group] = STATE(37),
    [sym_function] = STATE(37),
    [sym__terminal] = STATE(37),
    [sym_func_indicator] = STATE(38),
    [aux_sym_block_expression_repeat1] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(183),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_1] = ACTIONS(24),
    [anon_sym_lambda] = ACTIONS(26),
    [sym_identifier] = ACTIONS(75),
    [sym_func_identifier] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(77),
    [sym_string] = ACTIONS(77),
  },
  [36] = {
    [anon_sym_SEMI] = ACTIONS(185),
    [anon_sym_LPAREN] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(185),
    [sym__newline] = ACTIONS(187),
    [anon_sym_BSLASH] = ACTIONS(185),
    [anon_sym_1] = ACTIONS(185),
    [anon_sym_lambda] = ACTIONS(185),
    [sym_identifier] = ACTIONS(185),
    [sym_func_identifier] = ACTIONS(185),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(185),
    [sym_string] = ACTIONS(185),
  },
  [37] = {
    [sym_beta_replacement] = STATE(71),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(189),
    [anon_sym_RBRACK] = ACTIONS(89),
    [anon_sym_BSLASH] = ACTIONS(89),
    [anon_sym_1] = ACTIONS(89),
    [anon_sym_lambda] = ACTIONS(85),
    [anon_sym_DASH_GT] = ACTIONS(89),
    [anon_sym_COLON_EQ] = ACTIONS(89),
    [anon_sym_SLASH] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(89),
    [anon_sym_LT_DASH] = ACTIONS(89),
    [sym_identifier] = ACTIONS(85),
    [sym_func_identifier] = ACTIONS(89),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(89),
    [sym_string] = ACTIONS(89),
  },
  [38] = {
    [sym_func_sep] = STATE(73),
    [aux_sym_function_repeat1] = STATE(74),
    [anon_sym_DASH_GT] = ACTIONS(191),
    [anon_sym_DOT] = ACTIONS(191),
    [anon_sym_COLON] = ACTIONS(191),
    [sym_identifier] = ACTIONS(193),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
  },
  [39] = {
    [sym__term] = STATE(76),
    [sym_group] = STATE(37),
    [sym_function] = STATE(37),
    [sym__terminal] = STATE(37),
    [sym_func_indicator] = STATE(38),
    [aux_sym_block_expression_repeat1] = STATE(76),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(195),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_1] = ACTIONS(24),
    [anon_sym_lambda] = ACTIONS(26),
    [sym_identifier] = ACTIONS(75),
    [sym_func_identifier] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(77),
    [sym_string] = ACTIONS(77),
  },
  [40] = {
    [sym__term] = STATE(77),
    [sym_group] = STATE(37),
    [sym_function] = STATE(37),
    [sym__terminal] = STATE(37),
    [sym_func_indicator] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_1] = ACTIONS(24),
    [anon_sym_lambda] = ACTIONS(26),
    [sym_identifier] = ACTIONS(75),
    [sym_func_identifier] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(77),
    [sym_string] = ACTIONS(77),
  },
  [41] = {
    [anon_sym_SEMI] = ACTIONS(197),
    [anon_sym_LPAREN] = ACTIONS(197),
    [anon_sym_LBRACK] = ACTIONS(197),
    [sym__newline] = ACTIONS(199),
    [anon_sym_BSLASH] = ACTIONS(197),
    [anon_sym_1] = ACTIONS(197),
    [anon_sym_lambda] = ACTIONS(197),
    [sym_identifier] = ACTIONS(197),
    [sym_func_identifier] = ACTIONS(197),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(197),
    [sym_string] = ACTIONS(197),
  },
  [42] = {
    [anon_sym_SEMI] = ACTIONS(201),
    [anon_sym_LPAREN] = ACTIONS(201),
    [anon_sym_LBRACK] = ACTIONS(201),
    [sym__newline] = ACTIONS(203),
    [anon_sym_BSLASH] = ACTIONS(201),
    [anon_sym_1] = ACTIONS(201),
    [anon_sym_lambda] = ACTIONS(201),
    [sym_identifier] = ACTIONS(201),
    [sym_func_identifier] = ACTIONS(201),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(201),
    [sym_string] = ACTIONS(201),
  },
  [43] = {
    [sym__term] = STATE(80),
    [sym_group] = STATE(12),
    [sym_function] = STATE(12),
    [sym_func_body] = STATE(79),
    [sym__terminal] = STATE(12),
    [sym_func_indicator] = STATE(13),
    [aux_sym_block_expression_repeat1] = STATE(80),
    [anon_sym_SEMI] = ACTIONS(205),
    [anon_sym_LPAREN] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(205),
    [sym__newline] = ACTIONS(207),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_1] = ACTIONS(26),
    [anon_sym_lambda] = ACTIONS(26),
    [sym_identifier] = ACTIONS(28),
    [sym_func_identifier] = ACTIONS(28),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(28),
    [sym_string] = ACTIONS(28),
  },
  [44] = {
    [sym_func_sep] = STATE(81),
    [aux_sym_function_repeat1] = STATE(82),
    [anon_sym_DASH_GT] = ACTIONS(91),
    [anon_sym_DOT] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(91),
    [sym_identifier] = ACTIONS(209),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(211),
    [anon_sym_GT] = ACTIONS(213),
    [sym__newline] = ACTIONS(211),
    [sym_block_start] = ACTIONS(213),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(213),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(213),
    [sym_func_identifier] = ACTIONS(213),
    [sym_line_comment] = ACTIONS(213),
    [sym_block_comment] = ACTIONS(213),
  },
  [46] = {
    [sym__term] = STATE(46),
    [sym_group] = STATE(12),
    [sym_function] = STATE(12),
    [sym__terminal] = STATE(12),
    [sym_func_indicator] = STATE(13),
    [aux_sym_block_expression_repeat1] = STATE(46),
    [anon_sym_SEMI] = ACTIONS(215),
    [anon_sym_LPAREN] = ACTIONS(217),
    [sym__newline] = ACTIONS(220),
    [anon_sym_BSLASH] = ACTIONS(222),
    [anon_sym_1] = ACTIONS(222),
    [anon_sym_lambda] = ACTIONS(222),
    [sym_identifier] = ACTIONS(225),
    [sym_func_identifier] = ACTIONS(225),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(225),
    [sym_string] = ACTIONS(225),
  },
  [47] = {
    [anon_sym_RBRACE] = ACTIONS(228),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
  },
  [48] = {
    [anon_sym_SEMI] = ACTIONS(185),
    [anon_sym_LPAREN] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(185),
    [sym__newline] = ACTIONS(187),
    [sym_block_end] = ACTIONS(185),
    [anon_sym_EQ_EQ] = ACTIONS(185),
    [anon_sym_EQ1] = ACTIONS(185),
    [anon_sym_EQ2] = ACTIONS(185),
    [anon_sym_a_EQ] = ACTIONS(185),
    [anon_sym_EQa] = ACTIONS(185),
    [anon_sym_EQ_GT] = ACTIONS(185),
    [anon_sym_EQ3] = ACTIONS(185),
    [anon_sym_EQ4] = ACTIONS(185),
    [anon_sym_b_EQ] = ACTIONS(185),
    [anon_sym_EQb] = ACTIONS(185),
    [anon_sym_BSLASH] = ACTIONS(185),
    [anon_sym_1] = ACTIONS(185),
    [anon_sym_lambda] = ACTIONS(185),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(185),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(185),
    [sym_identifier] = ACTIONS(185),
    [sym_func_identifier] = ACTIONS(185),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(185),
    [sym_string] = ACTIONS(185),
  },
  [49] = {
    [sym__term] = STATE(76),
    [sym_group] = STATE(37),
    [sym_function] = STATE(37),
    [sym__terminal] = STATE(37),
    [sym_func_indicator] = STATE(38),
    [aux_sym_block_expression_repeat1] = STATE(76),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(230),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_1] = ACTIONS(24),
    [anon_sym_lambda] = ACTIONS(26),
    [sym_identifier] = ACTIONS(75),
    [sym_func_identifier] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(77),
    [sym_string] = ACTIONS(77),
  },
  [50] = {
    [anon_sym_LPAREN] = ACTIONS(153),
    [sym__newline] = ACTIONS(151),
    [sym_block_end] = ACTIONS(153),
    [anon_sym_EQ_EQ] = ACTIONS(153),
    [anon_sym_EQ1] = ACTIONS(153),
    [anon_sym_EQ2] = ACTIONS(153),
    [anon_sym_a_EQ] = ACTIONS(153),
    [anon_sym_EQa] = ACTIONS(153),
    [anon_sym_EQ_GT] = ACTIONS(153),
    [anon_sym_EQ3] = ACTIONS(153),
    [anon_sym_EQ4] = ACTIONS(153),
    [anon_sym_b_EQ] = ACTIONS(153),
    [anon_sym_EQb] = ACTIONS(153),
    [anon_sym_BSLASH] = ACTIONS(153),
    [anon_sym_1] = ACTIONS(153),
    [anon_sym_lambda] = ACTIONS(153),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(153),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(153),
    [sym_identifier] = ACTIONS(153),
    [sym_func_identifier] = ACTIONS(153),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(153),
    [sym_string] = ACTIONS(153),
  },
  [51] = {
    [aux_sym_annotation_repeat1] = STATE(65),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(232),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_DQUOTE_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(157),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
  },
  [52] = {
    [aux_sym_annotation_repeat2] = STATE(66),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(232),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(159),
    [aux_sym_SLASH_SQUOTE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(159),
    [aux_sym_SLASH_SQUOTE_SQUOTE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(159),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(234),
    [anon_sym_GT] = ACTIONS(236),
    [sym__newline] = ACTIONS(234),
    [sym_block_start] = ACTIONS(236),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(236),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(236),
    [sym_func_identifier] = ACTIONS(236),
    [sym_line_comment] = ACTIONS(236),
    [sym_block_comment] = ACTIONS(236),
  },
  [54] = {
    [sym_block_end] = ACTIONS(238),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
  },
  [55] = {
    [anon_sym_LPAREN] = ACTIONS(240),
    [sym__newline] = ACTIONS(242),
    [sym_block_end] = ACTIONS(240),
    [anon_sym_EQ_EQ] = ACTIONS(240),
    [anon_sym_EQ1] = ACTIONS(240),
    [anon_sym_EQ2] = ACTIONS(240),
    [anon_sym_a_EQ] = ACTIONS(240),
    [anon_sym_EQa] = ACTIONS(240),
    [anon_sym_EQ_GT] = ACTIONS(240),
    [anon_sym_EQ3] = ACTIONS(240),
    [anon_sym_EQ4] = ACTIONS(240),
    [anon_sym_b_EQ] = ACTIONS(240),
    [anon_sym_EQb] = ACTIONS(240),
    [anon_sym_BSLASH] = ACTIONS(240),
    [anon_sym_1] = ACTIONS(240),
    [anon_sym_lambda] = ACTIONS(240),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(240),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(240),
    [sym_identifier] = ACTIONS(240),
    [sym_func_identifier] = ACTIONS(240),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(240),
    [sym_string] = ACTIONS(240),
  },
  [56] = {
    [anon_sym_SEMI] = ACTIONS(244),
    [anon_sym_LPAREN] = ACTIONS(246),
    [sym__newline] = ACTIONS(248),
    [sym_block_end] = ACTIONS(246),
    [anon_sym_EQ_EQ] = ACTIONS(246),
    [anon_sym_EQ1] = ACTIONS(246),
    [anon_sym_EQ2] = ACTIONS(246),
    [anon_sym_a_EQ] = ACTIONS(246),
    [anon_sym_EQa] = ACTIONS(246),
    [anon_sym_EQ_GT] = ACTIONS(246),
    [anon_sym_EQ3] = ACTIONS(246),
    [anon_sym_EQ4] = ACTIONS(246),
    [anon_sym_b_EQ] = ACTIONS(246),
    [anon_sym_EQb] = ACTIONS(246),
    [anon_sym_BSLASH] = ACTIONS(246),
    [anon_sym_1] = ACTIONS(246),
    [anon_sym_lambda] = ACTIONS(246),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(246),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(246),
    [sym_identifier] = ACTIONS(246),
    [sym_func_identifier] = ACTIONS(246),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(246),
    [sym_string] = ACTIONS(246),
  },
  [57] = {
    [sym__term] = STATE(88),
    [sym_group] = STATE(37),
    [sym_function] = STATE(37),
    [sym__terminal] = STATE(37),
    [sym_func_indicator] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_1] = ACTIONS(24),
    [anon_sym_lambda] = ACTIONS(26),
    [sym_identifier] = ACTIONS(75),
    [sym_func_identifier] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(77),
    [sym_string] = ACTIONS(77),
  },
  [58] = {
    [anon_sym_SEMI] = ACTIONS(197),
    [anon_sym_LPAREN] = ACTIONS(197),
    [anon_sym_LBRACK] = ACTIONS(197),
    [sym__newline] = ACTIONS(199),
    [sym_block_end] = ACTIONS(197),
    [anon_sym_EQ_EQ] = ACTIONS(197),
    [anon_sym_EQ1] = ACTIONS(197),
    [anon_sym_EQ2] = ACTIONS(197),
    [anon_sym_a_EQ] = ACTIONS(197),
    [anon_sym_EQa] = ACTIONS(197),
    [anon_sym_EQ_GT] = ACTIONS(197),
    [anon_sym_EQ3] = ACTIONS(197),
    [anon_sym_EQ4] = ACTIONS(197),
    [anon_sym_b_EQ] = ACTIONS(197),
    [anon_sym_EQb] = ACTIONS(197),
    [anon_sym_BSLASH] = ACTIONS(197),
    [anon_sym_1] = ACTIONS(197),
    [anon_sym_lambda] = ACTIONS(197),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(197),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(197),
    [sym_identifier] = ACTIONS(197),
    [sym_func_identifier] = ACTIONS(197),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(197),
    [sym_string] = ACTIONS(197),
  },
  [59] = {
    [anon_sym_SEMI] = ACTIONS(201),
    [anon_sym_LPAREN] = ACTIONS(201),
    [anon_sym_LBRACK] = ACTIONS(201),
    [sym__newline] = ACTIONS(203),
    [sym_block_end] = ACTIONS(201),
    [anon_sym_EQ_EQ] = ACTIONS(201),
    [anon_sym_EQ1] = ACTIONS(201),
    [anon_sym_EQ2] = ACTIONS(201),
    [anon_sym_a_EQ] = ACTIONS(201),
    [anon_sym_EQa] = ACTIONS(201),
    [anon_sym_EQ_GT] = ACTIONS(201),
    [anon_sym_EQ3] = ACTIONS(201),
    [anon_sym_EQ4] = ACTIONS(201),
    [anon_sym_b_EQ] = ACTIONS(201),
    [anon_sym_EQb] = ACTIONS(201),
    [anon_sym_BSLASH] = ACTIONS(201),
    [anon_sym_1] = ACTIONS(201),
    [anon_sym_lambda] = ACTIONS(201),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(201),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(201),
    [sym_identifier] = ACTIONS(201),
    [sym_func_identifier] = ACTIONS(201),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(201),
    [sym_string] = ACTIONS(201),
  },
  [60] = {
    [sym__term] = STATE(90),
    [sym_group] = STATE(26),
    [sym_function] = STATE(26),
    [sym_func_body] = STATE(89),
    [sym__terminal] = STATE(26),
    [sym_func_indicator] = STATE(27),
    [aux_sym_block_expression_repeat1] = STATE(90),
    [anon_sym_SEMI] = ACTIONS(205),
    [anon_sym_LPAREN] = ACTIONS(36),
    [anon_sym_LBRACK] = ACTIONS(205),
    [sym__newline] = ACTIONS(207),
    [sym_block_end] = ACTIONS(205),
    [anon_sym_EQ_EQ] = ACTIONS(205),
    [anon_sym_EQ1] = ACTIONS(205),
    [anon_sym_EQ2] = ACTIONS(205),
    [anon_sym_a_EQ] = ACTIONS(205),
    [anon_sym_EQa] = ACTIONS(205),
    [anon_sym_EQ_GT] = ACTIONS(205),
    [anon_sym_EQ3] = ACTIONS(205),
    [anon_sym_EQ4] = ACTIONS(205),
    [anon_sym_b_EQ] = ACTIONS(205),
    [anon_sym_EQb] = ACTIONS(205),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_1] = ACTIONS(26),
    [anon_sym_lambda] = ACTIONS(26),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(205),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(205),
    [sym_identifier] = ACTIONS(50),
    [sym_func_identifier] = ACTIONS(50),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(50),
    [sym_string] = ACTIONS(50),
  },
  [61] = {
    [sym_func_sep] = STATE(91),
    [aux_sym_function_repeat1] = STATE(82),
    [anon_sym_DASH_GT] = ACTIONS(139),
    [anon_sym_DOT] = ACTIONS(139),
    [anon_sym_COLON] = ACTIONS(139),
    [sym_identifier] = ACTIONS(209),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
  },
  [62] = {
    [sym_block_expression] = STATE(24),
    [sym__relation_operator] = STATE(25),
    [sym__term] = STATE(29),
    [sym_group] = STATE(26),
    [sym_function] = STATE(26),
    [sym__terminal] = STATE(26),
    [sym_alpha_convert] = STATE(25),
    [sym_beta_reduce] = STATE(25),
    [sym_func_indicator] = STATE(27),
    [sym_annotation] = STATE(62),
    [aux_sym__block_contents_repeat1] = STATE(62),
    [aux_sym_block_expression_repeat1] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(250),
    [sym__newline] = ACTIONS(253),
    [sym_block_end] = ACTIONS(256),
    [anon_sym_EQ_EQ] = ACTIONS(258),
    [anon_sym_EQ1] = ACTIONS(258),
    [anon_sym_EQ2] = ACTIONS(258),
    [anon_sym_a_EQ] = ACTIONS(258),
    [anon_sym_EQa] = ACTIONS(258),
    [anon_sym_EQ_GT] = ACTIONS(261),
    [anon_sym_EQ3] = ACTIONS(261),
    [anon_sym_EQ4] = ACTIONS(261),
    [anon_sym_b_EQ] = ACTIONS(261),
    [anon_sym_EQb] = ACTIONS(261),
    [anon_sym_BSLASH] = ACTIONS(264),
    [anon_sym_1] = ACTIONS(264),
    [anon_sym_lambda] = ACTIONS(264),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(267),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(270),
    [sym_identifier] = ACTIONS(273),
    [sym_func_identifier] = ACTIONS(273),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(273),
    [sym_string] = ACTIONS(273),
  },
  [63] = {
    [sym__term] = STATE(63),
    [sym_group] = STATE(26),
    [sym_function] = STATE(26),
    [sym__terminal] = STATE(26),
    [sym_func_indicator] = STATE(27),
    [aux_sym_block_expression_repeat1] = STATE(63),
    [anon_sym_SEMI] = ACTIONS(215),
    [anon_sym_LPAREN] = ACTIONS(276),
    [sym__newline] = ACTIONS(220),
    [sym_block_end] = ACTIONS(215),
    [anon_sym_EQ_EQ] = ACTIONS(215),
    [anon_sym_EQ1] = ACTIONS(215),
    [anon_sym_EQ2] = ACTIONS(215),
    [anon_sym_a_EQ] = ACTIONS(215),
    [anon_sym_EQa] = ACTIONS(215),
    [anon_sym_EQ_GT] = ACTIONS(215),
    [anon_sym_EQ3] = ACTIONS(215),
    [anon_sym_EQ4] = ACTIONS(215),
    [anon_sym_b_EQ] = ACTIONS(215),
    [anon_sym_EQb] = ACTIONS(215),
    [anon_sym_BSLASH] = ACTIONS(222),
    [anon_sym_1] = ACTIONS(222),
    [anon_sym_lambda] = ACTIONS(222),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(215),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(215),
    [sym_identifier] = ACTIONS(279),
    [sym_func_identifier] = ACTIONS(279),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(279),
    [sym_string] = ACTIONS(279),
  },
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(282),
    [anon_sym_GT] = ACTIONS(284),
    [sym__newline] = ACTIONS(282),
    [sym_block_start] = ACTIONS(284),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(284),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(284),
    [sym_func_identifier] = ACTIONS(284),
    [sym_line_comment] = ACTIONS(284),
    [sym_block_comment] = ACTIONS(284),
  },
  [65] = {
    [aux_sym_annotation_repeat1] = STATE(65),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(286),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_DQUOTE_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(288),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
  },
  [66] = {
    [aux_sym_annotation_repeat2] = STATE(66),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(291),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(293),
    [aux_sym_SLASH_SQUOTE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(293),
    [aux_sym_SLASH_SQUOTE_SQUOTE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(293),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(296),
    [anon_sym_GT] = ACTIONS(298),
    [sym__newline] = ACTIONS(296),
    [sym_block_start] = ACTIONS(298),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(298),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(298),
    [sym_func_identifier] = ACTIONS(298),
    [sym_line_comment] = ACTIONS(298),
    [sym_block_comment] = ACTIONS(298),
  },
  [68] = {
    [anon_sym_LPAREN] = ACTIONS(187),
    [anon_sym_RPAREN] = ACTIONS(187),
    [anon_sym_LBRACK] = ACTIONS(187),
    [anon_sym_RBRACK] = ACTIONS(187),
    [anon_sym_BSLASH] = ACTIONS(187),
    [anon_sym_1] = ACTIONS(187),
    [anon_sym_lambda] = ACTIONS(185),
    [anon_sym_DASH_GT] = ACTIONS(187),
    [anon_sym_COLON_EQ] = ACTIONS(187),
    [anon_sym_SLASH] = ACTIONS(185),
    [anon_sym_PIPE] = ACTIONS(187),
    [anon_sym_LT_DASH] = ACTIONS(187),
    [sym_identifier] = ACTIONS(185),
    [sym_func_identifier] = ACTIONS(187),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(187),
    [sym_string] = ACTIONS(187),
  },
  [69] = {
    [sym__term] = STATE(76),
    [sym_group] = STATE(37),
    [sym_function] = STATE(37),
    [sym__terminal] = STATE(37),
    [sym_func_indicator] = STATE(38),
    [aux_sym_block_expression_repeat1] = STATE(76),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(300),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_1] = ACTIONS(24),
    [anon_sym_lambda] = ACTIONS(26),
    [sym_identifier] = ACTIONS(75),
    [sym_func_identifier] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(77),
    [sym_string] = ACTIONS(77),
  },
  [70] = {
    [sym__term] = STATE(93),
    [sym_group] = STATE(37),
    [sym_function] = STATE(37),
    [sym__terminal] = STATE(37),
    [sym_func_indicator] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_1] = ACTIONS(24),
    [anon_sym_lambda] = ACTIONS(26),
    [sym_identifier] = ACTIONS(75),
    [sym_func_identifier] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(77),
    [sym_string] = ACTIONS(77),
  },
  [71] = {
    [anon_sym_LPAREN] = ACTIONS(199),
    [anon_sym_RPAREN] = ACTIONS(199),
    [anon_sym_LBRACK] = ACTIONS(199),
    [anon_sym_RBRACK] = ACTIONS(199),
    [anon_sym_BSLASH] = ACTIONS(199),
    [anon_sym_1] = ACTIONS(199),
    [anon_sym_lambda] = ACTIONS(197),
    [anon_sym_DASH_GT] = ACTIONS(199),
    [anon_sym_COLON_EQ] = ACTIONS(199),
    [anon_sym_SLASH] = ACTIONS(197),
    [anon_sym_PIPE] = ACTIONS(199),
    [anon_sym_LT_DASH] = ACTIONS(199),
    [sym_identifier] = ACTIONS(197),
    [sym_func_identifier] = ACTIONS(199),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(199),
    [sym_string] = ACTIONS(199),
  },
  [72] = {
    [anon_sym_LPAREN] = ACTIONS(203),
    [anon_sym_RPAREN] = ACTIONS(203),
    [anon_sym_LBRACK] = ACTIONS(203),
    [anon_sym_RBRACK] = ACTIONS(203),
    [anon_sym_BSLASH] = ACTIONS(203),
    [anon_sym_1] = ACTIONS(203),
    [anon_sym_lambda] = ACTIONS(201),
    [anon_sym_DASH_GT] = ACTIONS(203),
    [anon_sym_COLON_EQ] = ACTIONS(203),
    [anon_sym_SLASH] = ACTIONS(201),
    [anon_sym_PIPE] = ACTIONS(203),
    [anon_sym_LT_DASH] = ACTIONS(203),
    [sym_identifier] = ACTIONS(201),
    [sym_func_identifier] = ACTIONS(203),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(203),
    [sym_string] = ACTIONS(203),
  },
  [73] = {
    [sym__term] = STATE(95),
    [sym_group] = STATE(37),
    [sym_function] = STATE(37),
    [sym_func_body] = STATE(94),
    [sym__terminal] = STATE(37),
    [sym_func_indicator] = STATE(38),
    [aux_sym_block_expression_repeat1] = STATE(95),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(207),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_1] = ACTIONS(24),
    [anon_sym_lambda] = ACTIONS(26),
    [sym_identifier] = ACTIONS(75),
    [sym_func_identifier] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(77),
    [sym_string] = ACTIONS(77),
  },
  [74] = {
    [sym_func_sep] = STATE(96),
    [aux_sym_function_repeat1] = STATE(82),
    [anon_sym_DASH_GT] = ACTIONS(191),
    [anon_sym_DOT] = ACTIONS(191),
    [anon_sym_COLON] = ACTIONS(191),
    [sym_identifier] = ACTIONS(209),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
  },
  [75] = {
    [anon_sym_SEMI] = ACTIONS(302),
    [anon_sym_LPAREN] = ACTIONS(302),
    [anon_sym_LBRACK] = ACTIONS(302),
    [sym__newline] = ACTIONS(304),
    [anon_sym_BSLASH] = ACTIONS(302),
    [anon_sym_1] = ACTIONS(302),
    [anon_sym_lambda] = ACTIONS(302),
    [sym_identifier] = ACTIONS(302),
    [sym_func_identifier] = ACTIONS(302),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(302),
    [sym_string] = ACTIONS(302),
  },
  [76] = {
    [sym__term] = STATE(76),
    [sym_group] = STATE(37),
    [sym_function] = STATE(37),
    [sym__terminal] = STATE(37),
    [sym_func_indicator] = STATE(38),
    [aux_sym_block_expression_repeat1] = STATE(76),
    [anon_sym_LPAREN] = ACTIONS(306),
    [anon_sym_RPAREN] = ACTIONS(220),
    [anon_sym_BSLASH] = ACTIONS(309),
    [anon_sym_1] = ACTIONS(309),
    [anon_sym_lambda] = ACTIONS(222),
    [sym_identifier] = ACTIONS(312),
    [sym_func_identifier] = ACTIONS(315),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(315),
    [sym_string] = ACTIONS(315),
  },
  [77] = {
    [sym__replacement_indicator] = STATE(99),
    [sym_replace_forwards] = STATE(99),
    [sym_replace_backwards] = STATE(99),
    [anon_sym_BSLASH] = ACTIONS(318),
    [anon_sym_DASH_GT] = ACTIONS(320),
    [anon_sym_COLON_EQ] = ACTIONS(320),
    [anon_sym_SLASH] = ACTIONS(322),
    [anon_sym_PIPE] = ACTIONS(320),
    [anon_sym_LT_DASH] = ACTIONS(318),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
  },
  [78] = {
    [sym_func_sep] = STATE(100),
    [aux_sym_function_repeat1] = STATE(101),
    [anon_sym_DASH_GT] = ACTIONS(191),
    [anon_sym_DOT] = ACTIONS(191),
    [anon_sym_COLON] = ACTIONS(191),
    [sym_identifier] = ACTIONS(324),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
  },
  [79] = {
    [anon_sym_SEMI] = ACTIONS(326),
    [anon_sym_LPAREN] = ACTIONS(326),
    [anon_sym_LBRACK] = ACTIONS(326),
    [sym__newline] = ACTIONS(328),
    [anon_sym_BSLASH] = ACTIONS(326),
    [anon_sym_1] = ACTIONS(326),
    [anon_sym_lambda] = ACTIONS(326),
    [sym_identifier] = ACTIONS(326),
    [sym_func_identifier] = ACTIONS(326),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(326),
    [sym_string] = ACTIONS(326),
  },
  [80] = {
    [sym__term] = STATE(102),
    [sym_group] = STATE(12),
    [sym_function] = STATE(12),
    [sym__terminal] = STATE(12),
    [sym_func_indicator] = STATE(13),
    [aux_sym_block_expression_repeat1] = STATE(102),
    [anon_sym_SEMI] = ACTIONS(330),
    [anon_sym_LPAREN] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(330),
    [sym__newline] = ACTIONS(332),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_1] = ACTIONS(26),
    [anon_sym_lambda] = ACTIONS(26),
    [sym_identifier] = ACTIONS(28),
    [sym_func_identifier] = ACTIONS(28),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(28),
    [sym_string] = ACTIONS(28),
  },
  [81] = {
    [sym__term] = STATE(80),
    [sym_group] = STATE(12),
    [sym_function] = STATE(12),
    [sym_func_body] = STATE(103),
    [sym__terminal] = STATE(12),
    [sym_func_indicator] = STATE(13),
    [aux_sym_block_expression_repeat1] = STATE(80),
    [anon_sym_SEMI] = ACTIONS(326),
    [anon_sym_LPAREN] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(326),
    [sym__newline] = ACTIONS(328),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_1] = ACTIONS(26),
    [anon_sym_lambda] = ACTIONS(26),
    [sym_identifier] = ACTIONS(28),
    [sym_func_identifier] = ACTIONS(28),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(28),
    [sym_string] = ACTIONS(28),
  },
  [82] = {
    [aux_sym_function_repeat1] = STATE(82),
    [anon_sym_DASH_GT] = ACTIONS(334),
    [anon_sym_DOT] = ACTIONS(334),
    [anon_sym_COLON] = ACTIONS(334),
    [sym_identifier] = ACTIONS(336),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
  },
  [83] = {
    [anon_sym_LPAREN] = ACTIONS(339),
    [sym__newline] = ACTIONS(341),
    [sym_block_end] = ACTIONS(339),
    [anon_sym_EQ_EQ] = ACTIONS(339),
    [anon_sym_EQ1] = ACTIONS(339),
    [anon_sym_EQ2] = ACTIONS(339),
    [anon_sym_a_EQ] = ACTIONS(339),
    [anon_sym_EQa] = ACTIONS(339),
    [anon_sym_EQ_GT] = ACTIONS(339),
    [anon_sym_EQ3] = ACTIONS(339),
    [anon_sym_EQ4] = ACTIONS(339),
    [anon_sym_b_EQ] = ACTIONS(339),
    [anon_sym_EQb] = ACTIONS(339),
    [anon_sym_BSLASH] = ACTIONS(339),
    [anon_sym_1] = ACTIONS(339),
    [anon_sym_lambda] = ACTIONS(339),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(339),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(339),
    [sym_identifier] = ACTIONS(339),
    [sym_func_identifier] = ACTIONS(339),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(339),
    [sym_string] = ACTIONS(339),
  },
  [84] = {
    [anon_sym_SEMI] = ACTIONS(302),
    [anon_sym_LPAREN] = ACTIONS(302),
    [anon_sym_LBRACK] = ACTIONS(302),
    [sym__newline] = ACTIONS(304),
    [sym_block_end] = ACTIONS(302),
    [anon_sym_EQ_EQ] = ACTIONS(302),
    [anon_sym_EQ1] = ACTIONS(302),
    [anon_sym_EQ2] = ACTIONS(302),
    [anon_sym_a_EQ] = ACTIONS(302),
    [anon_sym_EQa] = ACTIONS(302),
    [anon_sym_EQ_GT] = ACTIONS(302),
    [anon_sym_EQ3] = ACTIONS(302),
    [anon_sym_EQ4] = ACTIONS(302),
    [anon_sym_b_EQ] = ACTIONS(302),
    [anon_sym_EQb] = ACTIONS(302),
    [anon_sym_BSLASH] = ACTIONS(302),
    [anon_sym_1] = ACTIONS(302),
    [anon_sym_lambda] = ACTIONS(302),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(302),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(302),
    [sym_identifier] = ACTIONS(302),
    [sym_func_identifier] = ACTIONS(302),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(302),
    [sym_string] = ACTIONS(302),
  },
  [85] = {
    [anon_sym_LPAREN] = ACTIONS(284),
    [sym__newline] = ACTIONS(282),
    [sym_block_end] = ACTIONS(284),
    [anon_sym_EQ_EQ] = ACTIONS(284),
    [anon_sym_EQ1] = ACTIONS(284),
    [anon_sym_EQ2] = ACTIONS(284),
    [anon_sym_a_EQ] = ACTIONS(284),
    [anon_sym_EQa] = ACTIONS(284),
    [anon_sym_EQ_GT] = ACTIONS(284),
    [anon_sym_EQ3] = ACTIONS(284),
    [anon_sym_EQ4] = ACTIONS(284),
    [anon_sym_b_EQ] = ACTIONS(284),
    [anon_sym_EQb] = ACTIONS(284),
    [anon_sym_BSLASH] = ACTIONS(284),
    [anon_sym_1] = ACTIONS(284),
    [anon_sym_lambda] = ACTIONS(284),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(284),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(284),
    [sym_identifier] = ACTIONS(284),
    [sym_func_identifier] = ACTIONS(284),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(284),
    [sym_string] = ACTIONS(284),
  },
  [86] = {
    [ts_builtin_sym_end] = ACTIONS(343),
    [anon_sym_GT] = ACTIONS(345),
    [sym__newline] = ACTIONS(343),
    [sym_block_start] = ACTIONS(345),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(345),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(345),
    [sym_func_identifier] = ACTIONS(345),
    [sym_line_comment] = ACTIONS(345),
    [sym_block_comment] = ACTIONS(345),
  },
  [87] = {
    [anon_sym_LPAREN] = ACTIONS(347),
    [sym__newline] = ACTIONS(349),
    [sym_block_end] = ACTIONS(347),
    [anon_sym_EQ_EQ] = ACTIONS(347),
    [anon_sym_EQ1] = ACTIONS(347),
    [anon_sym_EQ2] = ACTIONS(347),
    [anon_sym_a_EQ] = ACTIONS(347),
    [anon_sym_EQa] = ACTIONS(347),
    [anon_sym_EQ_GT] = ACTIONS(347),
    [anon_sym_EQ3] = ACTIONS(347),
    [anon_sym_EQ4] = ACTIONS(347),
    [anon_sym_b_EQ] = ACTIONS(347),
    [anon_sym_EQb] = ACTIONS(347),
    [anon_sym_BSLASH] = ACTIONS(347),
    [anon_sym_1] = ACTIONS(347),
    [anon_sym_lambda] = ACTIONS(347),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(347),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(347),
    [sym_identifier] = ACTIONS(347),
    [sym_func_identifier] = ACTIONS(347),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(347),
    [sym_string] = ACTIONS(347),
  },
  [88] = {
    [sym__replacement_indicator] = STATE(104),
    [sym_replace_forwards] = STATE(104),
    [sym_replace_backwards] = STATE(104),
    [anon_sym_BSLASH] = ACTIONS(318),
    [anon_sym_DASH_GT] = ACTIONS(320),
    [anon_sym_COLON_EQ] = ACTIONS(320),
    [anon_sym_SLASH] = ACTIONS(322),
    [anon_sym_PIPE] = ACTIONS(320),
    [anon_sym_LT_DASH] = ACTIONS(318),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
  },
  [89] = {
    [anon_sym_SEMI] = ACTIONS(326),
    [anon_sym_LPAREN] = ACTIONS(326),
    [anon_sym_LBRACK] = ACTIONS(326),
    [sym__newline] = ACTIONS(328),
    [sym_block_end] = ACTIONS(326),
    [anon_sym_EQ_EQ] = ACTIONS(326),
    [anon_sym_EQ1] = ACTIONS(326),
    [anon_sym_EQ2] = ACTIONS(326),
    [anon_sym_a_EQ] = ACTIONS(326),
    [anon_sym_EQa] = ACTIONS(326),
    [anon_sym_EQ_GT] = ACTIONS(326),
    [anon_sym_EQ3] = ACTIONS(326),
    [anon_sym_EQ4] = ACTIONS(326),
    [anon_sym_b_EQ] = ACTIONS(326),
    [anon_sym_EQb] = ACTIONS(326),
    [anon_sym_BSLASH] = ACTIONS(326),
    [anon_sym_1] = ACTIONS(326),
    [anon_sym_lambda] = ACTIONS(326),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(326),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(326),
    [sym_identifier] = ACTIONS(326),
    [sym_func_identifier] = ACTIONS(326),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(326),
    [sym_string] = ACTIONS(326),
  },
  [90] = {
    [sym__term] = STATE(105),
    [sym_group] = STATE(26),
    [sym_function] = STATE(26),
    [sym__terminal] = STATE(26),
    [sym_func_indicator] = STATE(27),
    [aux_sym_block_expression_repeat1] = STATE(105),
    [anon_sym_SEMI] = ACTIONS(330),
    [anon_sym_LPAREN] = ACTIONS(36),
    [anon_sym_LBRACK] = ACTIONS(330),
    [sym__newline] = ACTIONS(332),
    [sym_block_end] = ACTIONS(330),
    [anon_sym_EQ_EQ] = ACTIONS(330),
    [anon_sym_EQ1] = ACTIONS(330),
    [anon_sym_EQ2] = ACTIONS(330),
    [anon_sym_a_EQ] = ACTIONS(330),
    [anon_sym_EQa] = ACTIONS(330),
    [anon_sym_EQ_GT] = ACTIONS(330),
    [anon_sym_EQ3] = ACTIONS(330),
    [anon_sym_EQ4] = ACTIONS(330),
    [anon_sym_b_EQ] = ACTIONS(330),
    [anon_sym_EQb] = ACTIONS(330),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_1] = ACTIONS(26),
    [anon_sym_lambda] = ACTIONS(26),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(330),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(330),
    [sym_identifier] = ACTIONS(50),
    [sym_func_identifier] = ACTIONS(50),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(50),
    [sym_string] = ACTIONS(50),
  },
  [91] = {
    [sym__term] = STATE(90),
    [sym_group] = STATE(26),
    [sym_function] = STATE(26),
    [sym_func_body] = STATE(106),
    [sym__terminal] = STATE(26),
    [sym_func_indicator] = STATE(27),
    [aux_sym_block_expression_repeat1] = STATE(90),
    [anon_sym_SEMI] = ACTIONS(326),
    [anon_sym_LPAREN] = ACTIONS(36),
    [anon_sym_LBRACK] = ACTIONS(326),
    [sym__newline] = ACTIONS(328),
    [sym_block_end] = ACTIONS(326),
    [anon_sym_EQ_EQ] = ACTIONS(326),
    [anon_sym_EQ1] = ACTIONS(326),
    [anon_sym_EQ2] = ACTIONS(326),
    [anon_sym_a_EQ] = ACTIONS(326),
    [anon_sym_EQa] = ACTIONS(326),
    [anon_sym_EQ_GT] = ACTIONS(326),
    [anon_sym_EQ3] = ACTIONS(326),
    [anon_sym_EQ4] = ACTIONS(326),
    [anon_sym_b_EQ] = ACTIONS(326),
    [anon_sym_EQb] = ACTIONS(326),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_1] = ACTIONS(26),
    [anon_sym_lambda] = ACTIONS(26),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(326),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(326),
    [sym_identifier] = ACTIONS(50),
    [sym_func_identifier] = ACTIONS(50),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(50),
    [sym_string] = ACTIONS(50),
  },
  [92] = {
    [anon_sym_LPAREN] = ACTIONS(304),
    [anon_sym_RPAREN] = ACTIONS(304),
    [anon_sym_LBRACK] = ACTIONS(304),
    [anon_sym_RBRACK] = ACTIONS(304),
    [anon_sym_BSLASH] = ACTIONS(304),
    [anon_sym_1] = ACTIONS(304),
    [anon_sym_lambda] = ACTIONS(302),
    [anon_sym_DASH_GT] = ACTIONS(304),
    [anon_sym_COLON_EQ] = ACTIONS(304),
    [anon_sym_SLASH] = ACTIONS(302),
    [anon_sym_PIPE] = ACTIONS(304),
    [anon_sym_LT_DASH] = ACTIONS(304),
    [sym_identifier] = ACTIONS(302),
    [sym_func_identifier] = ACTIONS(304),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(304),
    [sym_string] = ACTIONS(304),
  },
  [93] = {
    [sym__replacement_indicator] = STATE(107),
    [sym_replace_forwards] = STATE(107),
    [sym_replace_backwards] = STATE(107),
    [anon_sym_BSLASH] = ACTIONS(318),
    [anon_sym_DASH_GT] = ACTIONS(320),
    [anon_sym_COLON_EQ] = ACTIONS(320),
    [anon_sym_SLASH] = ACTIONS(322),
    [anon_sym_PIPE] = ACTIONS(320),
    [anon_sym_LT_DASH] = ACTIONS(318),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
  },
  [94] = {
    [anon_sym_LPAREN] = ACTIONS(328),
    [anon_sym_RPAREN] = ACTIONS(328),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_RBRACK] = ACTIONS(328),
    [anon_sym_BSLASH] = ACTIONS(328),
    [anon_sym_1] = ACTIONS(328),
    [anon_sym_lambda] = ACTIONS(326),
    [anon_sym_DASH_GT] = ACTIONS(328),
    [anon_sym_COLON_EQ] = ACTIONS(328),
    [anon_sym_SLASH] = ACTIONS(326),
    [anon_sym_PIPE] = ACTIONS(328),
    [anon_sym_LT_DASH] = ACTIONS(328),
    [sym_identifier] = ACTIONS(326),
    [sym_func_identifier] = ACTIONS(328),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(328),
    [sym_string] = ACTIONS(328),
  },
  [95] = {
    [sym__term] = STATE(108),
    [sym_group] = STATE(37),
    [sym_function] = STATE(37),
    [sym__terminal] = STATE(37),
    [sym_func_indicator] = STATE(38),
    [aux_sym_block_expression_repeat1] = STATE(108),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(332),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_1] = ACTIONS(24),
    [anon_sym_lambda] = ACTIONS(26),
    [sym_identifier] = ACTIONS(75),
    [sym_func_identifier] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(77),
    [sym_string] = ACTIONS(77),
  },
  [96] = {
    [sym__term] = STATE(95),
    [sym_group] = STATE(37),
    [sym_function] = STATE(37),
    [sym_func_body] = STATE(109),
    [sym__terminal] = STATE(37),
    [sym_func_indicator] = STATE(38),
    [aux_sym_block_expression_repeat1] = STATE(95),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(328),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_1] = ACTIONS(24),
    [anon_sym_lambda] = ACTIONS(26),
    [sym_identifier] = ACTIONS(75),
    [sym_func_identifier] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(77),
    [sym_string] = ACTIONS(77),
  },
  [97] = {
    [anon_sym_LPAREN] = ACTIONS(351),
    [anon_sym_BSLASH] = ACTIONS(351),
    [anon_sym_1] = ACTIONS(351),
    [anon_sym_lambda] = ACTIONS(353),
    [sym_identifier] = ACTIONS(353),
    [sym_func_identifier] = ACTIONS(351),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(351),
    [sym_string] = ACTIONS(351),
  },
  [98] = {
    [anon_sym_LPAREN] = ACTIONS(355),
    [anon_sym_BSLASH] = ACTIONS(355),
    [anon_sym_1] = ACTIONS(355),
    [anon_sym_lambda] = ACTIONS(357),
    [sym_identifier] = ACTIONS(357),
    [sym_func_identifier] = ACTIONS(355),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(355),
    [sym_string] = ACTIONS(355),
  },
  [99] = {
    [sym__term] = STATE(110),
    [sym_group] = STATE(37),
    [sym_function] = STATE(37),
    [sym__terminal] = STATE(37),
    [sym_func_indicator] = STATE(111),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_1] = ACTIONS(24),
    [anon_sym_lambda] = ACTIONS(26),
    [sym_identifier] = ACTIONS(75),
    [sym_func_identifier] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(77),
    [sym_string] = ACTIONS(77),
  },
  [100] = {
    [sym__term] = STATE(112),
    [sym_group] = STATE(37),
    [sym_function] = STATE(37),
    [sym_func_body] = STATE(94),
    [sym__terminal] = STATE(37),
    [sym_func_indicator] = STATE(78),
    [aux_sym_block_expression_repeat1] = STATE(112),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(207),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_1] = ACTIONS(24),
    [anon_sym_lambda] = ACTIONS(26),
    [anon_sym_DASH_GT] = ACTIONS(207),
    [anon_sym_COLON_EQ] = ACTIONS(207),
    [anon_sym_SLASH] = ACTIONS(205),
    [anon_sym_PIPE] = ACTIONS(207),
    [anon_sym_LT_DASH] = ACTIONS(207),
    [sym_identifier] = ACTIONS(75),
    [sym_func_identifier] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(77),
    [sym_string] = ACTIONS(77),
  },
  [101] = {
    [sym_func_sep] = STATE(113),
    [aux_sym_function_repeat1] = STATE(82),
    [anon_sym_DASH_GT] = ACTIONS(191),
    [anon_sym_DOT] = ACTIONS(191),
    [anon_sym_COLON] = ACTIONS(191),
    [sym_identifier] = ACTIONS(209),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
  },
  [102] = {
    [sym__term] = STATE(102),
    [sym_group] = STATE(12),
    [sym_function] = STATE(12),
    [sym__terminal] = STATE(12),
    [sym_func_indicator] = STATE(13),
    [aux_sym_block_expression_repeat1] = STATE(102),
    [anon_sym_SEMI] = ACTIONS(215),
    [anon_sym_LPAREN] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(215),
    [sym__newline] = ACTIONS(220),
    [anon_sym_BSLASH] = ACTIONS(222),
    [anon_sym_1] = ACTIONS(222),
    [anon_sym_lambda] = ACTIONS(222),
    [sym_identifier] = ACTIONS(225),
    [sym_func_identifier] = ACTIONS(225),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(225),
    [sym_string] = ACTIONS(225),
  },
  [103] = {
    [anon_sym_SEMI] = ACTIONS(359),
    [anon_sym_LPAREN] = ACTIONS(359),
    [anon_sym_LBRACK] = ACTIONS(359),
    [sym__newline] = ACTIONS(361),
    [anon_sym_BSLASH] = ACTIONS(359),
    [anon_sym_1] = ACTIONS(359),
    [anon_sym_lambda] = ACTIONS(359),
    [sym_identifier] = ACTIONS(359),
    [sym_func_identifier] = ACTIONS(359),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(359),
    [sym_string] = ACTIONS(359),
  },
  [104] = {
    [sym__term] = STATE(114),
    [sym_group] = STATE(37),
    [sym_function] = STATE(37),
    [sym__terminal] = STATE(37),
    [sym_func_indicator] = STATE(111),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_1] = ACTIONS(24),
    [anon_sym_lambda] = ACTIONS(26),
    [sym_identifier] = ACTIONS(75),
    [sym_func_identifier] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(77),
    [sym_string] = ACTIONS(77),
  },
  [105] = {
    [sym__term] = STATE(105),
    [sym_group] = STATE(26),
    [sym_function] = STATE(26),
    [sym__terminal] = STATE(26),
    [sym_func_indicator] = STATE(27),
    [aux_sym_block_expression_repeat1] = STATE(105),
    [anon_sym_SEMI] = ACTIONS(215),
    [anon_sym_LPAREN] = ACTIONS(276),
    [anon_sym_LBRACK] = ACTIONS(215),
    [sym__newline] = ACTIONS(220),
    [sym_block_end] = ACTIONS(215),
    [anon_sym_EQ_EQ] = ACTIONS(215),
    [anon_sym_EQ1] = ACTIONS(215),
    [anon_sym_EQ2] = ACTIONS(215),
    [anon_sym_a_EQ] = ACTIONS(215),
    [anon_sym_EQa] = ACTIONS(215),
    [anon_sym_EQ_GT] = ACTIONS(215),
    [anon_sym_EQ3] = ACTIONS(215),
    [anon_sym_EQ4] = ACTIONS(215),
    [anon_sym_b_EQ] = ACTIONS(215),
    [anon_sym_EQb] = ACTIONS(215),
    [anon_sym_BSLASH] = ACTIONS(222),
    [anon_sym_1] = ACTIONS(222),
    [anon_sym_lambda] = ACTIONS(222),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(215),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(215),
    [sym_identifier] = ACTIONS(279),
    [sym_func_identifier] = ACTIONS(279),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(279),
    [sym_string] = ACTIONS(279),
  },
  [106] = {
    [anon_sym_SEMI] = ACTIONS(359),
    [anon_sym_LPAREN] = ACTIONS(359),
    [anon_sym_LBRACK] = ACTIONS(359),
    [sym__newline] = ACTIONS(361),
    [sym_block_end] = ACTIONS(359),
    [anon_sym_EQ_EQ] = ACTIONS(359),
    [anon_sym_EQ1] = ACTIONS(359),
    [anon_sym_EQ2] = ACTIONS(359),
    [anon_sym_a_EQ] = ACTIONS(359),
    [anon_sym_EQa] = ACTIONS(359),
    [anon_sym_EQ_GT] = ACTIONS(359),
    [anon_sym_EQ3] = ACTIONS(359),
    [anon_sym_EQ4] = ACTIONS(359),
    [anon_sym_b_EQ] = ACTIONS(359),
    [anon_sym_EQb] = ACTIONS(359),
    [anon_sym_BSLASH] = ACTIONS(359),
    [anon_sym_1] = ACTIONS(359),
    [anon_sym_lambda] = ACTIONS(359),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(359),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(359),
    [sym_identifier] = ACTIONS(359),
    [sym_func_identifier] = ACTIONS(359),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(359),
    [sym_string] = ACTIONS(359),
  },
  [107] = {
    [sym__term] = STATE(115),
    [sym_group] = STATE(37),
    [sym_function] = STATE(37),
    [sym__terminal] = STATE(37),
    [sym_func_indicator] = STATE(111),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_1] = ACTIONS(24),
    [anon_sym_lambda] = ACTIONS(26),
    [sym_identifier] = ACTIONS(75),
    [sym_func_identifier] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(77),
    [sym_string] = ACTIONS(77),
  },
  [108] = {
    [sym__term] = STATE(108),
    [sym_group] = STATE(37),
    [sym_function] = STATE(37),
    [sym__terminal] = STATE(37),
    [sym_func_indicator] = STATE(38),
    [aux_sym_block_expression_repeat1] = STATE(108),
    [anon_sym_LPAREN] = ACTIONS(306),
    [anon_sym_RPAREN] = ACTIONS(220),
    [anon_sym_LBRACK] = ACTIONS(220),
    [anon_sym_BSLASH] = ACTIONS(309),
    [anon_sym_1] = ACTIONS(309),
    [anon_sym_lambda] = ACTIONS(222),
    [sym_identifier] = ACTIONS(312),
    [sym_func_identifier] = ACTIONS(315),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(315),
    [sym_string] = ACTIONS(315),
  },
  [109] = {
    [anon_sym_LPAREN] = ACTIONS(361),
    [anon_sym_RPAREN] = ACTIONS(361),
    [anon_sym_LBRACK] = ACTIONS(361),
    [anon_sym_RBRACK] = ACTIONS(361),
    [anon_sym_BSLASH] = ACTIONS(361),
    [anon_sym_1] = ACTIONS(361),
    [anon_sym_lambda] = ACTIONS(359),
    [anon_sym_DASH_GT] = ACTIONS(361),
    [anon_sym_COLON_EQ] = ACTIONS(361),
    [anon_sym_SLASH] = ACTIONS(359),
    [anon_sym_PIPE] = ACTIONS(361),
    [anon_sym_LT_DASH] = ACTIONS(361),
    [sym_identifier] = ACTIONS(359),
    [sym_func_identifier] = ACTIONS(361),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(361),
    [sym_string] = ACTIONS(361),
  },
  [110] = {
    [anon_sym_RBRACK] = ACTIONS(363),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
  },
  [111] = {
    [sym_func_sep] = STATE(117),
    [aux_sym_function_repeat1] = STATE(118),
    [anon_sym_DASH_GT] = ACTIONS(191),
    [anon_sym_DOT] = ACTIONS(191),
    [anon_sym_COLON] = ACTIONS(191),
    [sym_identifier] = ACTIONS(365),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
  },
  [112] = {
    [sym__term] = STATE(119),
    [sym_group] = STATE(37),
    [sym_function] = STATE(37),
    [sym__terminal] = STATE(37),
    [sym_func_indicator] = STATE(78),
    [aux_sym_block_expression_repeat1] = STATE(119),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_1] = ACTIONS(24),
    [anon_sym_lambda] = ACTIONS(26),
    [anon_sym_DASH_GT] = ACTIONS(332),
    [anon_sym_COLON_EQ] = ACTIONS(332),
    [anon_sym_SLASH] = ACTIONS(330),
    [anon_sym_PIPE] = ACTIONS(332),
    [anon_sym_LT_DASH] = ACTIONS(332),
    [sym_identifier] = ACTIONS(75),
    [sym_func_identifier] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(77),
    [sym_string] = ACTIONS(77),
  },
  [113] = {
    [sym__term] = STATE(112),
    [sym_group] = STATE(37),
    [sym_function] = STATE(37),
    [sym_func_body] = STATE(109),
    [sym__terminal] = STATE(37),
    [sym_func_indicator] = STATE(78),
    [aux_sym_block_expression_repeat1] = STATE(112),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_1] = ACTIONS(24),
    [anon_sym_lambda] = ACTIONS(26),
    [anon_sym_DASH_GT] = ACTIONS(328),
    [anon_sym_COLON_EQ] = ACTIONS(328),
    [anon_sym_SLASH] = ACTIONS(326),
    [anon_sym_PIPE] = ACTIONS(328),
    [anon_sym_LT_DASH] = ACTIONS(328),
    [sym_identifier] = ACTIONS(75),
    [sym_func_identifier] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(77),
    [sym_string] = ACTIONS(77),
  },
  [114] = {
    [anon_sym_RBRACK] = ACTIONS(367),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
  },
  [115] = {
    [anon_sym_RBRACK] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
  },
  [116] = {
    [anon_sym_SEMI] = ACTIONS(371),
    [anon_sym_LPAREN] = ACTIONS(371),
    [anon_sym_LBRACK] = ACTIONS(371),
    [sym__newline] = ACTIONS(373),
    [anon_sym_BSLASH] = ACTIONS(371),
    [anon_sym_1] = ACTIONS(371),
    [anon_sym_lambda] = ACTIONS(371),
    [sym_identifier] = ACTIONS(371),
    [sym_func_identifier] = ACTIONS(371),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(371),
    [sym_string] = ACTIONS(371),
  },
  [117] = {
    [sym__term] = STATE(122),
    [sym_group] = STATE(37),
    [sym_function] = STATE(37),
    [sym_func_body] = STATE(94),
    [sym__terminal] = STATE(37),
    [sym_func_indicator] = STATE(111),
    [aux_sym_block_expression_repeat1] = STATE(122),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(207),
    [anon_sym_RBRACK] = ACTIONS(207),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_1] = ACTIONS(24),
    [anon_sym_lambda] = ACTIONS(26),
    [sym_identifier] = ACTIONS(75),
    [sym_func_identifier] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(77),
    [sym_string] = ACTIONS(77),
  },
  [118] = {
    [sym_func_sep] = STATE(123),
    [aux_sym_function_repeat1] = STATE(82),
    [anon_sym_DASH_GT] = ACTIONS(191),
    [anon_sym_DOT] = ACTIONS(191),
    [anon_sym_COLON] = ACTIONS(191),
    [sym_identifier] = ACTIONS(209),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
  },
  [119] = {
    [sym__term] = STATE(119),
    [sym_group] = STATE(37),
    [sym_function] = STATE(37),
    [sym__terminal] = STATE(37),
    [sym_func_indicator] = STATE(78),
    [aux_sym_block_expression_repeat1] = STATE(119),
    [anon_sym_LPAREN] = ACTIONS(306),
    [anon_sym_LBRACK] = ACTIONS(220),
    [anon_sym_BSLASH] = ACTIONS(309),
    [anon_sym_1] = ACTIONS(309),
    [anon_sym_lambda] = ACTIONS(222),
    [anon_sym_DASH_GT] = ACTIONS(220),
    [anon_sym_COLON_EQ] = ACTIONS(220),
    [anon_sym_SLASH] = ACTIONS(215),
    [anon_sym_PIPE] = ACTIONS(220),
    [anon_sym_LT_DASH] = ACTIONS(220),
    [sym_identifier] = ACTIONS(312),
    [sym_func_identifier] = ACTIONS(315),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(315),
    [sym_string] = ACTIONS(315),
  },
  [120] = {
    [anon_sym_SEMI] = ACTIONS(371),
    [anon_sym_LPAREN] = ACTIONS(371),
    [anon_sym_LBRACK] = ACTIONS(371),
    [sym__newline] = ACTIONS(373),
    [sym_block_end] = ACTIONS(371),
    [anon_sym_EQ_EQ] = ACTIONS(371),
    [anon_sym_EQ1] = ACTIONS(371),
    [anon_sym_EQ2] = ACTIONS(371),
    [anon_sym_a_EQ] = ACTIONS(371),
    [anon_sym_EQa] = ACTIONS(371),
    [anon_sym_EQ_GT] = ACTIONS(371),
    [anon_sym_EQ3] = ACTIONS(371),
    [anon_sym_EQ4] = ACTIONS(371),
    [anon_sym_b_EQ] = ACTIONS(371),
    [anon_sym_EQb] = ACTIONS(371),
    [anon_sym_BSLASH] = ACTIONS(371),
    [anon_sym_1] = ACTIONS(371),
    [anon_sym_lambda] = ACTIONS(371),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(371),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(371),
    [sym_identifier] = ACTIONS(371),
    [sym_func_identifier] = ACTIONS(371),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(371),
    [sym_string] = ACTIONS(371),
  },
  [121] = {
    [anon_sym_LPAREN] = ACTIONS(373),
    [anon_sym_RPAREN] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(373),
    [anon_sym_RBRACK] = ACTIONS(373),
    [anon_sym_BSLASH] = ACTIONS(373),
    [anon_sym_1] = ACTIONS(373),
    [anon_sym_lambda] = ACTIONS(371),
    [anon_sym_DASH_GT] = ACTIONS(373),
    [anon_sym_COLON_EQ] = ACTIONS(373),
    [anon_sym_SLASH] = ACTIONS(371),
    [anon_sym_PIPE] = ACTIONS(373),
    [anon_sym_LT_DASH] = ACTIONS(373),
    [sym_identifier] = ACTIONS(371),
    [sym_func_identifier] = ACTIONS(373),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(373),
    [sym_string] = ACTIONS(373),
  },
  [122] = {
    [sym__term] = STATE(124),
    [sym_group] = STATE(37),
    [sym_function] = STATE(37),
    [sym__terminal] = STATE(37),
    [sym_func_indicator] = STATE(111),
    [aux_sym_block_expression_repeat1] = STATE(124),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_RBRACK] = ACTIONS(332),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_1] = ACTIONS(24),
    [anon_sym_lambda] = ACTIONS(26),
    [sym_identifier] = ACTIONS(75),
    [sym_func_identifier] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(77),
    [sym_string] = ACTIONS(77),
  },
  [123] = {
    [sym__term] = STATE(122),
    [sym_group] = STATE(37),
    [sym_function] = STATE(37),
    [sym_func_body] = STATE(109),
    [sym__terminal] = STATE(37),
    [sym_func_indicator] = STATE(111),
    [aux_sym_block_expression_repeat1] = STATE(122),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_RBRACK] = ACTIONS(328),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_1] = ACTIONS(24),
    [anon_sym_lambda] = ACTIONS(26),
    [sym_identifier] = ACTIONS(75),
    [sym_func_identifier] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(77),
    [sym_string] = ACTIONS(77),
  },
  [124] = {
    [sym__term] = STATE(124),
    [sym_group] = STATE(37),
    [sym_function] = STATE(37),
    [sym__terminal] = STATE(37),
    [sym_func_indicator] = STATE(111),
    [aux_sym_block_expression_repeat1] = STATE(124),
    [anon_sym_LPAREN] = ACTIONS(306),
    [anon_sym_LBRACK] = ACTIONS(220),
    [anon_sym_RBRACK] = ACTIONS(220),
    [anon_sym_BSLASH] = ACTIONS(309),
    [anon_sym_1] = ACTIONS(309),
    [anon_sym_lambda] = ACTIONS(222),
    [sym_identifier] = ACTIONS(312),
    [sym_func_identifier] = ACTIONS(315),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(315),
    [sym_string] = ACTIONS(315),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(2),
  [9] = {.count = 1, .reusable = true}, SHIFT(8),
  [11] = {.count = 1, .reusable = false}, SHIFT(3),
  [13] = {.count = 1, .reusable = false}, SHIFT(4),
  [15] = {.count = 1, .reusable = false}, SHIFT(5),
  [17] = {.count = 1, .reusable = false}, SHIFT(6),
  [19] = {.count = 2, .reusable = false}, SHIFT(8), SHIFT_EXTRA(),
  [22] = {.count = 1, .reusable = true}, SHIFT(9),
  [24] = {.count = 1, .reusable = true}, SHIFT(10),
  [26] = {.count = 1, .reusable = false}, SHIFT(10),
  [28] = {.count = 1, .reusable = false}, SHIFT(12),
  [30] = {.count = 1, .reusable = true}, SHIFT(12),
  [32] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [34] = {.count = 1, .reusable = false}, SHIFT(15),
  [36] = {.count = 1, .reusable = false}, SHIFT(16),
  [38] = {.count = 1, .reusable = true}, SHIFT(28),
  [40] = {.count = 1, .reusable = false}, SHIFT(17),
  [42] = {.count = 1, .reusable = false}, SHIFT(18),
  [44] = {.count = 1, .reusable = false}, SHIFT(19),
  [46] = {.count = 1, .reusable = false}, SHIFT(20),
  [48] = {.count = 1, .reusable = false}, SHIFT(21),
  [50] = {.count = 1, .reusable = false}, SHIFT(26),
  [52] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [54] = {.count = 1, .reusable = false}, SHIFT(30),
  [56] = {.count = 1, .reusable = false}, SHIFT(31),
  [58] = {.count = 1, .reusable = false}, SHIFT(32),
  [60] = {.count = 1, .reusable = true}, SHIFT(33),
  [62] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [64] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [66] = {.count = 1, .reusable = true}, SHIFT(34),
  [68] = {.count = 2, .reusable = false}, SHIFT(34), SHIFT_EXTRA(),
  [71] = {.count = 1, .reusable = true}, SHIFT(35),
  [73] = {.count = 1, .reusable = true}, SHIFT(36),
  [75] = {.count = 1, .reusable = false}, SHIFT(37),
  [77] = {.count = 1, .reusable = true}, SHIFT(37),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_func_indicator, 1),
  [81] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [83] = {.count = 1, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2),
  [85] = {.count = 1, .reusable = false}, REDUCE(sym__term, 1),
  [87] = {.count = 1, .reusable = false}, SHIFT(40),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym__term, 1),
  [91] = {.count = 1, .reusable = true}, SHIFT(42),
  [93] = {.count = 1, .reusable = true}, SHIFT(44),
  [95] = {.count = 1, .reusable = false}, SHIFT(45),
  [97] = {.count = 1, .reusable = false}, SHIFT(9),
  [99] = {.count = 1, .reusable = true}, SHIFT(45),
  [101] = {.count = 1, .reusable = true}, SHIFT(47),
  [103] = {.count = 1, .reusable = true}, SHIFT(48),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym_block, 2),
  [107] = {.count = 1, .reusable = false}, REDUCE(sym_block, 2),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_alpha_convert, 1),
  [111] = {.count = 1, .reusable = false}, REDUCE(sym_alpha_convert, 1),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_beta_reduce, 1),
  [115] = {.count = 1, .reusable = false}, REDUCE(sym_beta_reduce, 1),
  [117] = {.count = 1, .reusable = false}, SHIFT(50),
  [119] = {.count = 1, .reusable = false}, SHIFT(51),
  [121] = {.count = 1, .reusable = false}, SHIFT(52),
  [123] = {.count = 1, .reusable = false}, SHIFT(53),
  [125] = {.count = 1, .reusable = true}, SHIFT(53),
  [127] = {.count = 1, .reusable = false}, SHIFT(55),
  [129] = {.count = 1, .reusable = false}, REDUCE(aux_sym__block_contents_repeat1, 1, .alias_sequence_id = 1),
  [131] = {.count = 1, .reusable = true}, REDUCE(aux_sym__block_contents_repeat1, 1, .alias_sequence_id = 1),
  [133] = {.count = 1, .reusable = true}, SHIFT(16),
  [135] = {.count = 1, .reusable = true}, SHIFT(26),
  [137] = {.count = 1, .reusable = false}, SHIFT(57),
  [139] = {.count = 1, .reusable = true}, SHIFT(59),
  [141] = {.count = 1, .reusable = true}, SHIFT(61),
  [143] = {.count = 1, .reusable = true}, SHIFT(62),
  [145] = {.count = 1, .reusable = false}, REDUCE(sym__block_contents, 1),
  [147] = {.count = 1, .reusable = false}, REDUCE(sym_block_expression, 1),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_block_expression, 1),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_annotation, 2),
  [153] = {.count = 1, .reusable = false}, REDUCE(sym_annotation, 2),
  [155] = {.count = 1, .reusable = false}, SHIFT(64),
  [157] = {.count = 1, .reusable = false}, SHIFT(65),
  [159] = {.count = 1, .reusable = false}, SHIFT(66),
  [161] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [164] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(34),
  [167] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [170] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [173] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [176] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [179] = {.count = 3, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(34), SHIFT_EXTRA(),
  [183] = {.count = 1, .reusable = true}, SHIFT(68),
  [185] = {.count = 1, .reusable = false}, REDUCE(sym_group, 2),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_group, 2),
  [189] = {.count = 1, .reusable = true}, SHIFT(70),
  [191] = {.count = 1, .reusable = true}, SHIFT(72),
  [193] = {.count = 1, .reusable = true}, SHIFT(74),
  [195] = {.count = 1, .reusable = true}, SHIFT(75),
  [197] = {.count = 1, .reusable = false}, REDUCE(sym__term, 2),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym__term, 2),
  [201] = {.count = 1, .reusable = false}, REDUCE(sym_func_sep, 1),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym_func_sep, 1),
  [205] = {.count = 1, .reusable = false}, REDUCE(sym_function, 2),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym_function, 2),
  [209] = {.count = 1, .reusable = true}, SHIFT(82),
  [211] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 2),
  [213] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 2),
  [215] = {.count = 1, .reusable = false}, REDUCE(aux_sym_block_expression_repeat1, 2),
  [217] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(9),
  [220] = {.count = 1, .reusable = true}, REDUCE(aux_sym_block_expression_repeat1, 2),
  [222] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(10),
  [225] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(12),
  [228] = {.count = 1, .reusable = true}, SHIFT(83),
  [230] = {.count = 1, .reusable = true}, SHIFT(84),
  [232] = {.count = 1, .reusable = false}, SHIFT(85),
  [234] = {.count = 1, .reusable = true}, REDUCE(sym_block, 3),
  [236] = {.count = 1, .reusable = false}, REDUCE(sym_block, 3),
  [238] = {.count = 1, .reusable = true}, SHIFT(86),
  [240] = {.count = 1, .reusable = false}, REDUCE(aux_sym__block_contents_repeat1, 2, .alias_sequence_id = 1),
  [242] = {.count = 1, .reusable = true}, REDUCE(aux_sym__block_contents_repeat1, 2, .alias_sequence_id = 1),
  [244] = {.count = 1, .reusable = false}, SHIFT(87),
  [246] = {.count = 1, .reusable = false}, REDUCE(aux_sym__block_contents_repeat1, 2, .alias_sequence_id = 2),
  [248] = {.count = 1, .reusable = true}, REDUCE(aux_sym__block_contents_repeat1, 2, .alias_sequence_id = 2),
  [250] = {.count = 2, .reusable = false}, REDUCE(aux_sym__block_contents_repeat1, 2), SHIFT_REPEAT(16),
  [253] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_contents_repeat1, 2), SHIFT_REPEAT(62),
  [256] = {.count = 1, .reusable = false}, REDUCE(aux_sym__block_contents_repeat1, 2),
  [258] = {.count = 2, .reusable = false}, REDUCE(aux_sym__block_contents_repeat1, 2), SHIFT_REPEAT(18),
  [261] = {.count = 2, .reusable = false}, REDUCE(aux_sym__block_contents_repeat1, 2), SHIFT_REPEAT(19),
  [264] = {.count = 2, .reusable = false}, REDUCE(aux_sym__block_contents_repeat1, 2), SHIFT_REPEAT(10),
  [267] = {.count = 2, .reusable = false}, REDUCE(aux_sym__block_contents_repeat1, 2), SHIFT_REPEAT(20),
  [270] = {.count = 2, .reusable = false}, REDUCE(aux_sym__block_contents_repeat1, 2), SHIFT_REPEAT(21),
  [273] = {.count = 2, .reusable = false}, REDUCE(aux_sym__block_contents_repeat1, 2), SHIFT_REPEAT(26),
  [276] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(16),
  [279] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(26),
  [282] = {.count = 1, .reusable = true}, REDUCE(sym_annotation, 3),
  [284] = {.count = 1, .reusable = false}, REDUCE(sym_annotation, 3),
  [286] = {.count = 1, .reusable = false}, REDUCE(aux_sym_annotation_repeat1, 2),
  [288] = {.count = 2, .reusable = false}, REDUCE(aux_sym_annotation_repeat1, 2), SHIFT_REPEAT(65),
  [291] = {.count = 1, .reusable = false}, REDUCE(aux_sym_annotation_repeat2, 2),
  [293] = {.count = 2, .reusable = false}, REDUCE(aux_sym_annotation_repeat2, 2), SHIFT_REPEAT(66),
  [296] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 3),
  [298] = {.count = 1, .reusable = false}, REDUCE(sym_function_definition, 3),
  [300] = {.count = 1, .reusable = true}, SHIFT(92),
  [302] = {.count = 1, .reusable = false}, REDUCE(sym_group, 3),
  [304] = {.count = 1, .reusable = true}, REDUCE(sym_group, 3),
  [306] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(35),
  [309] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(10),
  [312] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(37),
  [315] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(37),
  [318] = {.count = 1, .reusable = true}, SHIFT(97),
  [320] = {.count = 1, .reusable = true}, SHIFT(98),
  [322] = {.count = 1, .reusable = false}, SHIFT(98),
  [324] = {.count = 1, .reusable = true}, SHIFT(101),
  [326] = {.count = 1, .reusable = false}, REDUCE(sym_function, 3),
  [328] = {.count = 1, .reusable = true}, REDUCE(sym_function, 3),
  [330] = {.count = 1, .reusable = false}, REDUCE(sym_func_body, 1),
  [332] = {.count = 1, .reusable = true}, REDUCE(sym_func_body, 1),
  [334] = {.count = 1, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2),
  [336] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(82),
  [339] = {.count = 1, .reusable = false}, REDUCE(sym_block_tag, 3),
  [341] = {.count = 1, .reusable = true}, REDUCE(sym_block_tag, 3),
  [343] = {.count = 1, .reusable = true}, REDUCE(sym_block, 4),
  [345] = {.count = 1, .reusable = false}, REDUCE(sym_block, 4),
  [347] = {.count = 1, .reusable = false}, REDUCE(aux_sym__block_contents_repeat1, 3, .alias_sequence_id = 2),
  [349] = {.count = 1, .reusable = true}, REDUCE(aux_sym__block_contents_repeat1, 3, .alias_sequence_id = 2),
  [351] = {.count = 1, .reusable = true}, REDUCE(sym_replace_backwards, 1),
  [353] = {.count = 1, .reusable = false}, REDUCE(sym_replace_backwards, 1),
  [355] = {.count = 1, .reusable = true}, REDUCE(sym_replace_forwards, 1),
  [357] = {.count = 1, .reusable = false}, REDUCE(sym_replace_forwards, 1),
  [359] = {.count = 1, .reusable = false}, REDUCE(sym_function, 4),
  [361] = {.count = 1, .reusable = true}, REDUCE(sym_function, 4),
  [363] = {.count = 1, .reusable = true}, SHIFT(116),
  [365] = {.count = 1, .reusable = true}, SHIFT(118),
  [367] = {.count = 1, .reusable = true}, SHIFT(120),
  [369] = {.count = 1, .reusable = true}, SHIFT(121),
  [371] = {.count = 1, .reusable = false}, REDUCE(sym_beta_replacement, 5),
  [373] = {.count = 1, .reusable = true}, REDUCE(sym_beta_replacement, 5),
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
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
