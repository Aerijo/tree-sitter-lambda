#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 8
#define STATE_COUNT 125
#define SYMBOL_COUNT 74
#define ALIAS_COUNT 2
#define TOKEN_COUNT 47
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6

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
  sym__block_contents = 50,
  sym_block_expression = 51,
  sym__relation_operator = 52,
  sym_expression = 53,
  sym__term = 54,
  sym_group = 55,
  sym_function = 56,
  sym_func_body = 57,
  sym_beta_replacement = 58,
  sym__replacement_indicator = 59,
  sym__terminal = 60,
  sym_alpha_convert = 61,
  sym_beta_reduce = 62,
  sym_func_indicator = 63,
  sym_func_sep = 64,
  sym_annotation = 65,
  sym_replace_forwards = 66,
  sym_replace_backwards = 67,
  aux_sym_program_repeat1 = 68,
  aux_sym__block_contents_repeat1 = 69,
  aux_sym_block_expression_repeat1 = 70,
  aux_sym_function_repeat1 = 71,
  aux_sym_annotation_repeat1 = 72,
  aux_sym_annotation_repeat2 = 73,
  anon_alias_sym_expression = 74,
  anon_alias_sym_tag = 75,
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
  [anon_alias_sym_tag] = "tag",
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
  [anon_alias_sym_tag] = {
    .visible = true,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[4][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = anon_alias_sym_expression,
  },
  [2] = {
    [1] = anon_alias_sym_expression,
  },
  [3] = {
    [2] = anon_alias_sym_tag,
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
  [22] = {.lex_state = 103},
  [23] = {.lex_state = 104},
  [24] = {.lex_state = 76},
  [25] = {.lex_state = 104},
  [26] = {.lex_state = 101},
  [27] = {.lex_state = 77},
  [28] = {.lex_state = 104},
  [29] = {.lex_state = 68},
  [30] = {.lex_state = 86},
  [31] = {.lex_state = 92},
  [32] = {.lex_state = 76},
  [33] = {.lex_state = 68},
  [34] = {.lex_state = 76},
  [35] = {.lex_state = 102},
  [36] = {.lex_state = 105},
  [37] = {.lex_state = 101},
  [38] = {.lex_state = 76},
  [39] = {.lex_state = 76},
  [40] = {.lex_state = 102},
  [41] = {.lex_state = 102},
  [42] = {.lex_state = 102},
  [43] = {.lex_state = 101},
  [44] = {.lex_state = 68},
  [45] = {.lex_state = 102},
  [46] = {.lex_state = 109},
  [47] = {.lex_state = 104},
  [48] = {.lex_state = 76},
  [49] = {.lex_state = 77},
  [50] = {.lex_state = 86},
  [51] = {.lex_state = 92},
  [52] = {.lex_state = 68},
  [53] = {.lex_state = 77},
  [54] = {.lex_state = 104},
  [55] = {.lex_state = 76},
  [56] = {.lex_state = 104},
  [57] = {.lex_state = 104},
  [58] = {.lex_state = 104},
  [59] = {.lex_state = 101},
  [60] = {.lex_state = 77},
  [61] = {.lex_state = 104},
  [62] = {.lex_state = 68},
  [63] = {.lex_state = 86},
  [64] = {.lex_state = 92},
  [65] = {.lex_state = 68},
  [66] = {.lex_state = 105},
  [67] = {.lex_state = 76},
  [68] = {.lex_state = 76},
  [69] = {.lex_state = 105},
  [70] = {.lex_state = 105},
  [71] = {.lex_state = 76},
  [72] = {.lex_state = 101},
  [73] = {.lex_state = 102},
  [74] = {.lex_state = 76},
  [75] = {.lex_state = 110},
  [76] = {.lex_state = 101},
  [77] = {.lex_state = 102},
  [78] = {.lex_state = 102},
  [79] = {.lex_state = 102},
  [80] = {.lex_state = 101},
  [81] = {.lex_state = 77},
  [82] = {.lex_state = 104},
  [83] = {.lex_state = 77},
  [84] = {.lex_state = 77},
  [85] = {.lex_state = 110},
  [86] = {.lex_state = 104},
  [87] = {.lex_state = 104},
  [88] = {.lex_state = 104},
  [89] = {.lex_state = 105},
  [90] = {.lex_state = 110},
  [91] = {.lex_state = 105},
  [92] = {.lex_state = 76},
  [93] = {.lex_state = 76},
  [94] = {.lex_state = 76},
  [95] = {.lex_state = 76},
  [96] = {.lex_state = 76},
  [97] = {.lex_state = 110},
  [98] = {.lex_state = 101},
  [99] = {.lex_state = 102},
  [100] = {.lex_state = 102},
  [101] = {.lex_state = 68},
  [102] = {.lex_state = 103},
  [103] = {.lex_state = 76},
  [104] = {.lex_state = 104},
  [105] = {.lex_state = 104},
  [106] = {.lex_state = 76},
  [107] = {.lex_state = 76},
  [108] = {.lex_state = 105},
  [109] = {.lex_state = 111},
  [110] = {.lex_state = 101},
  [111] = {.lex_state = 110},
  [112] = {.lex_state = 110},
  [113] = {.lex_state = 68},
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
    [sym__block_contents] = STATE(22),
    [sym_block_expression] = STATE(23),
    [sym__relation_operator] = STATE(24),
    [sym__term] = STATE(28),
    [sym_group] = STATE(25),
    [sym_function] = STATE(25),
    [sym__terminal] = STATE(25),
    [sym_alpha_convert] = STATE(24),
    [sym_beta_reduce] = STATE(24),
    [sym_func_indicator] = STATE(26),
    [sym_annotation] = STATE(27),
    [aux_sym__block_contents_repeat1] = STATE(27),
    [aux_sym_block_expression_repeat1] = STATE(28),
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
    [aux_sym_annotation_repeat1] = STATE(30),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(54),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_DQUOTE_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(56),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
  },
  [5] = {
    [aux_sym_annotation_repeat2] = STATE(31),
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
    [sym_function_definition] = STATE(33),
    [sym_block] = STATE(33),
    [sym_annotation] = STATE(33),
    [aux_sym_program_repeat1] = STATE(33),
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
    [sym__term] = STATE(38),
    [sym_group] = STATE(36),
    [sym_function] = STATE(36),
    [sym__terminal] = STATE(36),
    [sym_func_indicator] = STATE(37),
    [aux_sym_block_expression_repeat1] = STATE(38),
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
    [sym_beta_replacement] = STATE(40),
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
    [sym_func_sep] = STATE(42),
    [aux_sym_function_repeat1] = STATE(43),
    [anon_sym_DASH_GT] = ACTIONS(91),
    [anon_sym_DOT] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(91),
    [sym_identifier] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
  },
  [14] = {
    [sym__term] = STATE(45),
    [sym_group] = STATE(12),
    [sym_function] = STATE(12),
    [sym__terminal] = STATE(12),
    [sym_func_indicator] = STATE(13),
    [aux_sym_block_expression_repeat1] = STATE(45),
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
    [sym__term] = STATE(48),
    [sym_group] = STATE(36),
    [sym_function] = STATE(36),
    [sym__terminal] = STATE(36),
    [sym_func_indicator] = STATE(37),
    [aux_sym_block_expression_repeat1] = STATE(48),
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
    [aux_sym_annotation_repeat1] = STATE(50),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(117),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(119),
    [aux_sym_SLASH_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(119),
    [aux_sym_SLASH_DQUOTE_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(119),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
  },
  [21] = {
    [aux_sym_annotation_repeat2] = STATE(51),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(117),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(121),
    [aux_sym_SLASH_SQUOTE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(121),
    [aux_sym_SLASH_SQUOTE_SQUOTE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(121),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
  },
  [22] = {
    [sym_block_end] = ACTIONS(123),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
  },
  [23] = {
    [anon_sym_SEMI] = ACTIONS(125),
    [anon_sym_LPAREN] = ACTIONS(127),
    [sym__newline] = ACTIONS(129),
    [sym_block_end] = ACTIONS(127),
    [anon_sym_EQ_EQ] = ACTIONS(127),
    [anon_sym_EQ1] = ACTIONS(127),
    [anon_sym_EQ2] = ACTIONS(127),
    [anon_sym_a_EQ] = ACTIONS(127),
    [anon_sym_EQa] = ACTIONS(127),
    [anon_sym_EQ_GT] = ACTIONS(127),
    [anon_sym_EQ3] = ACTIONS(127),
    [anon_sym_EQ4] = ACTIONS(127),
    [anon_sym_b_EQ] = ACTIONS(127),
    [anon_sym_EQb] = ACTIONS(127),
    [anon_sym_BSLASH] = ACTIONS(127),
    [anon_sym_1] = ACTIONS(127),
    [anon_sym_lambda] = ACTIONS(127),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(127),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(127),
    [sym_identifier] = ACTIONS(127),
    [sym_func_identifier] = ACTIONS(127),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(127),
    [sym_string] = ACTIONS(127),
  },
  [24] = {
    [sym_block_expression] = STATE(54),
    [sym__term] = STATE(28),
    [sym_group] = STATE(25),
    [sym_function] = STATE(25),
    [sym__terminal] = STATE(25),
    [sym_func_indicator] = STATE(26),
    [aux_sym_block_expression_repeat1] = STATE(28),
    [anon_sym_LPAREN] = ACTIONS(131),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_1] = ACTIONS(24),
    [anon_sym_lambda] = ACTIONS(26),
    [sym_identifier] = ACTIONS(50),
    [sym_func_identifier] = ACTIONS(133),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(133),
    [sym_string] = ACTIONS(133),
  },
  [25] = {
    [sym_beta_replacement] = STATE(56),
    [anon_sym_SEMI] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(135),
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
  [26] = {
    [sym_func_sep] = STATE(58),
    [aux_sym_function_repeat1] = STATE(59),
    [anon_sym_DASH_GT] = ACTIONS(137),
    [anon_sym_DOT] = ACTIONS(137),
    [anon_sym_COLON] = ACTIONS(137),
    [sym_identifier] = ACTIONS(139),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
  },
  [27] = {
    [sym_block_expression] = STATE(23),
    [sym__relation_operator] = STATE(24),
    [sym__term] = STATE(28),
    [sym_group] = STATE(25),
    [sym_function] = STATE(25),
    [sym__terminal] = STATE(25),
    [sym_alpha_convert] = STATE(24),
    [sym_beta_reduce] = STATE(24),
    [sym_func_indicator] = STATE(26),
    [sym_annotation] = STATE(60),
    [aux_sym__block_contents_repeat1] = STATE(60),
    [aux_sym_block_expression_repeat1] = STATE(28),
    [anon_sym_LPAREN] = ACTIONS(36),
    [sym__newline] = ACTIONS(141),
    [sym_block_end] = ACTIONS(143),
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
  [28] = {
    [sym__term] = STATE(61),
    [sym_group] = STATE(25),
    [sym_function] = STATE(25),
    [sym__terminal] = STATE(25),
    [sym_func_indicator] = STATE(26),
    [aux_sym_block_expression_repeat1] = STATE(61),
    [anon_sym_SEMI] = ACTIONS(145),
    [anon_sym_LPAREN] = ACTIONS(36),
    [sym__newline] = ACTIONS(147),
    [sym_block_end] = ACTIONS(145),
    [anon_sym_EQ_EQ] = ACTIONS(145),
    [anon_sym_EQ1] = ACTIONS(145),
    [anon_sym_EQ2] = ACTIONS(145),
    [anon_sym_a_EQ] = ACTIONS(145),
    [anon_sym_EQa] = ACTIONS(145),
    [anon_sym_EQ_GT] = ACTIONS(145),
    [anon_sym_EQ3] = ACTIONS(145),
    [anon_sym_EQ4] = ACTIONS(145),
    [anon_sym_b_EQ] = ACTIONS(145),
    [anon_sym_EQb] = ACTIONS(145),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_1] = ACTIONS(26),
    [anon_sym_lambda] = ACTIONS(26),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(145),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(145),
    [sym_identifier] = ACTIONS(50),
    [sym_func_identifier] = ACTIONS(50),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(50),
    [sym_string] = ACTIONS(50),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(149),
    [anon_sym_GT] = ACTIONS(151),
    [sym__newline] = ACTIONS(149),
    [sym_block_start] = ACTIONS(151),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(151),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(151),
    [sym_func_identifier] = ACTIONS(151),
    [sym_line_comment] = ACTIONS(151),
    [sym_block_comment] = ACTIONS(151),
  },
  [30] = {
    [aux_sym_annotation_repeat1] = STATE(63),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(153),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(155),
    [aux_sym_SLASH_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(155),
    [aux_sym_SLASH_DQUOTE_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(155),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
  },
  [31] = {
    [aux_sym_annotation_repeat2] = STATE(64),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(153),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_SQUOTE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_SQUOTE_SQUOTE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(157),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
  },
  [32] = {
    [sym_expression] = STATE(65),
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
  [33] = {
    [sym_function_definition] = STATE(33),
    [sym_block] = STATE(33),
    [sym_annotation] = STATE(33),
    [aux_sym_program_repeat1] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(81),
    [anon_sym_GT] = ACTIONS(159),
    [sym__newline] = ACTIONS(162),
    [sym_block_start] = ACTIONS(165),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(168),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(171),
    [sym_func_identifier] = ACTIONS(174),
    [sym_line_comment] = ACTIONS(177),
    [sym_block_comment] = ACTIONS(177),
  },
  [34] = {
    [sym__term] = STATE(67),
    [sym_group] = STATE(36),
    [sym_function] = STATE(36),
    [sym__terminal] = STATE(36),
    [sym_func_indicator] = STATE(37),
    [aux_sym_block_expression_repeat1] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(181),
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
  [35] = {
    [anon_sym_SEMI] = ACTIONS(183),
    [anon_sym_LPAREN] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(183),
    [sym__newline] = ACTIONS(185),
    [anon_sym_BSLASH] = ACTIONS(183),
    [anon_sym_1] = ACTIONS(183),
    [anon_sym_lambda] = ACTIONS(183),
    [sym_identifier] = ACTIONS(183),
    [sym_func_identifier] = ACTIONS(183),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(183),
    [sym_string] = ACTIONS(183),
  },
  [36] = {
    [sym_beta_replacement] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(187),
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
  [37] = {
    [sym_func_sep] = STATE(71),
    [aux_sym_function_repeat1] = STATE(72),
    [anon_sym_DASH_GT] = ACTIONS(189),
    [anon_sym_DOT] = ACTIONS(189),
    [anon_sym_COLON] = ACTIONS(189),
    [sym_identifier] = ACTIONS(191),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
  },
  [38] = {
    [sym__term] = STATE(74),
    [sym_group] = STATE(36),
    [sym_function] = STATE(36),
    [sym__terminal] = STATE(36),
    [sym_func_indicator] = STATE(37),
    [aux_sym_block_expression_repeat1] = STATE(74),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(193),
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
  [39] = {
    [sym__term] = STATE(75),
    [sym_group] = STATE(36),
    [sym_function] = STATE(36),
    [sym__terminal] = STATE(36),
    [sym_func_indicator] = STATE(76),
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
  [40] = {
    [anon_sym_SEMI] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(195),
    [anon_sym_LBRACK] = ACTIONS(195),
    [sym__newline] = ACTIONS(197),
    [anon_sym_BSLASH] = ACTIONS(195),
    [anon_sym_1] = ACTIONS(195),
    [anon_sym_lambda] = ACTIONS(195),
    [sym_identifier] = ACTIONS(195),
    [sym_func_identifier] = ACTIONS(195),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(195),
    [sym_string] = ACTIONS(195),
  },
  [41] = {
    [anon_sym_SEMI] = ACTIONS(199),
    [anon_sym_LPAREN] = ACTIONS(199),
    [anon_sym_LBRACK] = ACTIONS(199),
    [sym__newline] = ACTIONS(201),
    [anon_sym_BSLASH] = ACTIONS(199),
    [anon_sym_1] = ACTIONS(199),
    [anon_sym_lambda] = ACTIONS(199),
    [sym_identifier] = ACTIONS(199),
    [sym_func_identifier] = ACTIONS(199),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(199),
    [sym_string] = ACTIONS(199),
  },
  [42] = {
    [sym__term] = STATE(78),
    [sym_group] = STATE(12),
    [sym_function] = STATE(12),
    [sym_func_body] = STATE(77),
    [sym__terminal] = STATE(12),
    [sym_func_indicator] = STATE(13),
    [aux_sym_block_expression_repeat1] = STATE(78),
    [anon_sym_SEMI] = ACTIONS(203),
    [anon_sym_LPAREN] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(203),
    [sym__newline] = ACTIONS(205),
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
  [43] = {
    [sym_func_sep] = STATE(79),
    [aux_sym_function_repeat1] = STATE(80),
    [anon_sym_DASH_GT] = ACTIONS(91),
    [anon_sym_DOT] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(91),
    [sym_identifier] = ACTIONS(207),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(211),
    [sym__newline] = ACTIONS(209),
    [sym_block_start] = ACTIONS(211),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(211),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(211),
    [sym_func_identifier] = ACTIONS(211),
    [sym_line_comment] = ACTIONS(211),
    [sym_block_comment] = ACTIONS(211),
  },
  [45] = {
    [sym__term] = STATE(45),
    [sym_group] = STATE(12),
    [sym_function] = STATE(12),
    [sym__terminal] = STATE(12),
    [sym_func_indicator] = STATE(13),
    [aux_sym_block_expression_repeat1] = STATE(45),
    [anon_sym_SEMI] = ACTIONS(213),
    [anon_sym_LPAREN] = ACTIONS(215),
    [sym__newline] = ACTIONS(218),
    [anon_sym_BSLASH] = ACTIONS(220),
    [anon_sym_1] = ACTIONS(220),
    [anon_sym_lambda] = ACTIONS(220),
    [sym_identifier] = ACTIONS(223),
    [sym_func_identifier] = ACTIONS(223),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(223),
    [sym_string] = ACTIONS(223),
  },
  [46] = {
    [anon_sym_RBRACE] = ACTIONS(226),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
  },
  [47] = {
    [anon_sym_SEMI] = ACTIONS(183),
    [anon_sym_LPAREN] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(183),
    [sym__newline] = ACTIONS(185),
    [sym_block_end] = ACTIONS(183),
    [anon_sym_EQ_EQ] = ACTIONS(183),
    [anon_sym_EQ1] = ACTIONS(183),
    [anon_sym_EQ2] = ACTIONS(183),
    [anon_sym_a_EQ] = ACTIONS(183),
    [anon_sym_EQa] = ACTIONS(183),
    [anon_sym_EQ_GT] = ACTIONS(183),
    [anon_sym_EQ3] = ACTIONS(183),
    [anon_sym_EQ4] = ACTIONS(183),
    [anon_sym_b_EQ] = ACTIONS(183),
    [anon_sym_EQb] = ACTIONS(183),
    [anon_sym_BSLASH] = ACTIONS(183),
    [anon_sym_1] = ACTIONS(183),
    [anon_sym_lambda] = ACTIONS(183),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(183),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(183),
    [sym_identifier] = ACTIONS(183),
    [sym_func_identifier] = ACTIONS(183),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(183),
    [sym_string] = ACTIONS(183),
  },
  [48] = {
    [sym__term] = STATE(74),
    [sym_group] = STATE(36),
    [sym_function] = STATE(36),
    [sym__terminal] = STATE(36),
    [sym_func_indicator] = STATE(37),
    [aux_sym_block_expression_repeat1] = STATE(74),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(228),
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
  [49] = {
    [anon_sym_LPAREN] = ACTIONS(151),
    [sym__newline] = ACTIONS(149),
    [sym_block_end] = ACTIONS(151),
    [anon_sym_EQ_EQ] = ACTIONS(151),
    [anon_sym_EQ1] = ACTIONS(151),
    [anon_sym_EQ2] = ACTIONS(151),
    [anon_sym_a_EQ] = ACTIONS(151),
    [anon_sym_EQa] = ACTIONS(151),
    [anon_sym_EQ_GT] = ACTIONS(151),
    [anon_sym_EQ3] = ACTIONS(151),
    [anon_sym_EQ4] = ACTIONS(151),
    [anon_sym_b_EQ] = ACTIONS(151),
    [anon_sym_EQb] = ACTIONS(151),
    [anon_sym_BSLASH] = ACTIONS(151),
    [anon_sym_1] = ACTIONS(151),
    [anon_sym_lambda] = ACTIONS(151),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(151),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(151),
    [sym_identifier] = ACTIONS(151),
    [sym_func_identifier] = ACTIONS(151),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(151),
    [sym_string] = ACTIONS(151),
  },
  [50] = {
    [aux_sym_annotation_repeat1] = STATE(63),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(230),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(155),
    [aux_sym_SLASH_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(155),
    [aux_sym_SLASH_DQUOTE_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(155),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
  },
  [51] = {
    [aux_sym_annotation_repeat2] = STATE(64),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(230),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_SQUOTE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_SQUOTE_SQUOTE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(157),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(232),
    [anon_sym_GT] = ACTIONS(234),
    [sym__newline] = ACTIONS(232),
    [sym_block_start] = ACTIONS(234),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(234),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(234),
    [sym_func_identifier] = ACTIONS(234),
    [sym_line_comment] = ACTIONS(234),
    [sym_block_comment] = ACTIONS(234),
  },
  [53] = {
    [anon_sym_LPAREN] = ACTIONS(236),
    [sym__newline] = ACTIONS(238),
    [sym_block_end] = ACTIONS(236),
    [anon_sym_EQ_EQ] = ACTIONS(236),
    [anon_sym_EQ1] = ACTIONS(236),
    [anon_sym_EQ2] = ACTIONS(236),
    [anon_sym_a_EQ] = ACTIONS(236),
    [anon_sym_EQa] = ACTIONS(236),
    [anon_sym_EQ_GT] = ACTIONS(236),
    [anon_sym_EQ3] = ACTIONS(236),
    [anon_sym_EQ4] = ACTIONS(236),
    [anon_sym_b_EQ] = ACTIONS(236),
    [anon_sym_EQb] = ACTIONS(236),
    [anon_sym_BSLASH] = ACTIONS(236),
    [anon_sym_1] = ACTIONS(236),
    [anon_sym_lambda] = ACTIONS(236),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(236),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(236),
    [sym_identifier] = ACTIONS(236),
    [sym_func_identifier] = ACTIONS(236),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(236),
    [sym_string] = ACTIONS(236),
  },
  [54] = {
    [anon_sym_SEMI] = ACTIONS(240),
    [anon_sym_LPAREN] = ACTIONS(242),
    [sym__newline] = ACTIONS(244),
    [sym_block_end] = ACTIONS(242),
    [anon_sym_EQ_EQ] = ACTIONS(242),
    [anon_sym_EQ1] = ACTIONS(242),
    [anon_sym_EQ2] = ACTIONS(242),
    [anon_sym_a_EQ] = ACTIONS(242),
    [anon_sym_EQa] = ACTIONS(242),
    [anon_sym_EQ_GT] = ACTIONS(242),
    [anon_sym_EQ3] = ACTIONS(242),
    [anon_sym_EQ4] = ACTIONS(242),
    [anon_sym_b_EQ] = ACTIONS(242),
    [anon_sym_EQb] = ACTIONS(242),
    [anon_sym_BSLASH] = ACTIONS(242),
    [anon_sym_1] = ACTIONS(242),
    [anon_sym_lambda] = ACTIONS(242),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(242),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(242),
    [sym_identifier] = ACTIONS(242),
    [sym_func_identifier] = ACTIONS(242),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(242),
    [sym_string] = ACTIONS(242),
  },
  [55] = {
    [sym__term] = STATE(85),
    [sym_group] = STATE(36),
    [sym_function] = STATE(36),
    [sym__terminal] = STATE(36),
    [sym_func_indicator] = STATE(76),
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
  [56] = {
    [anon_sym_SEMI] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(195),
    [anon_sym_LBRACK] = ACTIONS(195),
    [sym__newline] = ACTIONS(197),
    [sym_block_end] = ACTIONS(195),
    [anon_sym_EQ_EQ] = ACTIONS(195),
    [anon_sym_EQ1] = ACTIONS(195),
    [anon_sym_EQ2] = ACTIONS(195),
    [anon_sym_a_EQ] = ACTIONS(195),
    [anon_sym_EQa] = ACTIONS(195),
    [anon_sym_EQ_GT] = ACTIONS(195),
    [anon_sym_EQ3] = ACTIONS(195),
    [anon_sym_EQ4] = ACTIONS(195),
    [anon_sym_b_EQ] = ACTIONS(195),
    [anon_sym_EQb] = ACTIONS(195),
    [anon_sym_BSLASH] = ACTIONS(195),
    [anon_sym_1] = ACTIONS(195),
    [anon_sym_lambda] = ACTIONS(195),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(195),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(195),
    [sym_identifier] = ACTIONS(195),
    [sym_func_identifier] = ACTIONS(195),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(195),
    [sym_string] = ACTIONS(195),
  },
  [57] = {
    [anon_sym_SEMI] = ACTIONS(199),
    [anon_sym_LPAREN] = ACTIONS(199),
    [anon_sym_LBRACK] = ACTIONS(199),
    [sym__newline] = ACTIONS(201),
    [sym_block_end] = ACTIONS(199),
    [anon_sym_EQ_EQ] = ACTIONS(199),
    [anon_sym_EQ1] = ACTIONS(199),
    [anon_sym_EQ2] = ACTIONS(199),
    [anon_sym_a_EQ] = ACTIONS(199),
    [anon_sym_EQa] = ACTIONS(199),
    [anon_sym_EQ_GT] = ACTIONS(199),
    [anon_sym_EQ3] = ACTIONS(199),
    [anon_sym_EQ4] = ACTIONS(199),
    [anon_sym_b_EQ] = ACTIONS(199),
    [anon_sym_EQb] = ACTIONS(199),
    [anon_sym_BSLASH] = ACTIONS(199),
    [anon_sym_1] = ACTIONS(199),
    [anon_sym_lambda] = ACTIONS(199),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(199),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(199),
    [sym_identifier] = ACTIONS(199),
    [sym_func_identifier] = ACTIONS(199),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(199),
    [sym_string] = ACTIONS(199),
  },
  [58] = {
    [sym__term] = STATE(87),
    [sym_group] = STATE(25),
    [sym_function] = STATE(25),
    [sym_func_body] = STATE(86),
    [sym__terminal] = STATE(25),
    [sym_func_indicator] = STATE(26),
    [aux_sym_block_expression_repeat1] = STATE(87),
    [anon_sym_SEMI] = ACTIONS(203),
    [anon_sym_LPAREN] = ACTIONS(36),
    [anon_sym_LBRACK] = ACTIONS(203),
    [sym__newline] = ACTIONS(205),
    [sym_block_end] = ACTIONS(203),
    [anon_sym_EQ_EQ] = ACTIONS(203),
    [anon_sym_EQ1] = ACTIONS(203),
    [anon_sym_EQ2] = ACTIONS(203),
    [anon_sym_a_EQ] = ACTIONS(203),
    [anon_sym_EQa] = ACTIONS(203),
    [anon_sym_EQ_GT] = ACTIONS(203),
    [anon_sym_EQ3] = ACTIONS(203),
    [anon_sym_EQ4] = ACTIONS(203),
    [anon_sym_b_EQ] = ACTIONS(203),
    [anon_sym_EQb] = ACTIONS(203),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_1] = ACTIONS(26),
    [anon_sym_lambda] = ACTIONS(26),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(203),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(203),
    [sym_identifier] = ACTIONS(50),
    [sym_func_identifier] = ACTIONS(50),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(50),
    [sym_string] = ACTIONS(50),
  },
  [59] = {
    [sym_func_sep] = STATE(88),
    [aux_sym_function_repeat1] = STATE(80),
    [anon_sym_DASH_GT] = ACTIONS(137),
    [anon_sym_DOT] = ACTIONS(137),
    [anon_sym_COLON] = ACTIONS(137),
    [sym_identifier] = ACTIONS(207),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
  },
  [60] = {
    [sym_block_expression] = STATE(23),
    [sym__relation_operator] = STATE(24),
    [sym__term] = STATE(28),
    [sym_group] = STATE(25),
    [sym_function] = STATE(25),
    [sym__terminal] = STATE(25),
    [sym_alpha_convert] = STATE(24),
    [sym_beta_reduce] = STATE(24),
    [sym_func_indicator] = STATE(26),
    [sym_annotation] = STATE(60),
    [aux_sym__block_contents_repeat1] = STATE(60),
    [aux_sym_block_expression_repeat1] = STATE(28),
    [anon_sym_LPAREN] = ACTIONS(246),
    [sym__newline] = ACTIONS(249),
    [sym_block_end] = ACTIONS(252),
    [anon_sym_EQ_EQ] = ACTIONS(254),
    [anon_sym_EQ1] = ACTIONS(254),
    [anon_sym_EQ2] = ACTIONS(254),
    [anon_sym_a_EQ] = ACTIONS(254),
    [anon_sym_EQa] = ACTIONS(254),
    [anon_sym_EQ_GT] = ACTIONS(257),
    [anon_sym_EQ3] = ACTIONS(257),
    [anon_sym_EQ4] = ACTIONS(257),
    [anon_sym_b_EQ] = ACTIONS(257),
    [anon_sym_EQb] = ACTIONS(257),
    [anon_sym_BSLASH] = ACTIONS(260),
    [anon_sym_1] = ACTIONS(260),
    [anon_sym_lambda] = ACTIONS(260),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(263),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(266),
    [sym_identifier] = ACTIONS(269),
    [sym_func_identifier] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(269),
    [sym_string] = ACTIONS(269),
  },
  [61] = {
    [sym__term] = STATE(61),
    [sym_group] = STATE(25),
    [sym_function] = STATE(25),
    [sym__terminal] = STATE(25),
    [sym_func_indicator] = STATE(26),
    [aux_sym_block_expression_repeat1] = STATE(61),
    [anon_sym_SEMI] = ACTIONS(213),
    [anon_sym_LPAREN] = ACTIONS(272),
    [sym__newline] = ACTIONS(218),
    [sym_block_end] = ACTIONS(213),
    [anon_sym_EQ_EQ] = ACTIONS(213),
    [anon_sym_EQ1] = ACTIONS(213),
    [anon_sym_EQ2] = ACTIONS(213),
    [anon_sym_a_EQ] = ACTIONS(213),
    [anon_sym_EQa] = ACTIONS(213),
    [anon_sym_EQ_GT] = ACTIONS(213),
    [anon_sym_EQ3] = ACTIONS(213),
    [anon_sym_EQ4] = ACTIONS(213),
    [anon_sym_b_EQ] = ACTIONS(213),
    [anon_sym_EQb] = ACTIONS(213),
    [anon_sym_BSLASH] = ACTIONS(220),
    [anon_sym_1] = ACTIONS(220),
    [anon_sym_lambda] = ACTIONS(220),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(213),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(213),
    [sym_identifier] = ACTIONS(275),
    [sym_func_identifier] = ACTIONS(275),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(275),
    [sym_string] = ACTIONS(275),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(278),
    [anon_sym_GT] = ACTIONS(280),
    [sym__newline] = ACTIONS(278),
    [sym_block_start] = ACTIONS(280),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(280),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(280),
    [sym_func_identifier] = ACTIONS(280),
    [sym_line_comment] = ACTIONS(280),
    [sym_block_comment] = ACTIONS(280),
  },
  [63] = {
    [aux_sym_annotation_repeat1] = STATE(63),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(282),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_DQUOTE_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(284),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
  },
  [64] = {
    [aux_sym_annotation_repeat2] = STATE(64),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(287),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_SQUOTE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_SQUOTE_SQUOTE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(289),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(292),
    [anon_sym_GT] = ACTIONS(294),
    [sym__newline] = ACTIONS(292),
    [sym_block_start] = ACTIONS(294),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(294),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(294),
    [sym_func_identifier] = ACTIONS(294),
    [sym_line_comment] = ACTIONS(294),
    [sym_block_comment] = ACTIONS(294),
  },
  [66] = {
    [anon_sym_LPAREN] = ACTIONS(185),
    [anon_sym_RPAREN] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_RBRACK] = ACTIONS(185),
    [anon_sym_BSLASH] = ACTIONS(185),
    [anon_sym_1] = ACTIONS(185),
    [anon_sym_lambda] = ACTIONS(183),
    [anon_sym_DASH_GT] = ACTIONS(185),
    [anon_sym_COLON_EQ] = ACTIONS(185),
    [anon_sym_SLASH] = ACTIONS(183),
    [anon_sym_PIPE] = ACTIONS(185),
    [anon_sym_LT_DASH] = ACTIONS(185),
    [sym_identifier] = ACTIONS(183),
    [sym_func_identifier] = ACTIONS(185),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(185),
    [sym_string] = ACTIONS(185),
  },
  [67] = {
    [sym__term] = STATE(74),
    [sym_group] = STATE(36),
    [sym_function] = STATE(36),
    [sym__terminal] = STATE(36),
    [sym_func_indicator] = STATE(37),
    [aux_sym_block_expression_repeat1] = STATE(74),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(296),
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
  [68] = {
    [sym__term] = STATE(90),
    [sym_group] = STATE(36),
    [sym_function] = STATE(36),
    [sym__terminal] = STATE(36),
    [sym_func_indicator] = STATE(76),
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
  [69] = {
    [anon_sym_LPAREN] = ACTIONS(197),
    [anon_sym_RPAREN] = ACTIONS(197),
    [anon_sym_LBRACK] = ACTIONS(197),
    [anon_sym_RBRACK] = ACTIONS(197),
    [anon_sym_BSLASH] = ACTIONS(197),
    [anon_sym_1] = ACTIONS(197),
    [anon_sym_lambda] = ACTIONS(195),
    [anon_sym_DASH_GT] = ACTIONS(197),
    [anon_sym_COLON_EQ] = ACTIONS(197),
    [anon_sym_SLASH] = ACTIONS(195),
    [anon_sym_PIPE] = ACTIONS(197),
    [anon_sym_LT_DASH] = ACTIONS(197),
    [sym_identifier] = ACTIONS(195),
    [sym_func_identifier] = ACTIONS(197),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(197),
    [sym_string] = ACTIONS(197),
  },
  [70] = {
    [anon_sym_LPAREN] = ACTIONS(201),
    [anon_sym_RPAREN] = ACTIONS(201),
    [anon_sym_LBRACK] = ACTIONS(201),
    [anon_sym_RBRACK] = ACTIONS(201),
    [anon_sym_BSLASH] = ACTIONS(201),
    [anon_sym_1] = ACTIONS(201),
    [anon_sym_lambda] = ACTIONS(199),
    [anon_sym_DASH_GT] = ACTIONS(201),
    [anon_sym_COLON_EQ] = ACTIONS(201),
    [anon_sym_SLASH] = ACTIONS(199),
    [anon_sym_PIPE] = ACTIONS(201),
    [anon_sym_LT_DASH] = ACTIONS(201),
    [sym_identifier] = ACTIONS(199),
    [sym_func_identifier] = ACTIONS(201),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(201),
    [sym_string] = ACTIONS(201),
  },
  [71] = {
    [sym__term] = STATE(92),
    [sym_group] = STATE(36),
    [sym_function] = STATE(36),
    [sym_func_body] = STATE(91),
    [sym__terminal] = STATE(36),
    [sym_func_indicator] = STATE(37),
    [aux_sym_block_expression_repeat1] = STATE(92),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(205),
    [anon_sym_LBRACK] = ACTIONS(205),
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
  [72] = {
    [sym_func_sep] = STATE(93),
    [aux_sym_function_repeat1] = STATE(80),
    [anon_sym_DASH_GT] = ACTIONS(189),
    [anon_sym_DOT] = ACTIONS(189),
    [anon_sym_COLON] = ACTIONS(189),
    [sym_identifier] = ACTIONS(207),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
  },
  [73] = {
    [anon_sym_SEMI] = ACTIONS(298),
    [anon_sym_LPAREN] = ACTIONS(298),
    [anon_sym_LBRACK] = ACTIONS(298),
    [sym__newline] = ACTIONS(300),
    [anon_sym_BSLASH] = ACTIONS(298),
    [anon_sym_1] = ACTIONS(298),
    [anon_sym_lambda] = ACTIONS(298),
    [sym_identifier] = ACTIONS(298),
    [sym_func_identifier] = ACTIONS(298),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(298),
    [sym_string] = ACTIONS(298),
  },
  [74] = {
    [sym__term] = STATE(74),
    [sym_group] = STATE(36),
    [sym_function] = STATE(36),
    [sym__terminal] = STATE(36),
    [sym_func_indicator] = STATE(37),
    [aux_sym_block_expression_repeat1] = STATE(74),
    [anon_sym_LPAREN] = ACTIONS(302),
    [anon_sym_RPAREN] = ACTIONS(218),
    [anon_sym_BSLASH] = ACTIONS(305),
    [anon_sym_1] = ACTIONS(305),
    [anon_sym_lambda] = ACTIONS(220),
    [sym_identifier] = ACTIONS(308),
    [sym_func_identifier] = ACTIONS(311),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(311),
    [sym_string] = ACTIONS(311),
  },
  [75] = {
    [sym__replacement_indicator] = STATE(96),
    [sym_replace_forwards] = STATE(96),
    [sym_replace_backwards] = STATE(96),
    [anon_sym_BSLASH] = ACTIONS(314),
    [anon_sym_DASH_GT] = ACTIONS(316),
    [anon_sym_COLON_EQ] = ACTIONS(316),
    [anon_sym_SLASH] = ACTIONS(318),
    [anon_sym_PIPE] = ACTIONS(316),
    [anon_sym_LT_DASH] = ACTIONS(314),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
  },
  [76] = {
    [sym_func_sep] = STATE(97),
    [aux_sym_function_repeat1] = STATE(98),
    [anon_sym_DASH_GT] = ACTIONS(189),
    [anon_sym_DOT] = ACTIONS(189),
    [anon_sym_COLON] = ACTIONS(189),
    [sym_identifier] = ACTIONS(320),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
  },
  [77] = {
    [anon_sym_SEMI] = ACTIONS(322),
    [anon_sym_LPAREN] = ACTIONS(322),
    [anon_sym_LBRACK] = ACTIONS(322),
    [sym__newline] = ACTIONS(324),
    [anon_sym_BSLASH] = ACTIONS(322),
    [anon_sym_1] = ACTIONS(322),
    [anon_sym_lambda] = ACTIONS(322),
    [sym_identifier] = ACTIONS(322),
    [sym_func_identifier] = ACTIONS(322),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(322),
    [sym_string] = ACTIONS(322),
  },
  [78] = {
    [sym__term] = STATE(99),
    [sym_group] = STATE(12),
    [sym_function] = STATE(12),
    [sym__terminal] = STATE(12),
    [sym_func_indicator] = STATE(13),
    [aux_sym_block_expression_repeat1] = STATE(99),
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
  [79] = {
    [sym__term] = STATE(78),
    [sym_group] = STATE(12),
    [sym_function] = STATE(12),
    [sym_func_body] = STATE(100),
    [sym__terminal] = STATE(12),
    [sym_func_indicator] = STATE(13),
    [aux_sym_block_expression_repeat1] = STATE(78),
    [anon_sym_SEMI] = ACTIONS(322),
    [anon_sym_LPAREN] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(322),
    [sym__newline] = ACTIONS(324),
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
  [80] = {
    [aux_sym_function_repeat1] = STATE(80),
    [anon_sym_DASH_GT] = ACTIONS(330),
    [anon_sym_DOT] = ACTIONS(330),
    [anon_sym_COLON] = ACTIONS(330),
    [sym_identifier] = ACTIONS(332),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
  },
  [81] = {
    [sym__block_contents] = STATE(102),
    [sym_block_expression] = STATE(23),
    [sym__relation_operator] = STATE(24),
    [sym__term] = STATE(28),
    [sym_group] = STATE(25),
    [sym_function] = STATE(25),
    [sym__terminal] = STATE(25),
    [sym_alpha_convert] = STATE(24),
    [sym_beta_reduce] = STATE(24),
    [sym_func_indicator] = STATE(26),
    [sym_annotation] = STATE(27),
    [aux_sym__block_contents_repeat1] = STATE(27),
    [aux_sym_block_expression_repeat1] = STATE(28),
    [anon_sym_LPAREN] = ACTIONS(36),
    [sym__newline] = ACTIONS(38),
    [sym_block_end] = ACTIONS(335),
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
  [82] = {
    [anon_sym_SEMI] = ACTIONS(298),
    [anon_sym_LPAREN] = ACTIONS(298),
    [anon_sym_LBRACK] = ACTIONS(298),
    [sym__newline] = ACTIONS(300),
    [sym_block_end] = ACTIONS(298),
    [anon_sym_EQ_EQ] = ACTIONS(298),
    [anon_sym_EQ1] = ACTIONS(298),
    [anon_sym_EQ2] = ACTIONS(298),
    [anon_sym_a_EQ] = ACTIONS(298),
    [anon_sym_EQa] = ACTIONS(298),
    [anon_sym_EQ_GT] = ACTIONS(298),
    [anon_sym_EQ3] = ACTIONS(298),
    [anon_sym_EQ4] = ACTIONS(298),
    [anon_sym_b_EQ] = ACTIONS(298),
    [anon_sym_EQb] = ACTIONS(298),
    [anon_sym_BSLASH] = ACTIONS(298),
    [anon_sym_1] = ACTIONS(298),
    [anon_sym_lambda] = ACTIONS(298),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(298),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(298),
    [sym_identifier] = ACTIONS(298),
    [sym_func_identifier] = ACTIONS(298),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(298),
    [sym_string] = ACTIONS(298),
  },
  [83] = {
    [anon_sym_LPAREN] = ACTIONS(280),
    [sym__newline] = ACTIONS(278),
    [sym_block_end] = ACTIONS(280),
    [anon_sym_EQ_EQ] = ACTIONS(280),
    [anon_sym_EQ1] = ACTIONS(280),
    [anon_sym_EQ2] = ACTIONS(280),
    [anon_sym_a_EQ] = ACTIONS(280),
    [anon_sym_EQa] = ACTIONS(280),
    [anon_sym_EQ_GT] = ACTIONS(280),
    [anon_sym_EQ3] = ACTIONS(280),
    [anon_sym_EQ4] = ACTIONS(280),
    [anon_sym_b_EQ] = ACTIONS(280),
    [anon_sym_EQb] = ACTIONS(280),
    [anon_sym_BSLASH] = ACTIONS(280),
    [anon_sym_1] = ACTIONS(280),
    [anon_sym_lambda] = ACTIONS(280),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(280),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(280),
    [sym_identifier] = ACTIONS(280),
    [sym_func_identifier] = ACTIONS(280),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(280),
    [sym_string] = ACTIONS(280),
  },
  [84] = {
    [anon_sym_LPAREN] = ACTIONS(337),
    [sym__newline] = ACTIONS(339),
    [sym_block_end] = ACTIONS(337),
    [anon_sym_EQ_EQ] = ACTIONS(337),
    [anon_sym_EQ1] = ACTIONS(337),
    [anon_sym_EQ2] = ACTIONS(337),
    [anon_sym_a_EQ] = ACTIONS(337),
    [anon_sym_EQa] = ACTIONS(337),
    [anon_sym_EQ_GT] = ACTIONS(337),
    [anon_sym_EQ3] = ACTIONS(337),
    [anon_sym_EQ4] = ACTIONS(337),
    [anon_sym_b_EQ] = ACTIONS(337),
    [anon_sym_EQb] = ACTIONS(337),
    [anon_sym_BSLASH] = ACTIONS(337),
    [anon_sym_1] = ACTIONS(337),
    [anon_sym_lambda] = ACTIONS(337),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(337),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(337),
    [sym_identifier] = ACTIONS(337),
    [sym_func_identifier] = ACTIONS(337),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(337),
    [sym_string] = ACTIONS(337),
  },
  [85] = {
    [sym__replacement_indicator] = STATE(103),
    [sym_replace_forwards] = STATE(103),
    [sym_replace_backwards] = STATE(103),
    [anon_sym_BSLASH] = ACTIONS(314),
    [anon_sym_DASH_GT] = ACTIONS(316),
    [anon_sym_COLON_EQ] = ACTIONS(316),
    [anon_sym_SLASH] = ACTIONS(318),
    [anon_sym_PIPE] = ACTIONS(316),
    [anon_sym_LT_DASH] = ACTIONS(314),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
  },
  [86] = {
    [anon_sym_SEMI] = ACTIONS(322),
    [anon_sym_LPAREN] = ACTIONS(322),
    [anon_sym_LBRACK] = ACTIONS(322),
    [sym__newline] = ACTIONS(324),
    [sym_block_end] = ACTIONS(322),
    [anon_sym_EQ_EQ] = ACTIONS(322),
    [anon_sym_EQ1] = ACTIONS(322),
    [anon_sym_EQ2] = ACTIONS(322),
    [anon_sym_a_EQ] = ACTIONS(322),
    [anon_sym_EQa] = ACTIONS(322),
    [anon_sym_EQ_GT] = ACTIONS(322),
    [anon_sym_EQ3] = ACTIONS(322),
    [anon_sym_EQ4] = ACTIONS(322),
    [anon_sym_b_EQ] = ACTIONS(322),
    [anon_sym_EQb] = ACTIONS(322),
    [anon_sym_BSLASH] = ACTIONS(322),
    [anon_sym_1] = ACTIONS(322),
    [anon_sym_lambda] = ACTIONS(322),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(322),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(322),
    [sym_identifier] = ACTIONS(322),
    [sym_func_identifier] = ACTIONS(322),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(322),
    [sym_string] = ACTIONS(322),
  },
  [87] = {
    [sym__term] = STATE(104),
    [sym_group] = STATE(25),
    [sym_function] = STATE(25),
    [sym__terminal] = STATE(25),
    [sym_func_indicator] = STATE(26),
    [aux_sym_block_expression_repeat1] = STATE(104),
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
  [88] = {
    [sym__term] = STATE(87),
    [sym_group] = STATE(25),
    [sym_function] = STATE(25),
    [sym_func_body] = STATE(105),
    [sym__terminal] = STATE(25),
    [sym_func_indicator] = STATE(26),
    [aux_sym_block_expression_repeat1] = STATE(87),
    [anon_sym_SEMI] = ACTIONS(322),
    [anon_sym_LPAREN] = ACTIONS(36),
    [anon_sym_LBRACK] = ACTIONS(322),
    [sym__newline] = ACTIONS(324),
    [sym_block_end] = ACTIONS(322),
    [anon_sym_EQ_EQ] = ACTIONS(322),
    [anon_sym_EQ1] = ACTIONS(322),
    [anon_sym_EQ2] = ACTIONS(322),
    [anon_sym_a_EQ] = ACTIONS(322),
    [anon_sym_EQa] = ACTIONS(322),
    [anon_sym_EQ_GT] = ACTIONS(322),
    [anon_sym_EQ3] = ACTIONS(322),
    [anon_sym_EQ4] = ACTIONS(322),
    [anon_sym_b_EQ] = ACTIONS(322),
    [anon_sym_EQb] = ACTIONS(322),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_1] = ACTIONS(26),
    [anon_sym_lambda] = ACTIONS(26),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(322),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(322),
    [sym_identifier] = ACTIONS(50),
    [sym_func_identifier] = ACTIONS(50),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(50),
    [sym_string] = ACTIONS(50),
  },
  [89] = {
    [anon_sym_LPAREN] = ACTIONS(300),
    [anon_sym_RPAREN] = ACTIONS(300),
    [anon_sym_LBRACK] = ACTIONS(300),
    [anon_sym_RBRACK] = ACTIONS(300),
    [anon_sym_BSLASH] = ACTIONS(300),
    [anon_sym_1] = ACTIONS(300),
    [anon_sym_lambda] = ACTIONS(298),
    [anon_sym_DASH_GT] = ACTIONS(300),
    [anon_sym_COLON_EQ] = ACTIONS(300),
    [anon_sym_SLASH] = ACTIONS(298),
    [anon_sym_PIPE] = ACTIONS(300),
    [anon_sym_LT_DASH] = ACTIONS(300),
    [sym_identifier] = ACTIONS(298),
    [sym_func_identifier] = ACTIONS(300),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(300),
    [sym_string] = ACTIONS(300),
  },
  [90] = {
    [sym__replacement_indicator] = STATE(106),
    [sym_replace_forwards] = STATE(106),
    [sym_replace_backwards] = STATE(106),
    [anon_sym_BSLASH] = ACTIONS(314),
    [anon_sym_DASH_GT] = ACTIONS(316),
    [anon_sym_COLON_EQ] = ACTIONS(316),
    [anon_sym_SLASH] = ACTIONS(318),
    [anon_sym_PIPE] = ACTIONS(316),
    [anon_sym_LT_DASH] = ACTIONS(314),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
  },
  [91] = {
    [anon_sym_LPAREN] = ACTIONS(324),
    [anon_sym_RPAREN] = ACTIONS(324),
    [anon_sym_LBRACK] = ACTIONS(324),
    [anon_sym_RBRACK] = ACTIONS(324),
    [anon_sym_BSLASH] = ACTIONS(324),
    [anon_sym_1] = ACTIONS(324),
    [anon_sym_lambda] = ACTIONS(322),
    [anon_sym_DASH_GT] = ACTIONS(324),
    [anon_sym_COLON_EQ] = ACTIONS(324),
    [anon_sym_SLASH] = ACTIONS(322),
    [anon_sym_PIPE] = ACTIONS(324),
    [anon_sym_LT_DASH] = ACTIONS(324),
    [sym_identifier] = ACTIONS(322),
    [sym_func_identifier] = ACTIONS(324),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(324),
    [sym_string] = ACTIONS(324),
  },
  [92] = {
    [sym__term] = STATE(107),
    [sym_group] = STATE(36),
    [sym_function] = STATE(36),
    [sym__terminal] = STATE(36),
    [sym_func_indicator] = STATE(37),
    [aux_sym_block_expression_repeat1] = STATE(107),
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
  [93] = {
    [sym__term] = STATE(92),
    [sym_group] = STATE(36),
    [sym_function] = STATE(36),
    [sym_func_body] = STATE(108),
    [sym__terminal] = STATE(36),
    [sym_func_indicator] = STATE(37),
    [aux_sym_block_expression_repeat1] = STATE(92),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(324),
    [anon_sym_LBRACK] = ACTIONS(324),
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
  [94] = {
    [anon_sym_LPAREN] = ACTIONS(341),
    [anon_sym_BSLASH] = ACTIONS(341),
    [anon_sym_1] = ACTIONS(341),
    [anon_sym_lambda] = ACTIONS(343),
    [sym_identifier] = ACTIONS(343),
    [sym_func_identifier] = ACTIONS(341),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(341),
    [sym_string] = ACTIONS(341),
  },
  [95] = {
    [anon_sym_LPAREN] = ACTIONS(345),
    [anon_sym_BSLASH] = ACTIONS(345),
    [anon_sym_1] = ACTIONS(345),
    [anon_sym_lambda] = ACTIONS(347),
    [sym_identifier] = ACTIONS(347),
    [sym_func_identifier] = ACTIONS(345),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(345),
    [sym_string] = ACTIONS(345),
  },
  [96] = {
    [sym__term] = STATE(109),
    [sym_group] = STATE(36),
    [sym_function] = STATE(36),
    [sym__terminal] = STATE(36),
    [sym_func_indicator] = STATE(110),
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
  [97] = {
    [sym__term] = STATE(111),
    [sym_group] = STATE(36),
    [sym_function] = STATE(36),
    [sym_func_body] = STATE(91),
    [sym__terminal] = STATE(36),
    [sym_func_indicator] = STATE(76),
    [aux_sym_block_expression_repeat1] = STATE(111),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(205),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_1] = ACTIONS(24),
    [anon_sym_lambda] = ACTIONS(26),
    [anon_sym_DASH_GT] = ACTIONS(205),
    [anon_sym_COLON_EQ] = ACTIONS(205),
    [anon_sym_SLASH] = ACTIONS(203),
    [anon_sym_PIPE] = ACTIONS(205),
    [anon_sym_LT_DASH] = ACTIONS(205),
    [sym_identifier] = ACTIONS(75),
    [sym_func_identifier] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(77),
    [sym_string] = ACTIONS(77),
  },
  [98] = {
    [sym_func_sep] = STATE(112),
    [aux_sym_function_repeat1] = STATE(80),
    [anon_sym_DASH_GT] = ACTIONS(189),
    [anon_sym_DOT] = ACTIONS(189),
    [anon_sym_COLON] = ACTIONS(189),
    [sym_identifier] = ACTIONS(207),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
  },
  [99] = {
    [sym__term] = STATE(99),
    [sym_group] = STATE(12),
    [sym_function] = STATE(12),
    [sym__terminal] = STATE(12),
    [sym_func_indicator] = STATE(13),
    [aux_sym_block_expression_repeat1] = STATE(99),
    [anon_sym_SEMI] = ACTIONS(213),
    [anon_sym_LPAREN] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(213),
    [sym__newline] = ACTIONS(218),
    [anon_sym_BSLASH] = ACTIONS(220),
    [anon_sym_1] = ACTIONS(220),
    [anon_sym_lambda] = ACTIONS(220),
    [sym_identifier] = ACTIONS(223),
    [sym_func_identifier] = ACTIONS(223),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(223),
    [sym_string] = ACTIONS(223),
  },
  [100] = {
    [anon_sym_SEMI] = ACTIONS(349),
    [anon_sym_LPAREN] = ACTIONS(349),
    [anon_sym_LBRACK] = ACTIONS(349),
    [sym__newline] = ACTIONS(351),
    [anon_sym_BSLASH] = ACTIONS(349),
    [anon_sym_1] = ACTIONS(349),
    [anon_sym_lambda] = ACTIONS(349),
    [sym_identifier] = ACTIONS(349),
    [sym_func_identifier] = ACTIONS(349),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(349),
    [sym_string] = ACTIONS(349),
  },
  [101] = {
    [ts_builtin_sym_end] = ACTIONS(353),
    [anon_sym_GT] = ACTIONS(355),
    [sym__newline] = ACTIONS(353),
    [sym_block_start] = ACTIONS(355),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(355),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(355),
    [sym_func_identifier] = ACTIONS(355),
    [sym_line_comment] = ACTIONS(355),
    [sym_block_comment] = ACTIONS(355),
  },
  [102] = {
    [sym_block_end] = ACTIONS(357),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
  },
  [103] = {
    [sym__term] = STATE(114),
    [sym_group] = STATE(36),
    [sym_function] = STATE(36),
    [sym__terminal] = STATE(36),
    [sym_func_indicator] = STATE(110),
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
  [104] = {
    [sym__term] = STATE(104),
    [sym_group] = STATE(25),
    [sym_function] = STATE(25),
    [sym__terminal] = STATE(25),
    [sym_func_indicator] = STATE(26),
    [aux_sym_block_expression_repeat1] = STATE(104),
    [anon_sym_SEMI] = ACTIONS(213),
    [anon_sym_LPAREN] = ACTIONS(272),
    [anon_sym_LBRACK] = ACTIONS(213),
    [sym__newline] = ACTIONS(218),
    [sym_block_end] = ACTIONS(213),
    [anon_sym_EQ_EQ] = ACTIONS(213),
    [anon_sym_EQ1] = ACTIONS(213),
    [anon_sym_EQ2] = ACTIONS(213),
    [anon_sym_a_EQ] = ACTIONS(213),
    [anon_sym_EQa] = ACTIONS(213),
    [anon_sym_EQ_GT] = ACTIONS(213),
    [anon_sym_EQ3] = ACTIONS(213),
    [anon_sym_EQ4] = ACTIONS(213),
    [anon_sym_b_EQ] = ACTIONS(213),
    [anon_sym_EQb] = ACTIONS(213),
    [anon_sym_BSLASH] = ACTIONS(220),
    [anon_sym_1] = ACTIONS(220),
    [anon_sym_lambda] = ACTIONS(220),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(213),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(213),
    [sym_identifier] = ACTIONS(275),
    [sym_func_identifier] = ACTIONS(275),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(275),
    [sym_string] = ACTIONS(275),
  },
  [105] = {
    [anon_sym_SEMI] = ACTIONS(349),
    [anon_sym_LPAREN] = ACTIONS(349),
    [anon_sym_LBRACK] = ACTIONS(349),
    [sym__newline] = ACTIONS(351),
    [sym_block_end] = ACTIONS(349),
    [anon_sym_EQ_EQ] = ACTIONS(349),
    [anon_sym_EQ1] = ACTIONS(349),
    [anon_sym_EQ2] = ACTIONS(349),
    [anon_sym_a_EQ] = ACTIONS(349),
    [anon_sym_EQa] = ACTIONS(349),
    [anon_sym_EQ_GT] = ACTIONS(349),
    [anon_sym_EQ3] = ACTIONS(349),
    [anon_sym_EQ4] = ACTIONS(349),
    [anon_sym_b_EQ] = ACTIONS(349),
    [anon_sym_EQb] = ACTIONS(349),
    [anon_sym_BSLASH] = ACTIONS(349),
    [anon_sym_1] = ACTIONS(349),
    [anon_sym_lambda] = ACTIONS(349),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(349),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(349),
    [sym_identifier] = ACTIONS(349),
    [sym_func_identifier] = ACTIONS(349),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
    [sym_integer] = ACTIONS(349),
    [sym_string] = ACTIONS(349),
  },
  [106] = {
    [sym__term] = STATE(115),
    [sym_group] = STATE(36),
    [sym_function] = STATE(36),
    [sym__terminal] = STATE(36),
    [sym_func_indicator] = STATE(110),
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
  [107] = {
    [sym__term] = STATE(107),
    [sym_group] = STATE(36),
    [sym_function] = STATE(36),
    [sym__terminal] = STATE(36),
    [sym_func_indicator] = STATE(37),
    [aux_sym_block_expression_repeat1] = STATE(107),
    [anon_sym_LPAREN] = ACTIONS(302),
    [anon_sym_RPAREN] = ACTIONS(218),
    [anon_sym_LBRACK] = ACTIONS(218),
    [anon_sym_BSLASH] = ACTIONS(305),
    [anon_sym_1] = ACTIONS(305),
    [anon_sym_lambda] = ACTIONS(220),
    [sym_identifier] = ACTIONS(308),
    [sym_func_identifier] = ACTIONS(311),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(311),
    [sym_string] = ACTIONS(311),
  },
  [108] = {
    [anon_sym_LPAREN] = ACTIONS(351),
    [anon_sym_RPAREN] = ACTIONS(351),
    [anon_sym_LBRACK] = ACTIONS(351),
    [anon_sym_RBRACK] = ACTIONS(351),
    [anon_sym_BSLASH] = ACTIONS(351),
    [anon_sym_1] = ACTIONS(351),
    [anon_sym_lambda] = ACTIONS(349),
    [anon_sym_DASH_GT] = ACTIONS(351),
    [anon_sym_COLON_EQ] = ACTIONS(351),
    [anon_sym_SLASH] = ACTIONS(349),
    [anon_sym_PIPE] = ACTIONS(351),
    [anon_sym_LT_DASH] = ACTIONS(351),
    [sym_identifier] = ACTIONS(349),
    [sym_func_identifier] = ACTIONS(351),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(351),
    [sym_string] = ACTIONS(351),
  },
  [109] = {
    [anon_sym_RBRACK] = ACTIONS(359),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
  },
  [110] = {
    [sym_func_sep] = STATE(117),
    [aux_sym_function_repeat1] = STATE(118),
    [anon_sym_DASH_GT] = ACTIONS(189),
    [anon_sym_DOT] = ACTIONS(189),
    [anon_sym_COLON] = ACTIONS(189),
    [sym_identifier] = ACTIONS(361),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
  },
  [111] = {
    [sym__term] = STATE(119),
    [sym_group] = STATE(36),
    [sym_function] = STATE(36),
    [sym__terminal] = STATE(36),
    [sym_func_indicator] = STATE(76),
    [aux_sym_block_expression_repeat1] = STATE(119),
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
  [112] = {
    [sym__term] = STATE(111),
    [sym_group] = STATE(36),
    [sym_function] = STATE(36),
    [sym_func_body] = STATE(108),
    [sym__terminal] = STATE(36),
    [sym_func_indicator] = STATE(76),
    [aux_sym_block_expression_repeat1] = STATE(111),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(324),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_1] = ACTIONS(24),
    [anon_sym_lambda] = ACTIONS(26),
    [anon_sym_DASH_GT] = ACTIONS(324),
    [anon_sym_COLON_EQ] = ACTIONS(324),
    [anon_sym_SLASH] = ACTIONS(322),
    [anon_sym_PIPE] = ACTIONS(324),
    [anon_sym_LT_DASH] = ACTIONS(324),
    [sym_identifier] = ACTIONS(75),
    [sym_func_identifier] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(77),
    [sym_string] = ACTIONS(77),
  },
  [113] = {
    [ts_builtin_sym_end] = ACTIONS(363),
    [anon_sym_GT] = ACTIONS(365),
    [sym__newline] = ACTIONS(363),
    [sym_block_start] = ACTIONS(365),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(365),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(365),
    [sym_func_identifier] = ACTIONS(365),
    [sym_line_comment] = ACTIONS(365),
    [sym_block_comment] = ACTIONS(365),
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
    [sym_group] = STATE(36),
    [sym_function] = STATE(36),
    [sym_func_body] = STATE(91),
    [sym__terminal] = STATE(36),
    [sym_func_indicator] = STATE(110),
    [aux_sym_block_expression_repeat1] = STATE(122),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(205),
    [anon_sym_RBRACK] = ACTIONS(205),
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
    [aux_sym_function_repeat1] = STATE(80),
    [anon_sym_DASH_GT] = ACTIONS(189),
    [anon_sym_DOT] = ACTIONS(189),
    [anon_sym_COLON] = ACTIONS(189),
    [sym_identifier] = ACTIONS(207),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
  },
  [119] = {
    [sym__term] = STATE(119),
    [sym_group] = STATE(36),
    [sym_function] = STATE(36),
    [sym__terminal] = STATE(36),
    [sym_func_indicator] = STATE(76),
    [aux_sym_block_expression_repeat1] = STATE(119),
    [anon_sym_LPAREN] = ACTIONS(302),
    [anon_sym_LBRACK] = ACTIONS(218),
    [anon_sym_BSLASH] = ACTIONS(305),
    [anon_sym_1] = ACTIONS(305),
    [anon_sym_lambda] = ACTIONS(220),
    [anon_sym_DASH_GT] = ACTIONS(218),
    [anon_sym_COLON_EQ] = ACTIONS(218),
    [anon_sym_SLASH] = ACTIONS(213),
    [anon_sym_PIPE] = ACTIONS(218),
    [anon_sym_LT_DASH] = ACTIONS(218),
    [sym_identifier] = ACTIONS(308),
    [sym_func_identifier] = ACTIONS(311),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(311),
    [sym_string] = ACTIONS(311),
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
    [sym_group] = STATE(36),
    [sym_function] = STATE(36),
    [sym__terminal] = STATE(36),
    [sym_func_indicator] = STATE(110),
    [aux_sym_block_expression_repeat1] = STATE(124),
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
  [123] = {
    [sym__term] = STATE(122),
    [sym_group] = STATE(36),
    [sym_function] = STATE(36),
    [sym_func_body] = STATE(108),
    [sym__terminal] = STATE(36),
    [sym_func_indicator] = STATE(110),
    [aux_sym_block_expression_repeat1] = STATE(122),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(324),
    [anon_sym_RBRACK] = ACTIONS(324),
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
    [sym_group] = STATE(36),
    [sym_function] = STATE(36),
    [sym__terminal] = STATE(36),
    [sym_func_indicator] = STATE(110),
    [aux_sym_block_expression_repeat1] = STATE(124),
    [anon_sym_LPAREN] = ACTIONS(302),
    [anon_sym_LBRACK] = ACTIONS(218),
    [anon_sym_RBRACK] = ACTIONS(218),
    [anon_sym_BSLASH] = ACTIONS(305),
    [anon_sym_1] = ACTIONS(305),
    [anon_sym_lambda] = ACTIONS(220),
    [sym_identifier] = ACTIONS(308),
    [sym_func_identifier] = ACTIONS(311),
    [sym_line_comment] = ACTIONS(32),
    [sym_block_comment] = ACTIONS(32),
    [sym_integer] = ACTIONS(311),
    [sym_string] = ACTIONS(311),
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
  [38] = {.count = 1, .reusable = true}, SHIFT(27),
  [40] = {.count = 1, .reusable = false}, SHIFT(17),
  [42] = {.count = 1, .reusable = false}, SHIFT(18),
  [44] = {.count = 1, .reusable = false}, SHIFT(19),
  [46] = {.count = 1, .reusable = false}, SHIFT(20),
  [48] = {.count = 1, .reusable = false}, SHIFT(21),
  [50] = {.count = 1, .reusable = false}, SHIFT(25),
  [52] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [54] = {.count = 1, .reusable = false}, SHIFT(29),
  [56] = {.count = 1, .reusable = false}, SHIFT(30),
  [58] = {.count = 1, .reusable = false}, SHIFT(31),
  [60] = {.count = 1, .reusable = true}, SHIFT(32),
  [62] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [64] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [66] = {.count = 1, .reusable = true}, SHIFT(33),
  [68] = {.count = 2, .reusable = false}, SHIFT(33), SHIFT_EXTRA(),
  [71] = {.count = 1, .reusable = true}, SHIFT(34),
  [73] = {.count = 1, .reusable = true}, SHIFT(35),
  [75] = {.count = 1, .reusable = false}, SHIFT(36),
  [77] = {.count = 1, .reusable = true}, SHIFT(36),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_func_indicator, 1),
  [81] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [83] = {.count = 1, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2),
  [85] = {.count = 1, .reusable = false}, REDUCE(sym__term, 1),
  [87] = {.count = 1, .reusable = false}, SHIFT(39),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym__term, 1),
  [91] = {.count = 1, .reusable = true}, SHIFT(41),
  [93] = {.count = 1, .reusable = true}, SHIFT(43),
  [95] = {.count = 1, .reusable = false}, SHIFT(44),
  [97] = {.count = 1, .reusable = false}, SHIFT(9),
  [99] = {.count = 1, .reusable = true}, SHIFT(44),
  [101] = {.count = 1, .reusable = true}, SHIFT(46),
  [103] = {.count = 1, .reusable = true}, SHIFT(47),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym_block, 2),
  [107] = {.count = 1, .reusable = false}, REDUCE(sym_block, 2),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_alpha_convert, 1),
  [111] = {.count = 1, .reusable = false}, REDUCE(sym_alpha_convert, 1),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_beta_reduce, 1),
  [115] = {.count = 1, .reusable = false}, REDUCE(sym_beta_reduce, 1),
  [117] = {.count = 1, .reusable = false}, SHIFT(49),
  [119] = {.count = 1, .reusable = false}, SHIFT(50),
  [121] = {.count = 1, .reusable = false}, SHIFT(51),
  [123] = {.count = 1, .reusable = true}, SHIFT(52),
  [125] = {.count = 1, .reusable = false}, SHIFT(53),
  [127] = {.count = 1, .reusable = false}, REDUCE(aux_sym__block_contents_repeat1, 1, .alias_sequence_id = 1),
  [129] = {.count = 1, .reusable = true}, REDUCE(aux_sym__block_contents_repeat1, 1, .alias_sequence_id = 1),
  [131] = {.count = 1, .reusable = true}, SHIFT(16),
  [133] = {.count = 1, .reusable = true}, SHIFT(25),
  [135] = {.count = 1, .reusable = false}, SHIFT(55),
  [137] = {.count = 1, .reusable = true}, SHIFT(57),
  [139] = {.count = 1, .reusable = true}, SHIFT(59),
  [141] = {.count = 1, .reusable = true}, SHIFT(60),
  [143] = {.count = 1, .reusable = false}, REDUCE(sym__block_contents, 1),
  [145] = {.count = 1, .reusable = false}, REDUCE(sym_block_expression, 1),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_block_expression, 1),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_annotation, 2),
  [151] = {.count = 1, .reusable = false}, REDUCE(sym_annotation, 2),
  [153] = {.count = 1, .reusable = false}, SHIFT(62),
  [155] = {.count = 1, .reusable = false}, SHIFT(63),
  [157] = {.count = 1, .reusable = false}, SHIFT(64),
  [159] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [162] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(33),
  [165] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [168] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [171] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [174] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [177] = {.count = 3, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(33), SHIFT_EXTRA(),
  [181] = {.count = 1, .reusable = true}, SHIFT(66),
  [183] = {.count = 1, .reusable = false}, REDUCE(sym_group, 2),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_group, 2),
  [187] = {.count = 1, .reusable = true}, SHIFT(68),
  [189] = {.count = 1, .reusable = true}, SHIFT(70),
  [191] = {.count = 1, .reusable = true}, SHIFT(72),
  [193] = {.count = 1, .reusable = true}, SHIFT(73),
  [195] = {.count = 1, .reusable = false}, REDUCE(sym__term, 2),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym__term, 2),
  [199] = {.count = 1, .reusable = false}, REDUCE(sym_func_sep, 1),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_func_sep, 1),
  [203] = {.count = 1, .reusable = false}, REDUCE(sym_function, 2),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym_function, 2),
  [207] = {.count = 1, .reusable = true}, SHIFT(80),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 2),
  [211] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 2),
  [213] = {.count = 1, .reusable = false}, REDUCE(aux_sym_block_expression_repeat1, 2),
  [215] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(9),
  [218] = {.count = 1, .reusable = true}, REDUCE(aux_sym_block_expression_repeat1, 2),
  [220] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(10),
  [223] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(12),
  [226] = {.count = 1, .reusable = true}, SHIFT(81),
  [228] = {.count = 1, .reusable = true}, SHIFT(82),
  [230] = {.count = 1, .reusable = false}, SHIFT(83),
  [232] = {.count = 1, .reusable = true}, REDUCE(sym_block, 3),
  [234] = {.count = 1, .reusable = false}, REDUCE(sym_block, 3),
  [236] = {.count = 1, .reusable = false}, REDUCE(aux_sym__block_contents_repeat1, 2, .alias_sequence_id = 1),
  [238] = {.count = 1, .reusable = true}, REDUCE(aux_sym__block_contents_repeat1, 2, .alias_sequence_id = 1),
  [240] = {.count = 1, .reusable = false}, SHIFT(84),
  [242] = {.count = 1, .reusable = false}, REDUCE(aux_sym__block_contents_repeat1, 2, .alias_sequence_id = 2),
  [244] = {.count = 1, .reusable = true}, REDUCE(aux_sym__block_contents_repeat1, 2, .alias_sequence_id = 2),
  [246] = {.count = 2, .reusable = false}, REDUCE(aux_sym__block_contents_repeat1, 2), SHIFT_REPEAT(16),
  [249] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_contents_repeat1, 2), SHIFT_REPEAT(60),
  [252] = {.count = 1, .reusable = false}, REDUCE(aux_sym__block_contents_repeat1, 2),
  [254] = {.count = 2, .reusable = false}, REDUCE(aux_sym__block_contents_repeat1, 2), SHIFT_REPEAT(18),
  [257] = {.count = 2, .reusable = false}, REDUCE(aux_sym__block_contents_repeat1, 2), SHIFT_REPEAT(19),
  [260] = {.count = 2, .reusable = false}, REDUCE(aux_sym__block_contents_repeat1, 2), SHIFT_REPEAT(10),
  [263] = {.count = 2, .reusable = false}, REDUCE(aux_sym__block_contents_repeat1, 2), SHIFT_REPEAT(20),
  [266] = {.count = 2, .reusable = false}, REDUCE(aux_sym__block_contents_repeat1, 2), SHIFT_REPEAT(21),
  [269] = {.count = 2, .reusable = false}, REDUCE(aux_sym__block_contents_repeat1, 2), SHIFT_REPEAT(25),
  [272] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(16),
  [275] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(25),
  [278] = {.count = 1, .reusable = true}, REDUCE(sym_annotation, 3),
  [280] = {.count = 1, .reusable = false}, REDUCE(sym_annotation, 3),
  [282] = {.count = 1, .reusable = false}, REDUCE(aux_sym_annotation_repeat1, 2),
  [284] = {.count = 2, .reusable = false}, REDUCE(aux_sym_annotation_repeat1, 2), SHIFT_REPEAT(63),
  [287] = {.count = 1, .reusable = false}, REDUCE(aux_sym_annotation_repeat2, 2),
  [289] = {.count = 2, .reusable = false}, REDUCE(aux_sym_annotation_repeat2, 2), SHIFT_REPEAT(64),
  [292] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 3),
  [294] = {.count = 1, .reusable = false}, REDUCE(sym_function_definition, 3),
  [296] = {.count = 1, .reusable = true}, SHIFT(89),
  [298] = {.count = 1, .reusable = false}, REDUCE(sym_group, 3),
  [300] = {.count = 1, .reusable = true}, REDUCE(sym_group, 3),
  [302] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(34),
  [305] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(10),
  [308] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(36),
  [311] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(36),
  [314] = {.count = 1, .reusable = true}, SHIFT(94),
  [316] = {.count = 1, .reusable = true}, SHIFT(95),
  [318] = {.count = 1, .reusable = false}, SHIFT(95),
  [320] = {.count = 1, .reusable = true}, SHIFT(98),
  [322] = {.count = 1, .reusable = false}, REDUCE(sym_function, 3),
  [324] = {.count = 1, .reusable = true}, REDUCE(sym_function, 3),
  [326] = {.count = 1, .reusable = false}, REDUCE(sym_func_body, 1),
  [328] = {.count = 1, .reusable = true}, REDUCE(sym_func_body, 1),
  [330] = {.count = 1, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2),
  [332] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(80),
  [335] = {.count = 1, .reusable = false}, SHIFT(101),
  [337] = {.count = 1, .reusable = false}, REDUCE(aux_sym__block_contents_repeat1, 3, .alias_sequence_id = 2),
  [339] = {.count = 1, .reusable = true}, REDUCE(aux_sym__block_contents_repeat1, 3, .alias_sequence_id = 2),
  [341] = {.count = 1, .reusable = true}, REDUCE(sym_replace_backwards, 1),
  [343] = {.count = 1, .reusable = false}, REDUCE(sym_replace_backwards, 1),
  [345] = {.count = 1, .reusable = true}, REDUCE(sym_replace_forwards, 1),
  [347] = {.count = 1, .reusable = false}, REDUCE(sym_replace_forwards, 1),
  [349] = {.count = 1, .reusable = false}, REDUCE(sym_function, 4),
  [351] = {.count = 1, .reusable = true}, REDUCE(sym_function, 4),
  [353] = {.count = 1, .reusable = true}, REDUCE(sym_block, 5, .alias_sequence_id = 3),
  [355] = {.count = 1, .reusable = false}, REDUCE(sym_block, 5, .alias_sequence_id = 3),
  [357] = {.count = 1, .reusable = true}, SHIFT(113),
  [359] = {.count = 1, .reusable = true}, SHIFT(116),
  [361] = {.count = 1, .reusable = true}, SHIFT(118),
  [363] = {.count = 1, .reusable = true}, REDUCE(sym_block, 6, .alias_sequence_id = 3),
  [365] = {.count = 1, .reusable = false}, REDUCE(sym_block, 6, .alias_sequence_id = 3),
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
