#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 8
#define STATE_COUNT 130
#define SYMBOL_COUNT 81
#define ALIAS_COUNT 1
#define TOKEN_COUNT 51
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  anon_sym_GT = 1,
  anon_sym_import = 2,
  aux_sym_SLASH_BSLASH_DOT_STAR_BSLASH_SLASH_SLASH = 3,
  aux_sym_SLASH_DOT_PLUS_SLASH = 4,
  sym_module_name = 5,
  anon_sym_EQ = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_SEMI = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  anon_sym_LBRACK = 12,
  anon_sym_RBRACK = 13,
  sym__newline = 14,
  sym_block_start = 15,
  sym_block_end = 16,
  anon_sym_EQ_EQ = 17,
  anon_sym_EQ1 = 18,
  anon_sym_EQ2 = 19,
  anon_sym_a_EQ = 20,
  anon_sym_EQa = 21,
  anon_sym_EQ_GT = 22,
  anon_sym_EQ3 = 23,
  anon_sym_EQ4 = 24,
  anon_sym_b_EQ = 25,
  anon_sym_EQb = 26,
  anon_sym_BSLASH = 27,
  anon_sym_1 = 28,
  anon_sym_lambda = 29,
  anon_sym_DASH_GT = 30,
  anon_sym_DOT = 31,
  anon_sym_COLON = 32,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 33,
  aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH = 34,
  aux_sym_SLASH_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH = 35,
  aux_sym_SLASH_DQUOTE_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH = 36,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 37,
  aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH = 38,
  aux_sym_SLASH_SQUOTE_LBRACK_CARET_SQUOTE_RBRACK_SLASH = 39,
  aux_sym_SLASH_SQUOTE_SQUOTE_LBRACK_CARET_SQUOTE_RBRACK_SLASH = 40,
  anon_sym_COLON_EQ = 41,
  anon_sym_SLASH = 42,
  anon_sym_PIPE = 43,
  anon_sym_LT_DASH = 44,
  sym_identifier = 45,
  sym_func_identifier = 46,
  sym_line_comment = 47,
  sym_block_comment = 48,
  sym_integer = 49,
  sym_string = 50,
  sym_program = 51,
  sym_import_statement = 52,
  sym_file_path = 53,
  sym_function_definition = 54,
  sym_block = 55,
  sym_block_tag = 56,
  sym__block_contents = 57,
  sym_block_expression = 58,
  sym__relation_operator = 59,
  sym_expression = 60,
  sym__term = 61,
  sym_group = 62,
  sym_function = 63,
  sym_func_body = 64,
  sym_beta_replacement = 65,
  sym__replacement_indicator = 66,
  sym__terminal = 67,
  sym_alpha_convert = 68,
  sym_beta_reduce = 69,
  sym_lambda = 70,
  sym_func_sep = 71,
  sym_annotation = 72,
  sym_replace_forwards = 73,
  sym_replace_backwards = 74,
  aux_sym_program_repeat1 = 75,
  aux_sym__block_contents_repeat1 = 76,
  aux_sym_block_expression_repeat1 = 77,
  aux_sym_function_repeat1 = 78,
  aux_sym_annotation_repeat1 = 79,
  aux_sym_annotation_repeat2 = 80,
  anon_alias_sym_expression = 81,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_GT] = ">",
  [anon_sym_import] = "import",
  [aux_sym_SLASH_BSLASH_DOT_STAR_BSLASH_SLASH_SLASH] = "/\\.*\\//",
  [aux_sym_SLASH_DOT_PLUS_SLASH] = "/.+/",
  [sym_module_name] = "module_name",
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
  [sym_import_statement] = "import_statement",
  [sym_file_path] = "file_path",
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
  [sym_lambda] = "lambda",
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
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_BSLASH_DOT_STAR_BSLASH_SLASH_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_DOT_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_module_name] = {
    .visible = true,
    .named = true,
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
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_file_path] = {
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
  [sym_lambda] = {
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
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == '\\')
        ADVANCE(47);
      if (lookahead == ']')
        ADVANCE(48);
      if (lookahead == '`')
        ADVANCE(49);
      if (lookahead == 'a')
        ADVANCE(52);
      if (lookahead == 'b')
        ADVANCE(55);
      if (lookahead == '{')
        ADVANCE(57);
      if (lookahead == '|')
        ADVANCE(58);
      if (lookahead == '}')
        ADVANCE(59);
      if (lookahead == 945)
        ADVANCE(60);
      if (lookahead == 946)
        ADVANCE(62);
      if (lookahead == 955)
        ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(65);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
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
      if (lookahead == 945)
        ADVANCE(41);
      if (lookahead == 946)
        ADVANCE(42);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_EQ4);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>')
        ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == '>')
        ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_block_start);
      if (lookahead == '>')
        ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 49:
      if (lookahead == '\\')
        ADVANCE(50);
      if (lookahead == '`')
        ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(49);
      END_STATE();
    case 50:
      if (lookahead == '\n')
        ADVANCE(49);
      if (lookahead == '\r')
        ADVANCE(51);
      if (lookahead != 0)
        ADVANCE(49);
      END_STATE();
    case 51:
      if (lookahead == '\n')
        ADVANCE(49);
      if (lookahead == '\\')
        ADVANCE(50);
      if (lookahead == '`')
        ADVANCE(9);
      if (lookahead != 0)
        ADVANCE(49);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_module_name);
      if (lookahead == '=')
        ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_a_EQ);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_module_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_module_name);
      if (lookahead == '=')
        ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_b_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 60:
      if (lookahead == '=')
        ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_EQ1);
      END_STATE();
    case 62:
      if (lookahead == '=')
        ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_EQ3);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_module_name);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_module_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_module_name);
      if (lookahead == '_')
        ADVANCE(66);
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
        ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(68);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(76);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(77);
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
      ACCEPT_TOKEN(sym_func_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(77);
      END_STATE();
    case 78:
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
        ADVANCE(46);
      if (lookahead == '\\')
        ADVANCE(47);
      if (lookahead == '`')
        ADVANCE(49);
      if (lookahead == 955)
        ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(78);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(76);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(77);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(79);
      END_STATE();
    case 80:
      if (lookahead == '-')
        ADVANCE(74);
      if (lookahead == '.')
        ADVANCE(81);
      if (lookahead == '/')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(66);
      END_STATE();
    case 81:
      if (lookahead == '.')
        ADVANCE(81);
      if (lookahead == '/')
        ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_DOT_STAR_BSLASH_SLASH_SLASH);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_DOT_STAR_BSLASH_SLASH_SLASH);
      if (lookahead == '*')
        ADVANCE(30);
      END_STATE();
    case 84:
      if (lookahead == '\n')
        ADVANCE(69);
      if (lookahead == '\"')
        ADVANCE(85);
      if (lookahead == '\'')
        ADVANCE(87);
      if (lookahead == '(')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(74);
      if (lookahead == '/')
        ADVANCE(75);
      if (lookahead == '<')
        ADVANCE(89);
      if (lookahead == '=')
        ADVANCE(90);
      if (lookahead == '\\')
        ADVANCE(47);
      if (lookahead == '`')
        ADVANCE(49);
      if (lookahead == 'a')
        ADVANCE(94);
      if (lookahead == 'b')
        ADVANCE(95);
      if (lookahead == '{')
        ADVANCE(57);
      if (lookahead == 945)
        ADVANCE(60);
      if (lookahead == 946)
        ADVANCE(62);
      if (lookahead == 955)
        ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(84);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(79);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(76);
      END_STATE();
    case 85:
      if (lookahead == '\"')
        ADVANCE(86);
      if (lookahead == '\\')
        ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(8);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\"')
        ADVANCE(5);
      END_STATE();
    case 87:
      if (lookahead == '\'')
        ADVANCE(88);
      if (lookahead == '\\')
        ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(19);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\'')
        ADVANCE(16);
      END_STATE();
    case 89:
      if (lookahead == '<')
        ADVANCE(37);
      END_STATE();
    case 90:
      if (lookahead == '=')
        ADVANCE(40);
      if (lookahead == '>')
        ADVANCE(91);
      if (lookahead == 'a')
        ADVANCE(92);
      if (lookahead == 'b')
        ADVANCE(93);
      if (lookahead == 945)
        ADVANCE(41);
      if (lookahead == 946)
        ADVANCE(42);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_EQa);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_EQb);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '=')
        ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(77);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '=')
        ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(77);
      END_STATE();
    case 96:
      if (lookahead == '\"')
        ADVANCE(97);
      if (lookahead == '-')
        ADVANCE(99);
      if (lookahead == '/')
        ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(101);
      if (lookahead != 0)
        ADVANCE(101);
      END_STATE();
    case 97:
      if (lookahead == '\"')
        ADVANCE(98);
      if (lookahead != 0)
        ADVANCE(3);
      END_STATE();
    case 98:
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(6);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(26);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead == '*')
        ADVANCE(30);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      END_STATE();
    case 102:
      if (lookahead == '\'')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(105);
      if (lookahead == '/')
        ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(107);
      if (lookahead != 0)
        ADVANCE(107);
      END_STATE();
    case 103:
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead != 0)
        ADVANCE(14);
      END_STATE();
    case 104:
      if (lookahead == '\'')
        ADVANCE(16);
      if (lookahead != 0)
        ADVANCE(17);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(26);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      if (lookahead == '*')
        ADVANCE(30);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      END_STATE();
    case 108:
      if (lookahead == '-')
        ADVANCE(74);
      if (lookahead == '/')
        ADVANCE(75);
      if (lookahead == '=')
        ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 110:
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
        SKIP(110);
      END_STATE();
    case 111:
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
        ADVANCE(46);
      if (lookahead == '\\')
        ADVANCE(47);
      if (lookahead == '`')
        ADVANCE(49);
      if (lookahead == 955)
        ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(111);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(76);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(77);
      END_STATE();
    case 112:
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
        SKIP(112);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(77);
      END_STATE();
    case 113:
      if (lookahead == '\n')
        SKIP(113);
      if (lookahead == '-')
        ADVANCE(114);
      if (lookahead == '/')
        ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(120);
      if (lookahead != 0)
        ADVANCE(116);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_PLUS_SLASH);
      if (lookahead == '-')
        ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(116);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_PLUS_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_PLUS_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_PLUS_SLASH);
      if (lookahead == '*')
        ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(116);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(30);
      if (lookahead == '*')
        ADVANCE(119);
      if (lookahead != 0)
        ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(30);
      if (lookahead == '*')
        ADVANCE(119);
      if (lookahead == '/')
        ADVANCE(116);
      if (lookahead != 0)
        ADVANCE(118);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_PLUS_SLASH);
      if (lookahead == '-')
        ADVANCE(114);
      if (lookahead == '/')
        ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(116);
      END_STATE();
    case 121:
      if (lookahead == '-')
        ADVANCE(74);
      if (lookahead == '/')
        ADVANCE(75);
      if (lookahead == '<')
        ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(121);
      END_STATE();
    case 122:
      if (lookahead == '\n')
        ADVANCE(69);
      if (lookahead == '\"')
        ADVANCE(85);
      if (lookahead == '\'')
        ADVANCE(87);
      if (lookahead == '(')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(74);
      if (lookahead == '/')
        ADVANCE(75);
      if (lookahead == ';')
        ADVANCE(34);
      if (lookahead == '<')
        ADVANCE(89);
      if (lookahead == '=')
        ADVANCE(90);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == '\\')
        ADVANCE(47);
      if (lookahead == '`')
        ADVANCE(49);
      if (lookahead == 'a')
        ADVANCE(94);
      if (lookahead == 'b')
        ADVANCE(95);
      if (lookahead == 945)
        ADVANCE(60);
      if (lookahead == 946)
        ADVANCE(62);
      if (lookahead == 955)
        ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(122);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(79);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(76);
      END_STATE();
    case 123:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(69);
      if (lookahead == '\"')
        ADVANCE(85);
      if (lookahead == '\'')
        ADVANCE(87);
      if (lookahead == '(')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(74);
      if (lookahead == '/')
        ADVANCE(75);
      if (lookahead == ';')
        ADVANCE(34);
      if (lookahead == '>')
        ADVANCE(43);
      if (lookahead == '\\')
        ADVANCE(47);
      if (lookahead == '`')
        ADVANCE(49);
      if (lookahead == 955)
        ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(123);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(76);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(77);
      END_STATE();
    case 124:
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
        ADVANCE(125);
      if (lookahead == '<')
        ADVANCE(127);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == '\\')
        ADVANCE(47);
      if (lookahead == ']')
        ADVANCE(48);
      if (lookahead == '`')
        ADVANCE(49);
      if (lookahead == '|')
        ADVANCE(58);
      if (lookahead == 955)
        ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(124);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(76);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(77);
      END_STATE();
    case 125:
      if (lookahead == '=')
        ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 127:
      if (lookahead == '-')
        ADVANCE(36);
      END_STATE();
    case 128:
      if (lookahead == '-')
        ADVANCE(74);
      if (lookahead == '/')
        ADVANCE(75);
      if (lookahead == '}')
        ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(128);
      END_STATE();
    case 129:
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
        ADVANCE(125);
      if (lookahead == '<')
        ADVANCE(127);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == '\\')
        ADVANCE(47);
      if (lookahead == '`')
        ADVANCE(49);
      if (lookahead == '|')
        ADVANCE(58);
      if (lookahead == 955)
        ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(129);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(76);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(77);
      END_STATE();
    case 130:
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
        ADVANCE(46);
      if (lookahead == '\\')
        ADVANCE(47);
      if (lookahead == ']')
        ADVANCE(48);
      if (lookahead == '`')
        ADVANCE(49);
      if (lookahead == 955)
        ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(130);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(76);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(77);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 'i')
        ADVANCE(1);
      if (lookahead == 'l')
        ADVANCE(7);
      END_STATE();
    case 1:
      if (lookahead == 'm')
        ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == 'p')
        ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == 'o')
        ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == 'r')
        ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == 't')
        ADVANCE(6);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 7:
      if (lookahead == 'a')
        ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 'm')
        ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 'b')
        ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 'd')
        ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == 'a')
        ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_lambda);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 68},
  [2] = {.lex_state = 78},
  [3] = {.lex_state = 80},
  [4] = {.lex_state = 84},
  [5] = {.lex_state = 96},
  [6] = {.lex_state = 102},
  [7] = {.lex_state = 108},
  [8] = {.lex_state = 110},
  [9] = {.lex_state = 68},
  [10] = {.lex_state = 68},
  [11] = {.lex_state = 111},
  [12] = {.lex_state = 112},
  [13] = {.lex_state = 68},
  [14] = {.lex_state = 78},
  [15] = {.lex_state = 112},
  [16] = {.lex_state = 78},
  [17] = {.lex_state = 113},
  [18] = {.lex_state = 68},
  [19] = {.lex_state = 111},
  [20] = {.lex_state = 111},
  [21] = {.lex_state = 68},
  [22] = {.lex_state = 111},
  [23] = {.lex_state = 111},
  [24] = {.lex_state = 96},
  [25] = {.lex_state = 102},
  [26] = {.lex_state = 84},
  [27] = {.lex_state = 121},
  [28] = {.lex_state = 122},
  [29] = {.lex_state = 111},
  [30] = {.lex_state = 122},
  [31] = {.lex_state = 112},
  [32] = {.lex_state = 84},
  [33] = {.lex_state = 122},
  [34] = {.lex_state = 68},
  [35] = {.lex_state = 96},
  [36] = {.lex_state = 102},
  [37] = {.lex_state = 123},
  [38] = {.lex_state = 68},
  [39] = {.lex_state = 111},
  [40] = {.lex_state = 78},
  [41] = {.lex_state = 124},
  [42] = {.lex_state = 112},
  [43] = {.lex_state = 111},
  [44] = {.lex_state = 111},
  [45] = {.lex_state = 78},
  [46] = {.lex_state = 78},
  [47] = {.lex_state = 78},
  [48] = {.lex_state = 112},
  [49] = {.lex_state = 68},
  [50] = {.lex_state = 78},
  [51] = {.lex_state = 68},
  [52] = {.lex_state = 128},
  [53] = {.lex_state = 122},
  [54] = {.lex_state = 111},
  [55] = {.lex_state = 84},
  [56] = {.lex_state = 96},
  [57] = {.lex_state = 102},
  [58] = {.lex_state = 68},
  [59] = {.lex_state = 121},
  [60] = {.lex_state = 84},
  [61] = {.lex_state = 122},
  [62] = {.lex_state = 111},
  [63] = {.lex_state = 122},
  [64] = {.lex_state = 122},
  [65] = {.lex_state = 122},
  [66] = {.lex_state = 112},
  [67] = {.lex_state = 84},
  [68] = {.lex_state = 122},
  [69] = {.lex_state = 68},
  [70] = {.lex_state = 96},
  [71] = {.lex_state = 102},
  [72] = {.lex_state = 68},
  [73] = {.lex_state = 124},
  [74] = {.lex_state = 111},
  [75] = {.lex_state = 111},
  [76] = {.lex_state = 124},
  [77] = {.lex_state = 124},
  [78] = {.lex_state = 111},
  [79] = {.lex_state = 112},
  [80] = {.lex_state = 78},
  [81] = {.lex_state = 111},
  [82] = {.lex_state = 129},
  [83] = {.lex_state = 112},
  [84] = {.lex_state = 78},
  [85] = {.lex_state = 78},
  [86] = {.lex_state = 78},
  [87] = {.lex_state = 112},
  [88] = {.lex_state = 84},
  [89] = {.lex_state = 122},
  [90] = {.lex_state = 84},
  [91] = {.lex_state = 68},
  [92] = {.lex_state = 84},
  [93] = {.lex_state = 129},
  [94] = {.lex_state = 122},
  [95] = {.lex_state = 122},
  [96] = {.lex_state = 122},
  [97] = {.lex_state = 124},
  [98] = {.lex_state = 129},
  [99] = {.lex_state = 124},
  [100] = {.lex_state = 111},
  [101] = {.lex_state = 111},
  [102] = {.lex_state = 111},
  [103] = {.lex_state = 111},
  [104] = {.lex_state = 111},
  [105] = {.lex_state = 129},
  [106] = {.lex_state = 112},
  [107] = {.lex_state = 78},
  [108] = {.lex_state = 78},
  [109] = {.lex_state = 111},
  [110] = {.lex_state = 122},
  [111] = {.lex_state = 122},
  [112] = {.lex_state = 111},
  [113] = {.lex_state = 111},
  [114] = {.lex_state = 124},
  [115] = {.lex_state = 130},
  [116] = {.lex_state = 112},
  [117] = {.lex_state = 129},
  [118] = {.lex_state = 129},
  [119] = {.lex_state = 130},
  [120] = {.lex_state = 130},
  [121] = {.lex_state = 78},
  [122] = {.lex_state = 130},
  [123] = {.lex_state = 112},
  [124] = {.lex_state = 129},
  [125] = {.lex_state = 122},
  [126] = {.lex_state = 124},
  [127] = {.lex_state = 130},
  [128] = {.lex_state = 130},
  [129] = {.lex_state = 130},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(3),
    [anon_sym_import] = ACTIONS(3),
    [sym_module_name] = ACTIONS(3),
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
    [sym_func_identifier] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(1),
    [sym_block_comment] = ACTIONS(1),
    [sym_integer] = ACTIONS(3),
    [sym_string] = ACTIONS(3),
  },
  [1] = {
    [sym_program] = STATE(8),
    [sym_import_statement] = STATE(9),
    [sym_function_definition] = STATE(9),
    [sym_block] = STATE(9),
    [sym_annotation] = STATE(9),
    [aux_sym_program_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [sym__newline] = ACTIONS(11),
    [sym_block_start] = ACTIONS(13),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(17),
    [sym_func_identifier] = ACTIONS(19),
    [sym_line_comment] = ACTIONS(21),
    [sym_block_comment] = ACTIONS(21),
  },
  [2] = {
    [sym_expression] = STATE(13),
    [sym__term] = STATE(16),
    [sym_group] = STATE(14),
    [sym_function] = STATE(14),
    [sym__terminal] = STATE(14),
    [sym_lambda] = STATE(15),
    [aux_sym_block_expression_repeat1] = STATE(16),
    [anon_sym_SEMI] = ACTIONS(24),
    [anon_sym_LPAREN] = ACTIONS(26),
    [sym__newline] = ACTIONS(28),
    [anon_sym_BSLASH] = ACTIONS(30),
    [anon_sym_1] = ACTIONS(30),
    [anon_sym_lambda] = ACTIONS(30),
    [sym_identifier] = ACTIONS(32),
    [sym_func_identifier] = ACTIONS(32),
    [sym_line_comment] = ACTIONS(34),
    [sym_block_comment] = ACTIONS(34),
    [sym_integer] = ACTIONS(32),
    [sym_string] = ACTIONS(32),
  },
  [3] = {
    [sym_file_path] = STATE(18),
    [aux_sym_SLASH_BSLASH_DOT_STAR_BSLASH_SLASH_SLASH] = ACTIONS(36),
    [sym_module_name] = ACTIONS(38),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
  },
  [4] = {
    [sym_block_tag] = STATE(26),
    [sym__block_contents] = STATE(27),
    [sym_block_expression] = STATE(28),
    [sym__relation_operator] = STATE(29),
    [sym__term] = STATE(33),
    [sym_group] = STATE(30),
    [sym_function] = STATE(30),
    [sym__terminal] = STATE(30),
    [sym_alpha_convert] = STATE(29),
    [sym_beta_reduce] = STATE(29),
    [sym_lambda] = STATE(31),
    [sym_annotation] = STATE(32),
    [aux_sym__block_contents_repeat1] = STATE(32),
    [aux_sym_block_expression_repeat1] = STATE(33),
    [anon_sym_LBRACE] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(44),
    [sym__newline] = ACTIONS(46),
    [sym_block_end] = ACTIONS(48),
    [anon_sym_EQ_EQ] = ACTIONS(50),
    [anon_sym_EQ1] = ACTIONS(50),
    [anon_sym_EQ2] = ACTIONS(50),
    [anon_sym_a_EQ] = ACTIONS(50),
    [anon_sym_EQa] = ACTIONS(50),
    [anon_sym_EQ_GT] = ACTIONS(52),
    [anon_sym_EQ3] = ACTIONS(52),
    [anon_sym_EQ4] = ACTIONS(52),
    [anon_sym_b_EQ] = ACTIONS(52),
    [anon_sym_EQb] = ACTIONS(52),
    [anon_sym_BSLASH] = ACTIONS(30),
    [anon_sym_1] = ACTIONS(30),
    [anon_sym_lambda] = ACTIONS(30),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(54),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(56),
    [sym_identifier] = ACTIONS(58),
    [sym_func_identifier] = ACTIONS(58),
    [sym_line_comment] = ACTIONS(34),
    [sym_block_comment] = ACTIONS(34),
    [sym_integer] = ACTIONS(58),
    [sym_string] = ACTIONS(58),
  },
  [5] = {
    [aux_sym_annotation_repeat1] = STATE(35),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(60),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_DQUOTE_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(62),
    [sym_line_comment] = ACTIONS(34),
    [sym_block_comment] = ACTIONS(34),
  },
  [6] = {
    [aux_sym_annotation_repeat2] = STATE(36),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(60),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_SQUOTE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_SQUOTE_SQUOTE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(64),
    [sym_line_comment] = ACTIONS(34),
    [sym_block_comment] = ACTIONS(34),
  },
  [7] = {
    [anon_sym_EQ] = ACTIONS(66),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(68),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
  },
  [9] = {
    [sym_import_statement] = STATE(38),
    [sym_function_definition] = STATE(38),
    [sym_block] = STATE(38),
    [sym_annotation] = STATE(38),
    [aux_sym_program_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(70),
    [anon_sym_GT] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [sym__newline] = ACTIONS(72),
    [sym_block_start] = ACTIONS(13),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(17),
    [sym_func_identifier] = ACTIONS(19),
    [sym_line_comment] = ACTIONS(74),
    [sym_block_comment] = ACTIONS(74),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_import] = ACTIONS(79),
    [sym__newline] = ACTIONS(77),
    [sym_block_start] = ACTIONS(79),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(79),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(79),
    [sym_func_identifier] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(79),
    [sym_block_comment] = ACTIONS(79),
  },
  [11] = {
    [sym__term] = STATE(43),
    [sym_group] = STATE(41),
    [sym_function] = STATE(41),
    [sym__terminal] = STATE(41),
    [sym_lambda] = STATE(42),
    [aux_sym_block_expression_repeat1] = STATE(43),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(83),
    [anon_sym_BSLASH] = ACTIONS(85),
    [anon_sym_1] = ACTIONS(85),
    [anon_sym_lambda] = ACTIONS(30),
    [sym_identifier] = ACTIONS(87),
    [sym_func_identifier] = ACTIONS(89),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
    [sym_integer] = ACTIONS(89),
    [sym_string] = ACTIONS(89),
  },
  [12] = {
    [anon_sym_DASH_GT] = ACTIONS(91),
    [anon_sym_DOT] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(91),
    [sym_identifier] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(95),
    [anon_sym_import] = ACTIONS(95),
    [sym__newline] = ACTIONS(93),
    [sym_block_start] = ACTIONS(95),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(95),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(95),
    [sym_func_identifier] = ACTIONS(95),
    [sym_line_comment] = ACTIONS(95),
    [sym_block_comment] = ACTIONS(95),
  },
  [14] = {
    [sym_beta_replacement] = STATE(45),
    [anon_sym_SEMI] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(99),
    [sym__newline] = ACTIONS(101),
    [anon_sym_BSLASH] = ACTIONS(97),
    [anon_sym_1] = ACTIONS(97),
    [anon_sym_lambda] = ACTIONS(97),
    [sym_identifier] = ACTIONS(97),
    [sym_func_identifier] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(34),
    [sym_block_comment] = ACTIONS(34),
    [sym_integer] = ACTIONS(97),
    [sym_string] = ACTIONS(97),
  },
  [15] = {
    [sym_func_sep] = STATE(47),
    [aux_sym_function_repeat1] = STATE(48),
    [anon_sym_DASH_GT] = ACTIONS(103),
    [anon_sym_DOT] = ACTIONS(103),
    [anon_sym_COLON] = ACTIONS(103),
    [sym_identifier] = ACTIONS(105),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
  },
  [16] = {
    [sym__term] = STATE(50),
    [sym_group] = STATE(14),
    [sym_function] = STATE(14),
    [sym__terminal] = STATE(14),
    [sym_lambda] = STATE(15),
    [aux_sym_block_expression_repeat1] = STATE(50),
    [anon_sym_SEMI] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(26),
    [sym__newline] = ACTIONS(109),
    [anon_sym_BSLASH] = ACTIONS(30),
    [anon_sym_1] = ACTIONS(30),
    [anon_sym_lambda] = ACTIONS(30),
    [sym_identifier] = ACTIONS(32),
    [sym_func_identifier] = ACTIONS(32),
    [sym_line_comment] = ACTIONS(34),
    [sym_block_comment] = ACTIONS(34),
    [sym_integer] = ACTIONS(32),
    [sym_string] = ACTIONS(32),
  },
  [17] = {
    [aux_sym_SLASH_DOT_PLUS_SLASH] = ACTIONS(111),
    [sym_line_comment] = ACTIONS(34),
    [sym_block_comment] = ACTIONS(34),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(113),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_import] = ACTIONS(115),
    [sym__newline] = ACTIONS(113),
    [sym_block_start] = ACTIONS(115),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(115),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(115),
    [sym_func_identifier] = ACTIONS(115),
    [sym_line_comment] = ACTIONS(115),
    [sym_block_comment] = ACTIONS(115),
  },
  [19] = {
    [sym_identifier] = ACTIONS(117),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
  },
  [20] = {
    [sym__term] = STATE(54),
    [sym_group] = STATE(41),
    [sym_function] = STATE(41),
    [sym__terminal] = STATE(41),
    [sym_lambda] = STATE(42),
    [aux_sym_block_expression_repeat1] = STATE(54),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(119),
    [anon_sym_BSLASH] = ACTIONS(85),
    [anon_sym_1] = ACTIONS(85),
    [anon_sym_lambda] = ACTIONS(30),
    [sym_identifier] = ACTIONS(87),
    [sym_func_identifier] = ACTIONS(89),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
    [sym_integer] = ACTIONS(89),
    [sym_string] = ACTIONS(89),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(121),
    [anon_sym_GT] = ACTIONS(123),
    [anon_sym_import] = ACTIONS(123),
    [sym__newline] = ACTIONS(121),
    [sym_block_start] = ACTIONS(123),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(123),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(123),
    [sym_func_identifier] = ACTIONS(123),
    [sym_line_comment] = ACTIONS(123),
    [sym_block_comment] = ACTIONS(123),
  },
  [22] = {
    [anon_sym_LPAREN] = ACTIONS(125),
    [anon_sym_BSLASH] = ACTIONS(125),
    [anon_sym_1] = ACTIONS(125),
    [anon_sym_lambda] = ACTIONS(127),
    [sym_identifier] = ACTIONS(127),
    [sym_func_identifier] = ACTIONS(125),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
    [sym_integer] = ACTIONS(125),
    [sym_string] = ACTIONS(125),
  },
  [23] = {
    [anon_sym_LPAREN] = ACTIONS(129),
    [anon_sym_BSLASH] = ACTIONS(129),
    [anon_sym_1] = ACTIONS(129),
    [anon_sym_lambda] = ACTIONS(131),
    [sym_identifier] = ACTIONS(131),
    [sym_func_identifier] = ACTIONS(129),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
    [sym_integer] = ACTIONS(129),
    [sym_string] = ACTIONS(129),
  },
  [24] = {
    [aux_sym_annotation_repeat1] = STATE(56),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(133),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(135),
    [aux_sym_SLASH_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(135),
    [aux_sym_SLASH_DQUOTE_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(135),
    [sym_line_comment] = ACTIONS(34),
    [sym_block_comment] = ACTIONS(34),
  },
  [25] = {
    [aux_sym_annotation_repeat2] = STATE(57),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(133),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(137),
    [aux_sym_SLASH_SQUOTE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(137),
    [aux_sym_SLASH_SQUOTE_SQUOTE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(137),
    [sym_line_comment] = ACTIONS(34),
    [sym_block_comment] = ACTIONS(34),
  },
  [26] = {
    [sym__block_contents] = STATE(59),
    [sym_block_expression] = STATE(28),
    [sym__relation_operator] = STATE(29),
    [sym__term] = STATE(33),
    [sym_group] = STATE(30),
    [sym_function] = STATE(30),
    [sym__terminal] = STATE(30),
    [sym_alpha_convert] = STATE(29),
    [sym_beta_reduce] = STATE(29),
    [sym_lambda] = STATE(31),
    [sym_annotation] = STATE(32),
    [aux_sym__block_contents_repeat1] = STATE(32),
    [aux_sym_block_expression_repeat1] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(44),
    [sym__newline] = ACTIONS(46),
    [sym_block_end] = ACTIONS(139),
    [anon_sym_EQ_EQ] = ACTIONS(50),
    [anon_sym_EQ1] = ACTIONS(50),
    [anon_sym_EQ2] = ACTIONS(50),
    [anon_sym_a_EQ] = ACTIONS(50),
    [anon_sym_EQa] = ACTIONS(50),
    [anon_sym_EQ_GT] = ACTIONS(52),
    [anon_sym_EQ3] = ACTIONS(52),
    [anon_sym_EQ4] = ACTIONS(52),
    [anon_sym_b_EQ] = ACTIONS(52),
    [anon_sym_EQb] = ACTIONS(52),
    [anon_sym_BSLASH] = ACTIONS(30),
    [anon_sym_1] = ACTIONS(30),
    [anon_sym_lambda] = ACTIONS(30),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(54),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(56),
    [sym_identifier] = ACTIONS(58),
    [sym_func_identifier] = ACTIONS(58),
    [sym_line_comment] = ACTIONS(34),
    [sym_block_comment] = ACTIONS(34),
    [sym_integer] = ACTIONS(58),
    [sym_string] = ACTIONS(58),
  },
  [27] = {
    [sym_block_end] = ACTIONS(141),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
  },
  [28] = {
    [anon_sym_SEMI] = ACTIONS(143),
    [anon_sym_LPAREN] = ACTIONS(145),
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
    [anon_sym_BSLASH] = ACTIONS(145),
    [anon_sym_1] = ACTIONS(145),
    [anon_sym_lambda] = ACTIONS(145),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(145),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(145),
    [sym_identifier] = ACTIONS(145),
    [sym_func_identifier] = ACTIONS(145),
    [sym_line_comment] = ACTIONS(34),
    [sym_block_comment] = ACTIONS(34),
    [sym_integer] = ACTIONS(145),
    [sym_string] = ACTIONS(145),
  },
  [29] = {
    [sym_block_expression] = STATE(61),
    [sym__term] = STATE(33),
    [sym_group] = STATE(30),
    [sym_function] = STATE(30),
    [sym__terminal] = STATE(30),
    [sym_lambda] = STATE(31),
    [aux_sym_block_expression_repeat1] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_BSLASH] = ACTIONS(85),
    [anon_sym_1] = ACTIONS(85),
    [anon_sym_lambda] = ACTIONS(30),
    [sym_identifier] = ACTIONS(58),
    [sym_func_identifier] = ACTIONS(151),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
    [sym_integer] = ACTIONS(151),
    [sym_string] = ACTIONS(151),
  },
  [30] = {
    [sym_beta_replacement] = STATE(63),
    [anon_sym_SEMI] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(153),
    [sym__newline] = ACTIONS(101),
    [sym_block_end] = ACTIONS(97),
    [anon_sym_EQ_EQ] = ACTIONS(97),
    [anon_sym_EQ1] = ACTIONS(97),
    [anon_sym_EQ2] = ACTIONS(97),
    [anon_sym_a_EQ] = ACTIONS(97),
    [anon_sym_EQa] = ACTIONS(97),
    [anon_sym_EQ_GT] = ACTIONS(97),
    [anon_sym_EQ3] = ACTIONS(97),
    [anon_sym_EQ4] = ACTIONS(97),
    [anon_sym_b_EQ] = ACTIONS(97),
    [anon_sym_EQb] = ACTIONS(97),
    [anon_sym_BSLASH] = ACTIONS(97),
    [anon_sym_1] = ACTIONS(97),
    [anon_sym_lambda] = ACTIONS(97),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(97),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(97),
    [sym_identifier] = ACTIONS(97),
    [sym_func_identifier] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(34),
    [sym_block_comment] = ACTIONS(34),
    [sym_integer] = ACTIONS(97),
    [sym_string] = ACTIONS(97),
  },
  [31] = {
    [sym_func_sep] = STATE(65),
    [aux_sym_function_repeat1] = STATE(66),
    [anon_sym_DASH_GT] = ACTIONS(155),
    [anon_sym_DOT] = ACTIONS(155),
    [anon_sym_COLON] = ACTIONS(155),
    [sym_identifier] = ACTIONS(157),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
  },
  [32] = {
    [sym_block_expression] = STATE(28),
    [sym__relation_operator] = STATE(29),
    [sym__term] = STATE(33),
    [sym_group] = STATE(30),
    [sym_function] = STATE(30),
    [sym__terminal] = STATE(30),
    [sym_alpha_convert] = STATE(29),
    [sym_beta_reduce] = STATE(29),
    [sym_lambda] = STATE(31),
    [sym_annotation] = STATE(67),
    [aux_sym__block_contents_repeat1] = STATE(67),
    [aux_sym_block_expression_repeat1] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(44),
    [sym__newline] = ACTIONS(159),
    [sym_block_end] = ACTIONS(161),
    [anon_sym_EQ_EQ] = ACTIONS(50),
    [anon_sym_EQ1] = ACTIONS(50),
    [anon_sym_EQ2] = ACTIONS(50),
    [anon_sym_a_EQ] = ACTIONS(50),
    [anon_sym_EQa] = ACTIONS(50),
    [anon_sym_EQ_GT] = ACTIONS(52),
    [anon_sym_EQ3] = ACTIONS(52),
    [anon_sym_EQ4] = ACTIONS(52),
    [anon_sym_b_EQ] = ACTIONS(52),
    [anon_sym_EQb] = ACTIONS(52),
    [anon_sym_BSLASH] = ACTIONS(30),
    [anon_sym_1] = ACTIONS(30),
    [anon_sym_lambda] = ACTIONS(30),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(54),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(56),
    [sym_identifier] = ACTIONS(58),
    [sym_func_identifier] = ACTIONS(58),
    [sym_line_comment] = ACTIONS(34),
    [sym_block_comment] = ACTIONS(34),
    [sym_integer] = ACTIONS(58),
    [sym_string] = ACTIONS(58),
  },
  [33] = {
    [sym__term] = STATE(68),
    [sym_group] = STATE(30),
    [sym_function] = STATE(30),
    [sym__terminal] = STATE(30),
    [sym_lambda] = STATE(31),
    [aux_sym_block_expression_repeat1] = STATE(68),
    [anon_sym_SEMI] = ACTIONS(163),
    [anon_sym_LPAREN] = ACTIONS(44),
    [sym__newline] = ACTIONS(165),
    [sym_block_end] = ACTIONS(163),
    [anon_sym_EQ_EQ] = ACTIONS(163),
    [anon_sym_EQ1] = ACTIONS(163),
    [anon_sym_EQ2] = ACTIONS(163),
    [anon_sym_a_EQ] = ACTIONS(163),
    [anon_sym_EQa] = ACTIONS(163),
    [anon_sym_EQ_GT] = ACTIONS(163),
    [anon_sym_EQ3] = ACTIONS(163),
    [anon_sym_EQ4] = ACTIONS(163),
    [anon_sym_b_EQ] = ACTIONS(163),
    [anon_sym_EQb] = ACTIONS(163),
    [anon_sym_BSLASH] = ACTIONS(30),
    [anon_sym_1] = ACTIONS(30),
    [anon_sym_lambda] = ACTIONS(30),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(163),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(163),
    [sym_identifier] = ACTIONS(58),
    [sym_func_identifier] = ACTIONS(58),
    [sym_line_comment] = ACTIONS(34),
    [sym_block_comment] = ACTIONS(34),
    [sym_integer] = ACTIONS(58),
    [sym_string] = ACTIONS(58),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [anon_sym_GT] = ACTIONS(169),
    [anon_sym_import] = ACTIONS(169),
    [sym__newline] = ACTIONS(167),
    [sym_block_start] = ACTIONS(169),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(169),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(169),
    [sym_func_identifier] = ACTIONS(169),
    [sym_line_comment] = ACTIONS(169),
    [sym_block_comment] = ACTIONS(169),
  },
  [35] = {
    [aux_sym_annotation_repeat1] = STATE(70),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(171),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(173),
    [aux_sym_SLASH_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(173),
    [aux_sym_SLASH_DQUOTE_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(173),
    [sym_line_comment] = ACTIONS(34),
    [sym_block_comment] = ACTIONS(34),
  },
  [36] = {
    [aux_sym_annotation_repeat2] = STATE(71),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(171),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(175),
    [aux_sym_SLASH_SQUOTE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(175),
    [aux_sym_SLASH_SQUOTE_SQUOTE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(175),
    [sym_line_comment] = ACTIONS(34),
    [sym_block_comment] = ACTIONS(34),
  },
  [37] = {
    [sym_expression] = STATE(72),
    [sym__term] = STATE(16),
    [sym_group] = STATE(14),
    [sym_function] = STATE(14),
    [sym__terminal] = STATE(14),
    [sym_lambda] = STATE(15),
    [aux_sym_block_expression_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(177),
    [anon_sym_GT] = ACTIONS(179),
    [anon_sym_import] = ACTIONS(179),
    [anon_sym_SEMI] = ACTIONS(24),
    [anon_sym_LPAREN] = ACTIONS(26),
    [sym__newline] = ACTIONS(28),
    [sym_block_start] = ACTIONS(179),
    [anon_sym_BSLASH] = ACTIONS(30),
    [anon_sym_1] = ACTIONS(30),
    [anon_sym_lambda] = ACTIONS(30),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(179),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(179),
    [sym_identifier] = ACTIONS(32),
    [sym_func_identifier] = ACTIONS(32),
    [sym_line_comment] = ACTIONS(181),
    [sym_block_comment] = ACTIONS(181),
    [sym_integer] = ACTIONS(32),
    [sym_string] = ACTIONS(32),
  },
  [38] = {
    [sym_import_statement] = STATE(38),
    [sym_function_definition] = STATE(38),
    [sym_block] = STATE(38),
    [sym_annotation] = STATE(38),
    [aux_sym_program_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(184),
    [anon_sym_import] = ACTIONS(187),
    [sym__newline] = ACTIONS(190),
    [sym_block_start] = ACTIONS(193),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(196),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(199),
    [sym_func_identifier] = ACTIONS(202),
    [sym_line_comment] = ACTIONS(205),
    [sym_block_comment] = ACTIONS(205),
  },
  [39] = {
    [sym__term] = STATE(74),
    [sym_group] = STATE(41),
    [sym_function] = STATE(41),
    [sym__terminal] = STATE(41),
    [sym_lambda] = STATE(42),
    [aux_sym_block_expression_repeat1] = STATE(74),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(209),
    [anon_sym_BSLASH] = ACTIONS(85),
    [anon_sym_1] = ACTIONS(85),
    [anon_sym_lambda] = ACTIONS(30),
    [sym_identifier] = ACTIONS(87),
    [sym_func_identifier] = ACTIONS(89),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
    [sym_integer] = ACTIONS(89),
    [sym_string] = ACTIONS(89),
  },
  [40] = {
    [anon_sym_SEMI] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(211),
    [anon_sym_LBRACK] = ACTIONS(211),
    [sym__newline] = ACTIONS(213),
    [anon_sym_BSLASH] = ACTIONS(211),
    [anon_sym_1] = ACTIONS(211),
    [anon_sym_lambda] = ACTIONS(211),
    [sym_identifier] = ACTIONS(211),
    [sym_func_identifier] = ACTIONS(211),
    [sym_line_comment] = ACTIONS(34),
    [sym_block_comment] = ACTIONS(34),
    [sym_integer] = ACTIONS(211),
    [sym_string] = ACTIONS(211),
  },
  [41] = {
    [sym_beta_replacement] = STATE(76),
    [anon_sym_LPAREN] = ACTIONS(101),
    [anon_sym_RPAREN] = ACTIONS(101),
    [anon_sym_LBRACK] = ACTIONS(215),
    [anon_sym_RBRACK] = ACTIONS(101),
    [anon_sym_BSLASH] = ACTIONS(101),
    [anon_sym_1] = ACTIONS(101),
    [anon_sym_lambda] = ACTIONS(97),
    [anon_sym_DASH_GT] = ACTIONS(101),
    [anon_sym_COLON_EQ] = ACTIONS(101),
    [anon_sym_SLASH] = ACTIONS(97),
    [anon_sym_PIPE] = ACTIONS(101),
    [anon_sym_LT_DASH] = ACTIONS(101),
    [sym_identifier] = ACTIONS(97),
    [sym_func_identifier] = ACTIONS(101),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
    [sym_integer] = ACTIONS(101),
    [sym_string] = ACTIONS(101),
  },
  [42] = {
    [sym_func_sep] = STATE(78),
    [aux_sym_function_repeat1] = STATE(79),
    [anon_sym_DASH_GT] = ACTIONS(217),
    [anon_sym_DOT] = ACTIONS(217),
    [anon_sym_COLON] = ACTIONS(217),
    [sym_identifier] = ACTIONS(219),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
  },
  [43] = {
    [sym__term] = STATE(81),
    [sym_group] = STATE(41),
    [sym_function] = STATE(41),
    [sym__terminal] = STATE(41),
    [sym_lambda] = STATE(42),
    [aux_sym_block_expression_repeat1] = STATE(81),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(221),
    [anon_sym_BSLASH] = ACTIONS(85),
    [anon_sym_1] = ACTIONS(85),
    [anon_sym_lambda] = ACTIONS(30),
    [sym_identifier] = ACTIONS(87),
    [sym_func_identifier] = ACTIONS(89),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
    [sym_integer] = ACTIONS(89),
    [sym_string] = ACTIONS(89),
  },
  [44] = {
    [sym__term] = STATE(82),
    [sym_group] = STATE(41),
    [sym_function] = STATE(41),
    [sym__terminal] = STATE(41),
    [sym_lambda] = STATE(83),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_BSLASH] = ACTIONS(85),
    [anon_sym_1] = ACTIONS(85),
    [anon_sym_lambda] = ACTIONS(30),
    [sym_identifier] = ACTIONS(87),
    [sym_func_identifier] = ACTIONS(89),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
    [sym_integer] = ACTIONS(89),
    [sym_string] = ACTIONS(89),
  },
  [45] = {
    [anon_sym_SEMI] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym_LBRACK] = ACTIONS(223),
    [sym__newline] = ACTIONS(225),
    [anon_sym_BSLASH] = ACTIONS(223),
    [anon_sym_1] = ACTIONS(223),
    [anon_sym_lambda] = ACTIONS(223),
    [sym_identifier] = ACTIONS(223),
    [sym_func_identifier] = ACTIONS(223),
    [sym_line_comment] = ACTIONS(34),
    [sym_block_comment] = ACTIONS(34),
    [sym_integer] = ACTIONS(223),
    [sym_string] = ACTIONS(223),
  },
  [46] = {
    [anon_sym_SEMI] = ACTIONS(227),
    [anon_sym_LPAREN] = ACTIONS(227),
    [anon_sym_LBRACK] = ACTIONS(227),
    [sym__newline] = ACTIONS(229),
    [anon_sym_BSLASH] = ACTIONS(227),
    [anon_sym_1] = ACTIONS(227),
    [anon_sym_lambda] = ACTIONS(227),
    [sym_identifier] = ACTIONS(227),
    [sym_func_identifier] = ACTIONS(227),
    [sym_line_comment] = ACTIONS(34),
    [sym_block_comment] = ACTIONS(34),
    [sym_integer] = ACTIONS(227),
    [sym_string] = ACTIONS(227),
  },
  [47] = {
    [sym__term] = STATE(85),
    [sym_group] = STATE(14),
    [sym_function] = STATE(14),
    [sym_func_body] = STATE(84),
    [sym__terminal] = STATE(14),
    [sym_lambda] = STATE(15),
    [aux_sym_block_expression_repeat1] = STATE(85),
    [anon_sym_SEMI] = ACTIONS(231),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_LBRACK] = ACTIONS(231),
    [sym__newline] = ACTIONS(233),
    [anon_sym_BSLASH] = ACTIONS(30),
    [anon_sym_1] = ACTIONS(30),
    [anon_sym_lambda] = ACTIONS(30),
    [sym_identifier] = ACTIONS(32),
    [sym_func_identifier] = ACTIONS(32),
    [sym_line_comment] = ACTIONS(34),
    [sym_block_comment] = ACTIONS(34),
    [sym_integer] = ACTIONS(32),
    [sym_string] = ACTIONS(32),
  },
  [48] = {
    [sym_func_sep] = STATE(86),
    [aux_sym_function_repeat1] = STATE(87),
    [anon_sym_DASH_GT] = ACTIONS(103),
    [anon_sym_DOT] = ACTIONS(103),
    [anon_sym_COLON] = ACTIONS(103),
    [sym_identifier] = ACTIONS(235),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(237),
    [anon_sym_GT] = ACTIONS(239),
    [anon_sym_import] = ACTIONS(239),
    [sym__newline] = ACTIONS(237),
    [sym_block_start] = ACTIONS(239),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(239),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(239),
    [sym_func_identifier] = ACTIONS(239),
    [sym_line_comment] = ACTIONS(239),
    [sym_block_comment] = ACTIONS(239),
  },
  [50] = {
    [sym__term] = STATE(50),
    [sym_group] = STATE(14),
    [sym_function] = STATE(14),
    [sym__terminal] = STATE(14),
    [sym_lambda] = STATE(15),
    [aux_sym_block_expression_repeat1] = STATE(50),
    [anon_sym_SEMI] = ACTIONS(241),
    [anon_sym_LPAREN] = ACTIONS(243),
    [sym__newline] = ACTIONS(246),
    [anon_sym_BSLASH] = ACTIONS(248),
    [anon_sym_1] = ACTIONS(248),
    [anon_sym_lambda] = ACTIONS(248),
    [sym_identifier] = ACTIONS(251),
    [sym_func_identifier] = ACTIONS(251),
    [sym_line_comment] = ACTIONS(34),
    [sym_block_comment] = ACTIONS(34),
    [sym_integer] = ACTIONS(251),
    [sym_string] = ACTIONS(251),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(254),
    [anon_sym_GT] = ACTIONS(256),
    [anon_sym_import] = ACTIONS(256),
    [sym__newline] = ACTIONS(254),
    [sym_block_start] = ACTIONS(256),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(256),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(256),
    [sym_func_identifier] = ACTIONS(256),
    [sym_line_comment] = ACTIONS(256),
    [sym_block_comment] = ACTIONS(256),
  },
  [52] = {
    [anon_sym_RBRACE] = ACTIONS(258),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
  },
  [53] = {
    [anon_sym_SEMI] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(211),
    [anon_sym_LBRACK] = ACTIONS(211),
    [sym__newline] = ACTIONS(213),
    [sym_block_end] = ACTIONS(211),
    [anon_sym_EQ_EQ] = ACTIONS(211),
    [anon_sym_EQ1] = ACTIONS(211),
    [anon_sym_EQ2] = ACTIONS(211),
    [anon_sym_a_EQ] = ACTIONS(211),
    [anon_sym_EQa] = ACTIONS(211),
    [anon_sym_EQ_GT] = ACTIONS(211),
    [anon_sym_EQ3] = ACTIONS(211),
    [anon_sym_EQ4] = ACTIONS(211),
    [anon_sym_b_EQ] = ACTIONS(211),
    [anon_sym_EQb] = ACTIONS(211),
    [anon_sym_BSLASH] = ACTIONS(211),
    [anon_sym_1] = ACTIONS(211),
    [anon_sym_lambda] = ACTIONS(211),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(211),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(211),
    [sym_identifier] = ACTIONS(211),
    [sym_func_identifier] = ACTIONS(211),
    [sym_line_comment] = ACTIONS(34),
    [sym_block_comment] = ACTIONS(34),
    [sym_integer] = ACTIONS(211),
    [sym_string] = ACTIONS(211),
  },
  [54] = {
    [sym__term] = STATE(81),
    [sym_group] = STATE(41),
    [sym_function] = STATE(41),
    [sym__terminal] = STATE(41),
    [sym_lambda] = STATE(42),
    [aux_sym_block_expression_repeat1] = STATE(81),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(260),
    [anon_sym_BSLASH] = ACTIONS(85),
    [anon_sym_1] = ACTIONS(85),
    [anon_sym_lambda] = ACTIONS(30),
    [sym_identifier] = ACTIONS(87),
    [sym_func_identifier] = ACTIONS(89),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
    [sym_integer] = ACTIONS(89),
    [sym_string] = ACTIONS(89),
  },
  [55] = {
    [anon_sym_LPAREN] = ACTIONS(169),
    [sym__newline] = ACTIONS(167),
    [sym_block_end] = ACTIONS(169),
    [anon_sym_EQ_EQ] = ACTIONS(169),
    [anon_sym_EQ1] = ACTIONS(169),
    [anon_sym_EQ2] = ACTIONS(169),
    [anon_sym_a_EQ] = ACTIONS(169),
    [anon_sym_EQa] = ACTIONS(169),
    [anon_sym_EQ_GT] = ACTIONS(169),
    [anon_sym_EQ3] = ACTIONS(169),
    [anon_sym_EQ4] = ACTIONS(169),
    [anon_sym_b_EQ] = ACTIONS(169),
    [anon_sym_EQb] = ACTIONS(169),
    [anon_sym_BSLASH] = ACTIONS(169),
    [anon_sym_1] = ACTIONS(169),
    [anon_sym_lambda] = ACTIONS(169),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(169),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(169),
    [sym_identifier] = ACTIONS(169),
    [sym_func_identifier] = ACTIONS(169),
    [sym_line_comment] = ACTIONS(34),
    [sym_block_comment] = ACTIONS(34),
    [sym_integer] = ACTIONS(169),
    [sym_string] = ACTIONS(169),
  },
  [56] = {
    [aux_sym_annotation_repeat1] = STATE(70),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(262),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(173),
    [aux_sym_SLASH_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(173),
    [aux_sym_SLASH_DQUOTE_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(173),
    [sym_line_comment] = ACTIONS(34),
    [sym_block_comment] = ACTIONS(34),
  },
  [57] = {
    [aux_sym_annotation_repeat2] = STATE(71),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(262),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(175),
    [aux_sym_SLASH_SQUOTE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(175),
    [aux_sym_SLASH_SQUOTE_SQUOTE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(175),
    [sym_line_comment] = ACTIONS(34),
    [sym_block_comment] = ACTIONS(34),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(264),
    [anon_sym_GT] = ACTIONS(266),
    [anon_sym_import] = ACTIONS(266),
    [sym__newline] = ACTIONS(264),
    [sym_block_start] = ACTIONS(266),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(266),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(266),
    [sym_func_identifier] = ACTIONS(266),
    [sym_line_comment] = ACTIONS(266),
    [sym_block_comment] = ACTIONS(266),
  },
  [59] = {
    [sym_block_end] = ACTIONS(268),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
  },
  [60] = {
    [anon_sym_LPAREN] = ACTIONS(270),
    [sym__newline] = ACTIONS(272),
    [sym_block_end] = ACTIONS(270),
    [anon_sym_EQ_EQ] = ACTIONS(270),
    [anon_sym_EQ1] = ACTIONS(270),
    [anon_sym_EQ2] = ACTIONS(270),
    [anon_sym_a_EQ] = ACTIONS(270),
    [anon_sym_EQa] = ACTIONS(270),
    [anon_sym_EQ_GT] = ACTIONS(270),
    [anon_sym_EQ3] = ACTIONS(270),
    [anon_sym_EQ4] = ACTIONS(270),
    [anon_sym_b_EQ] = ACTIONS(270),
    [anon_sym_EQb] = ACTIONS(270),
    [anon_sym_BSLASH] = ACTIONS(270),
    [anon_sym_1] = ACTIONS(270),
    [anon_sym_lambda] = ACTIONS(270),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(270),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(270),
    [sym_identifier] = ACTIONS(270),
    [sym_func_identifier] = ACTIONS(270),
    [sym_line_comment] = ACTIONS(34),
    [sym_block_comment] = ACTIONS(34),
    [sym_integer] = ACTIONS(270),
    [sym_string] = ACTIONS(270),
  },
  [61] = {
    [anon_sym_SEMI] = ACTIONS(274),
    [anon_sym_LPAREN] = ACTIONS(276),
    [sym__newline] = ACTIONS(278),
    [sym_block_end] = ACTIONS(276),
    [anon_sym_EQ_EQ] = ACTIONS(276),
    [anon_sym_EQ1] = ACTIONS(276),
    [anon_sym_EQ2] = ACTIONS(276),
    [anon_sym_a_EQ] = ACTIONS(276),
    [anon_sym_EQa] = ACTIONS(276),
    [anon_sym_EQ_GT] = ACTIONS(276),
    [anon_sym_EQ3] = ACTIONS(276),
    [anon_sym_EQ4] = ACTIONS(276),
    [anon_sym_b_EQ] = ACTIONS(276),
    [anon_sym_EQb] = ACTIONS(276),
    [anon_sym_BSLASH] = ACTIONS(276),
    [anon_sym_1] = ACTIONS(276),
    [anon_sym_lambda] = ACTIONS(276),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(276),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(276),
    [sym_identifier] = ACTIONS(276),
    [sym_func_identifier] = ACTIONS(276),
    [sym_line_comment] = ACTIONS(34),
    [sym_block_comment] = ACTIONS(34),
    [sym_integer] = ACTIONS(276),
    [sym_string] = ACTIONS(276),
  },
  [62] = {
    [sym__term] = STATE(93),
    [sym_group] = STATE(41),
    [sym_function] = STATE(41),
    [sym__terminal] = STATE(41),
    [sym_lambda] = STATE(83),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_BSLASH] = ACTIONS(85),
    [anon_sym_1] = ACTIONS(85),
    [anon_sym_lambda] = ACTIONS(30),
    [sym_identifier] = ACTIONS(87),
    [sym_func_identifier] = ACTIONS(89),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
    [sym_integer] = ACTIONS(89),
    [sym_string] = ACTIONS(89),
  },
  [63] = {
    [anon_sym_SEMI] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym_LBRACK] = ACTIONS(223),
    [sym__newline] = ACTIONS(225),
    [sym_block_end] = ACTIONS(223),
    [anon_sym_EQ_EQ] = ACTIONS(223),
    [anon_sym_EQ1] = ACTIONS(223),
    [anon_sym_EQ2] = ACTIONS(223),
    [anon_sym_a_EQ] = ACTIONS(223),
    [anon_sym_EQa] = ACTIONS(223),
    [anon_sym_EQ_GT] = ACTIONS(223),
    [anon_sym_EQ3] = ACTIONS(223),
    [anon_sym_EQ4] = ACTIONS(223),
    [anon_sym_b_EQ] = ACTIONS(223),
    [anon_sym_EQb] = ACTIONS(223),
    [anon_sym_BSLASH] = ACTIONS(223),
    [anon_sym_1] = ACTIONS(223),
    [anon_sym_lambda] = ACTIONS(223),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(223),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(223),
    [sym_identifier] = ACTIONS(223),
    [sym_func_identifier] = ACTIONS(223),
    [sym_line_comment] = ACTIONS(34),
    [sym_block_comment] = ACTIONS(34),
    [sym_integer] = ACTIONS(223),
    [sym_string] = ACTIONS(223),
  },
  [64] = {
    [anon_sym_SEMI] = ACTIONS(227),
    [anon_sym_LPAREN] = ACTIONS(227),
    [anon_sym_LBRACK] = ACTIONS(227),
    [sym__newline] = ACTIONS(229),
    [sym_block_end] = ACTIONS(227),
    [anon_sym_EQ_EQ] = ACTIONS(227),
    [anon_sym_EQ1] = ACTIONS(227),
    [anon_sym_EQ2] = ACTIONS(227),
    [anon_sym_a_EQ] = ACTIONS(227),
    [anon_sym_EQa] = ACTIONS(227),
    [anon_sym_EQ_GT] = ACTIONS(227),
    [anon_sym_EQ3] = ACTIONS(227),
    [anon_sym_EQ4] = ACTIONS(227),
    [anon_sym_b_EQ] = ACTIONS(227),
    [anon_sym_EQb] = ACTIONS(227),
    [anon_sym_BSLASH] = ACTIONS(227),
    [anon_sym_1] = ACTIONS(227),
    [anon_sym_lambda] = ACTIONS(227),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(227),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(227),
    [sym_identifier] = ACTIONS(227),
    [sym_func_identifier] = ACTIONS(227),
    [sym_line_comment] = ACTIONS(34),
    [sym_block_comment] = ACTIONS(34),
    [sym_integer] = ACTIONS(227),
    [sym_string] = ACTIONS(227),
  },
  [65] = {
    [sym__term] = STATE(95),
    [sym_group] = STATE(30),
    [sym_function] = STATE(30),
    [sym_func_body] = STATE(94),
    [sym__terminal] = STATE(30),
    [sym_lambda] = STATE(31),
    [aux_sym_block_expression_repeat1] = STATE(95),
    [anon_sym_SEMI] = ACTIONS(231),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACK] = ACTIONS(231),
    [sym__newline] = ACTIONS(233),
    [sym_block_end] = ACTIONS(231),
    [anon_sym_EQ_EQ] = ACTIONS(231),
    [anon_sym_EQ1] = ACTIONS(231),
    [anon_sym_EQ2] = ACTIONS(231),
    [anon_sym_a_EQ] = ACTIONS(231),
    [anon_sym_EQa] = ACTIONS(231),
    [anon_sym_EQ_GT] = ACTIONS(231),
    [anon_sym_EQ3] = ACTIONS(231),
    [anon_sym_EQ4] = ACTIONS(231),
    [anon_sym_b_EQ] = ACTIONS(231),
    [anon_sym_EQb] = ACTIONS(231),
    [anon_sym_BSLASH] = ACTIONS(30),
    [anon_sym_1] = ACTIONS(30),
    [anon_sym_lambda] = ACTIONS(30),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(231),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(231),
    [sym_identifier] = ACTIONS(58),
    [sym_func_identifier] = ACTIONS(58),
    [sym_line_comment] = ACTIONS(34),
    [sym_block_comment] = ACTIONS(34),
    [sym_integer] = ACTIONS(58),
    [sym_string] = ACTIONS(58),
  },
  [66] = {
    [sym_func_sep] = STATE(96),
    [aux_sym_function_repeat1] = STATE(87),
    [anon_sym_DASH_GT] = ACTIONS(155),
    [anon_sym_DOT] = ACTIONS(155),
    [anon_sym_COLON] = ACTIONS(155),
    [sym_identifier] = ACTIONS(235),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
  },
  [67] = {
    [sym_block_expression] = STATE(28),
    [sym__relation_operator] = STATE(29),
    [sym__term] = STATE(33),
    [sym_group] = STATE(30),
    [sym_function] = STATE(30),
    [sym__terminal] = STATE(30),
    [sym_alpha_convert] = STATE(29),
    [sym_beta_reduce] = STATE(29),
    [sym_lambda] = STATE(31),
    [sym_annotation] = STATE(67),
    [aux_sym__block_contents_repeat1] = STATE(67),
    [aux_sym_block_expression_repeat1] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(280),
    [sym__newline] = ACTIONS(283),
    [sym_block_end] = ACTIONS(286),
    [anon_sym_EQ_EQ] = ACTIONS(288),
    [anon_sym_EQ1] = ACTIONS(288),
    [anon_sym_EQ2] = ACTIONS(288),
    [anon_sym_a_EQ] = ACTIONS(288),
    [anon_sym_EQa] = ACTIONS(288),
    [anon_sym_EQ_GT] = ACTIONS(291),
    [anon_sym_EQ3] = ACTIONS(291),
    [anon_sym_EQ4] = ACTIONS(291),
    [anon_sym_b_EQ] = ACTIONS(291),
    [anon_sym_EQb] = ACTIONS(291),
    [anon_sym_BSLASH] = ACTIONS(294),
    [anon_sym_1] = ACTIONS(294),
    [anon_sym_lambda] = ACTIONS(294),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(297),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(300),
    [sym_identifier] = ACTIONS(303),
    [sym_func_identifier] = ACTIONS(303),
    [sym_line_comment] = ACTIONS(34),
    [sym_block_comment] = ACTIONS(34),
    [sym_integer] = ACTIONS(303),
    [sym_string] = ACTIONS(303),
  },
  [68] = {
    [sym__term] = STATE(68),
    [sym_group] = STATE(30),
    [sym_function] = STATE(30),
    [sym__terminal] = STATE(30),
    [sym_lambda] = STATE(31),
    [aux_sym_block_expression_repeat1] = STATE(68),
    [anon_sym_SEMI] = ACTIONS(241),
    [anon_sym_LPAREN] = ACTIONS(306),
    [sym__newline] = ACTIONS(246),
    [sym_block_end] = ACTIONS(241),
    [anon_sym_EQ_EQ] = ACTIONS(241),
    [anon_sym_EQ1] = ACTIONS(241),
    [anon_sym_EQ2] = ACTIONS(241),
    [anon_sym_a_EQ] = ACTIONS(241),
    [anon_sym_EQa] = ACTIONS(241),
    [anon_sym_EQ_GT] = ACTIONS(241),
    [anon_sym_EQ3] = ACTIONS(241),
    [anon_sym_EQ4] = ACTIONS(241),
    [anon_sym_b_EQ] = ACTIONS(241),
    [anon_sym_EQb] = ACTIONS(241),
    [anon_sym_BSLASH] = ACTIONS(248),
    [anon_sym_1] = ACTIONS(248),
    [anon_sym_lambda] = ACTIONS(248),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(241),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(241),
    [sym_identifier] = ACTIONS(309),
    [sym_func_identifier] = ACTIONS(309),
    [sym_line_comment] = ACTIONS(34),
    [sym_block_comment] = ACTIONS(34),
    [sym_integer] = ACTIONS(309),
    [sym_string] = ACTIONS(309),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(312),
    [anon_sym_GT] = ACTIONS(314),
    [anon_sym_import] = ACTIONS(314),
    [sym__newline] = ACTIONS(312),
    [sym_block_start] = ACTIONS(314),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(314),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(314),
    [sym_func_identifier] = ACTIONS(314),
    [sym_line_comment] = ACTIONS(314),
    [sym_block_comment] = ACTIONS(314),
  },
  [70] = {
    [aux_sym_annotation_repeat1] = STATE(70),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(316),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(318),
    [aux_sym_SLASH_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(318),
    [aux_sym_SLASH_DQUOTE_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(318),
    [sym_line_comment] = ACTIONS(34),
    [sym_block_comment] = ACTIONS(34),
  },
  [71] = {
    [aux_sym_annotation_repeat2] = STATE(71),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(321),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(323),
    [aux_sym_SLASH_SQUOTE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(323),
    [aux_sym_SLASH_SQUOTE_SQUOTE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(323),
    [sym_line_comment] = ACTIONS(34),
    [sym_block_comment] = ACTIONS(34),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(326),
    [anon_sym_GT] = ACTIONS(328),
    [anon_sym_import] = ACTIONS(328),
    [sym__newline] = ACTIONS(326),
    [sym_block_start] = ACTIONS(328),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(328),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(328),
    [sym_func_identifier] = ACTIONS(328),
    [sym_line_comment] = ACTIONS(328),
    [sym_block_comment] = ACTIONS(328),
  },
  [73] = {
    [anon_sym_LPAREN] = ACTIONS(213),
    [anon_sym_RPAREN] = ACTIONS(213),
    [anon_sym_LBRACK] = ACTIONS(213),
    [anon_sym_RBRACK] = ACTIONS(213),
    [anon_sym_BSLASH] = ACTIONS(213),
    [anon_sym_1] = ACTIONS(213),
    [anon_sym_lambda] = ACTIONS(211),
    [anon_sym_DASH_GT] = ACTIONS(213),
    [anon_sym_COLON_EQ] = ACTIONS(213),
    [anon_sym_SLASH] = ACTIONS(211),
    [anon_sym_PIPE] = ACTIONS(213),
    [anon_sym_LT_DASH] = ACTIONS(213),
    [sym_identifier] = ACTIONS(211),
    [sym_func_identifier] = ACTIONS(213),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
    [sym_integer] = ACTIONS(213),
    [sym_string] = ACTIONS(213),
  },
  [74] = {
    [sym__term] = STATE(81),
    [sym_group] = STATE(41),
    [sym_function] = STATE(41),
    [sym__terminal] = STATE(41),
    [sym_lambda] = STATE(42),
    [aux_sym_block_expression_repeat1] = STATE(81),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(330),
    [anon_sym_BSLASH] = ACTIONS(85),
    [anon_sym_1] = ACTIONS(85),
    [anon_sym_lambda] = ACTIONS(30),
    [sym_identifier] = ACTIONS(87),
    [sym_func_identifier] = ACTIONS(89),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
    [sym_integer] = ACTIONS(89),
    [sym_string] = ACTIONS(89),
  },
  [75] = {
    [sym__term] = STATE(98),
    [sym_group] = STATE(41),
    [sym_function] = STATE(41),
    [sym__terminal] = STATE(41),
    [sym_lambda] = STATE(83),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_BSLASH] = ACTIONS(85),
    [anon_sym_1] = ACTIONS(85),
    [anon_sym_lambda] = ACTIONS(30),
    [sym_identifier] = ACTIONS(87),
    [sym_func_identifier] = ACTIONS(89),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
    [sym_integer] = ACTIONS(89),
    [sym_string] = ACTIONS(89),
  },
  [76] = {
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_RPAREN] = ACTIONS(225),
    [anon_sym_LBRACK] = ACTIONS(225),
    [anon_sym_RBRACK] = ACTIONS(225),
    [anon_sym_BSLASH] = ACTIONS(225),
    [anon_sym_1] = ACTIONS(225),
    [anon_sym_lambda] = ACTIONS(223),
    [anon_sym_DASH_GT] = ACTIONS(225),
    [anon_sym_COLON_EQ] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_PIPE] = ACTIONS(225),
    [anon_sym_LT_DASH] = ACTIONS(225),
    [sym_identifier] = ACTIONS(223),
    [sym_func_identifier] = ACTIONS(225),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
    [sym_integer] = ACTIONS(225),
    [sym_string] = ACTIONS(225),
  },
  [77] = {
    [anon_sym_LPAREN] = ACTIONS(229),
    [anon_sym_RPAREN] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(229),
    [anon_sym_RBRACK] = ACTIONS(229),
    [anon_sym_BSLASH] = ACTIONS(229),
    [anon_sym_1] = ACTIONS(229),
    [anon_sym_lambda] = ACTIONS(227),
    [anon_sym_DASH_GT] = ACTIONS(229),
    [anon_sym_COLON_EQ] = ACTIONS(229),
    [anon_sym_SLASH] = ACTIONS(227),
    [anon_sym_PIPE] = ACTIONS(229),
    [anon_sym_LT_DASH] = ACTIONS(229),
    [sym_identifier] = ACTIONS(227),
    [sym_func_identifier] = ACTIONS(229),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
    [sym_integer] = ACTIONS(229),
    [sym_string] = ACTIONS(229),
  },
  [78] = {
    [sym__term] = STATE(100),
    [sym_group] = STATE(41),
    [sym_function] = STATE(41),
    [sym_func_body] = STATE(99),
    [sym__terminal] = STATE(41),
    [sym_lambda] = STATE(42),
    [aux_sym_block_expression_repeat1] = STATE(100),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(233),
    [anon_sym_LBRACK] = ACTIONS(233),
    [anon_sym_BSLASH] = ACTIONS(85),
    [anon_sym_1] = ACTIONS(85),
    [anon_sym_lambda] = ACTIONS(30),
    [sym_identifier] = ACTIONS(87),
    [sym_func_identifier] = ACTIONS(89),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
    [sym_integer] = ACTIONS(89),
    [sym_string] = ACTIONS(89),
  },
  [79] = {
    [sym_func_sep] = STATE(101),
    [aux_sym_function_repeat1] = STATE(87),
    [anon_sym_DASH_GT] = ACTIONS(217),
    [anon_sym_DOT] = ACTIONS(217),
    [anon_sym_COLON] = ACTIONS(217),
    [sym_identifier] = ACTIONS(235),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
  },
  [80] = {
    [anon_sym_SEMI] = ACTIONS(332),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_LBRACK] = ACTIONS(332),
    [sym__newline] = ACTIONS(334),
    [anon_sym_BSLASH] = ACTIONS(332),
    [anon_sym_1] = ACTIONS(332),
    [anon_sym_lambda] = ACTIONS(332),
    [sym_identifier] = ACTIONS(332),
    [sym_func_identifier] = ACTIONS(332),
    [sym_line_comment] = ACTIONS(34),
    [sym_block_comment] = ACTIONS(34),
    [sym_integer] = ACTIONS(332),
    [sym_string] = ACTIONS(332),
  },
  [81] = {
    [sym__term] = STATE(81),
    [sym_group] = STATE(41),
    [sym_function] = STATE(41),
    [sym__terminal] = STATE(41),
    [sym_lambda] = STATE(42),
    [aux_sym_block_expression_repeat1] = STATE(81),
    [anon_sym_LPAREN] = ACTIONS(336),
    [anon_sym_RPAREN] = ACTIONS(246),
    [anon_sym_BSLASH] = ACTIONS(339),
    [anon_sym_1] = ACTIONS(339),
    [anon_sym_lambda] = ACTIONS(248),
    [sym_identifier] = ACTIONS(342),
    [sym_func_identifier] = ACTIONS(345),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
    [sym_integer] = ACTIONS(345),
    [sym_string] = ACTIONS(345),
  },
  [82] = {
    [sym__replacement_indicator] = STATE(104),
    [sym_replace_forwards] = STATE(104),
    [sym_replace_backwards] = STATE(104),
    [anon_sym_BSLASH] = ACTIONS(348),
    [anon_sym_DASH_GT] = ACTIONS(350),
    [anon_sym_COLON_EQ] = ACTIONS(350),
    [anon_sym_SLASH] = ACTIONS(352),
    [anon_sym_PIPE] = ACTIONS(350),
    [anon_sym_LT_DASH] = ACTIONS(348),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
  },
  [83] = {
    [sym_func_sep] = STATE(105),
    [aux_sym_function_repeat1] = STATE(106),
    [anon_sym_DASH_GT] = ACTIONS(217),
    [anon_sym_DOT] = ACTIONS(217),
    [anon_sym_COLON] = ACTIONS(217),
    [sym_identifier] = ACTIONS(354),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
  },
  [84] = {
    [anon_sym_SEMI] = ACTIONS(356),
    [anon_sym_LPAREN] = ACTIONS(356),
    [anon_sym_LBRACK] = ACTIONS(356),
    [sym__newline] = ACTIONS(358),
    [anon_sym_BSLASH] = ACTIONS(356),
    [anon_sym_1] = ACTIONS(356),
    [anon_sym_lambda] = ACTIONS(356),
    [sym_identifier] = ACTIONS(356),
    [sym_func_identifier] = ACTIONS(356),
    [sym_line_comment] = ACTIONS(34),
    [sym_block_comment] = ACTIONS(34),
    [sym_integer] = ACTIONS(356),
    [sym_string] = ACTIONS(356),
  },
  [85] = {
    [sym__term] = STATE(107),
    [sym_group] = STATE(14),
    [sym_function] = STATE(14),
    [sym__terminal] = STATE(14),
    [sym_lambda] = STATE(15),
    [aux_sym_block_expression_repeat1] = STATE(107),
    [anon_sym_SEMI] = ACTIONS(360),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_LBRACK] = ACTIONS(360),
    [sym__newline] = ACTIONS(362),
    [anon_sym_BSLASH] = ACTIONS(30),
    [anon_sym_1] = ACTIONS(30),
    [anon_sym_lambda] = ACTIONS(30),
    [sym_identifier] = ACTIONS(32),
    [sym_func_identifier] = ACTIONS(32),
    [sym_line_comment] = ACTIONS(34),
    [sym_block_comment] = ACTIONS(34),
    [sym_integer] = ACTIONS(32),
    [sym_string] = ACTIONS(32),
  },
  [86] = {
    [sym__term] = STATE(85),
    [sym_group] = STATE(14),
    [sym_function] = STATE(14),
    [sym_func_body] = STATE(108),
    [sym__terminal] = STATE(14),
    [sym_lambda] = STATE(15),
    [aux_sym_block_expression_repeat1] = STATE(85),
    [anon_sym_SEMI] = ACTIONS(356),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_LBRACK] = ACTIONS(356),
    [sym__newline] = ACTIONS(358),
    [anon_sym_BSLASH] = ACTIONS(30),
    [anon_sym_1] = ACTIONS(30),
    [anon_sym_lambda] = ACTIONS(30),
    [sym_identifier] = ACTIONS(32),
    [sym_func_identifier] = ACTIONS(32),
    [sym_line_comment] = ACTIONS(34),
    [sym_block_comment] = ACTIONS(34),
    [sym_integer] = ACTIONS(32),
    [sym_string] = ACTIONS(32),
  },
  [87] = {
    [aux_sym_function_repeat1] = STATE(87),
    [anon_sym_DASH_GT] = ACTIONS(364),
    [anon_sym_DOT] = ACTIONS(364),
    [anon_sym_COLON] = ACTIONS(364),
    [sym_identifier] = ACTIONS(366),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
  },
  [88] = {
    [anon_sym_LPAREN] = ACTIONS(369),
    [sym__newline] = ACTIONS(371),
    [sym_block_end] = ACTIONS(369),
    [anon_sym_EQ_EQ] = ACTIONS(369),
    [anon_sym_EQ1] = ACTIONS(369),
    [anon_sym_EQ2] = ACTIONS(369),
    [anon_sym_a_EQ] = ACTIONS(369),
    [anon_sym_EQa] = ACTIONS(369),
    [anon_sym_EQ_GT] = ACTIONS(369),
    [anon_sym_EQ3] = ACTIONS(369),
    [anon_sym_EQ4] = ACTIONS(369),
    [anon_sym_b_EQ] = ACTIONS(369),
    [anon_sym_EQb] = ACTIONS(369),
    [anon_sym_BSLASH] = ACTIONS(369),
    [anon_sym_1] = ACTIONS(369),
    [anon_sym_lambda] = ACTIONS(369),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(369),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(369),
    [sym_identifier] = ACTIONS(369),
    [sym_func_identifier] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(34),
    [sym_block_comment] = ACTIONS(34),
    [sym_integer] = ACTIONS(369),
    [sym_string] = ACTIONS(369),
  },
  [89] = {
    [anon_sym_SEMI] = ACTIONS(332),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_LBRACK] = ACTIONS(332),
    [sym__newline] = ACTIONS(334),
    [sym_block_end] = ACTIONS(332),
    [anon_sym_EQ_EQ] = ACTIONS(332),
    [anon_sym_EQ1] = ACTIONS(332),
    [anon_sym_EQ2] = ACTIONS(332),
    [anon_sym_a_EQ] = ACTIONS(332),
    [anon_sym_EQa] = ACTIONS(332),
    [anon_sym_EQ_GT] = ACTIONS(332),
    [anon_sym_EQ3] = ACTIONS(332),
    [anon_sym_EQ4] = ACTIONS(332),
    [anon_sym_b_EQ] = ACTIONS(332),
    [anon_sym_EQb] = ACTIONS(332),
    [anon_sym_BSLASH] = ACTIONS(332),
    [anon_sym_1] = ACTIONS(332),
    [anon_sym_lambda] = ACTIONS(332),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(332),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(332),
    [sym_identifier] = ACTIONS(332),
    [sym_func_identifier] = ACTIONS(332),
    [sym_line_comment] = ACTIONS(34),
    [sym_block_comment] = ACTIONS(34),
    [sym_integer] = ACTIONS(332),
    [sym_string] = ACTIONS(332),
  },
  [90] = {
    [anon_sym_LPAREN] = ACTIONS(314),
    [sym__newline] = ACTIONS(312),
    [sym_block_end] = ACTIONS(314),
    [anon_sym_EQ_EQ] = ACTIONS(314),
    [anon_sym_EQ1] = ACTIONS(314),
    [anon_sym_EQ2] = ACTIONS(314),
    [anon_sym_a_EQ] = ACTIONS(314),
    [anon_sym_EQa] = ACTIONS(314),
    [anon_sym_EQ_GT] = ACTIONS(314),
    [anon_sym_EQ3] = ACTIONS(314),
    [anon_sym_EQ4] = ACTIONS(314),
    [anon_sym_b_EQ] = ACTIONS(314),
    [anon_sym_EQb] = ACTIONS(314),
    [anon_sym_BSLASH] = ACTIONS(314),
    [anon_sym_1] = ACTIONS(314),
    [anon_sym_lambda] = ACTIONS(314),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(314),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(314),
    [sym_identifier] = ACTIONS(314),
    [sym_func_identifier] = ACTIONS(314),
    [sym_line_comment] = ACTIONS(34),
    [sym_block_comment] = ACTIONS(34),
    [sym_integer] = ACTIONS(314),
    [sym_string] = ACTIONS(314),
  },
  [91] = {
    [ts_builtin_sym_end] = ACTIONS(373),
    [anon_sym_GT] = ACTIONS(375),
    [anon_sym_import] = ACTIONS(375),
    [sym__newline] = ACTIONS(373),
    [sym_block_start] = ACTIONS(375),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(375),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(375),
    [sym_func_identifier] = ACTIONS(375),
    [sym_line_comment] = ACTIONS(375),
    [sym_block_comment] = ACTIONS(375),
  },
  [92] = {
    [anon_sym_LPAREN] = ACTIONS(377),
    [sym__newline] = ACTIONS(379),
    [sym_block_end] = ACTIONS(377),
    [anon_sym_EQ_EQ] = ACTIONS(377),
    [anon_sym_EQ1] = ACTIONS(377),
    [anon_sym_EQ2] = ACTIONS(377),
    [anon_sym_a_EQ] = ACTIONS(377),
    [anon_sym_EQa] = ACTIONS(377),
    [anon_sym_EQ_GT] = ACTIONS(377),
    [anon_sym_EQ3] = ACTIONS(377),
    [anon_sym_EQ4] = ACTIONS(377),
    [anon_sym_b_EQ] = ACTIONS(377),
    [anon_sym_EQb] = ACTIONS(377),
    [anon_sym_BSLASH] = ACTIONS(377),
    [anon_sym_1] = ACTIONS(377),
    [anon_sym_lambda] = ACTIONS(377),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(377),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(377),
    [sym_identifier] = ACTIONS(377),
    [sym_func_identifier] = ACTIONS(377),
    [sym_line_comment] = ACTIONS(34),
    [sym_block_comment] = ACTIONS(34),
    [sym_integer] = ACTIONS(377),
    [sym_string] = ACTIONS(377),
  },
  [93] = {
    [sym__replacement_indicator] = STATE(109),
    [sym_replace_forwards] = STATE(109),
    [sym_replace_backwards] = STATE(109),
    [anon_sym_BSLASH] = ACTIONS(348),
    [anon_sym_DASH_GT] = ACTIONS(350),
    [anon_sym_COLON_EQ] = ACTIONS(350),
    [anon_sym_SLASH] = ACTIONS(352),
    [anon_sym_PIPE] = ACTIONS(350),
    [anon_sym_LT_DASH] = ACTIONS(348),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
  },
  [94] = {
    [anon_sym_SEMI] = ACTIONS(356),
    [anon_sym_LPAREN] = ACTIONS(356),
    [anon_sym_LBRACK] = ACTIONS(356),
    [sym__newline] = ACTIONS(358),
    [sym_block_end] = ACTIONS(356),
    [anon_sym_EQ_EQ] = ACTIONS(356),
    [anon_sym_EQ1] = ACTIONS(356),
    [anon_sym_EQ2] = ACTIONS(356),
    [anon_sym_a_EQ] = ACTIONS(356),
    [anon_sym_EQa] = ACTIONS(356),
    [anon_sym_EQ_GT] = ACTIONS(356),
    [anon_sym_EQ3] = ACTIONS(356),
    [anon_sym_EQ4] = ACTIONS(356),
    [anon_sym_b_EQ] = ACTIONS(356),
    [anon_sym_EQb] = ACTIONS(356),
    [anon_sym_BSLASH] = ACTIONS(356),
    [anon_sym_1] = ACTIONS(356),
    [anon_sym_lambda] = ACTIONS(356),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(356),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(356),
    [sym_identifier] = ACTIONS(356),
    [sym_func_identifier] = ACTIONS(356),
    [sym_line_comment] = ACTIONS(34),
    [sym_block_comment] = ACTIONS(34),
    [sym_integer] = ACTIONS(356),
    [sym_string] = ACTIONS(356),
  },
  [95] = {
    [sym__term] = STATE(110),
    [sym_group] = STATE(30),
    [sym_function] = STATE(30),
    [sym__terminal] = STATE(30),
    [sym_lambda] = STATE(31),
    [aux_sym_block_expression_repeat1] = STATE(110),
    [anon_sym_SEMI] = ACTIONS(360),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACK] = ACTIONS(360),
    [sym__newline] = ACTIONS(362),
    [sym_block_end] = ACTIONS(360),
    [anon_sym_EQ_EQ] = ACTIONS(360),
    [anon_sym_EQ1] = ACTIONS(360),
    [anon_sym_EQ2] = ACTIONS(360),
    [anon_sym_a_EQ] = ACTIONS(360),
    [anon_sym_EQa] = ACTIONS(360),
    [anon_sym_EQ_GT] = ACTIONS(360),
    [anon_sym_EQ3] = ACTIONS(360),
    [anon_sym_EQ4] = ACTIONS(360),
    [anon_sym_b_EQ] = ACTIONS(360),
    [anon_sym_EQb] = ACTIONS(360),
    [anon_sym_BSLASH] = ACTIONS(30),
    [anon_sym_1] = ACTIONS(30),
    [anon_sym_lambda] = ACTIONS(30),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(360),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(360),
    [sym_identifier] = ACTIONS(58),
    [sym_func_identifier] = ACTIONS(58),
    [sym_line_comment] = ACTIONS(34),
    [sym_block_comment] = ACTIONS(34),
    [sym_integer] = ACTIONS(58),
    [sym_string] = ACTIONS(58),
  },
  [96] = {
    [sym__term] = STATE(95),
    [sym_group] = STATE(30),
    [sym_function] = STATE(30),
    [sym_func_body] = STATE(111),
    [sym__terminal] = STATE(30),
    [sym_lambda] = STATE(31),
    [aux_sym_block_expression_repeat1] = STATE(95),
    [anon_sym_SEMI] = ACTIONS(356),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACK] = ACTIONS(356),
    [sym__newline] = ACTIONS(358),
    [sym_block_end] = ACTIONS(356),
    [anon_sym_EQ_EQ] = ACTIONS(356),
    [anon_sym_EQ1] = ACTIONS(356),
    [anon_sym_EQ2] = ACTIONS(356),
    [anon_sym_a_EQ] = ACTIONS(356),
    [anon_sym_EQa] = ACTIONS(356),
    [anon_sym_EQ_GT] = ACTIONS(356),
    [anon_sym_EQ3] = ACTIONS(356),
    [anon_sym_EQ4] = ACTIONS(356),
    [anon_sym_b_EQ] = ACTIONS(356),
    [anon_sym_EQb] = ACTIONS(356),
    [anon_sym_BSLASH] = ACTIONS(30),
    [anon_sym_1] = ACTIONS(30),
    [anon_sym_lambda] = ACTIONS(30),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(356),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(356),
    [sym_identifier] = ACTIONS(58),
    [sym_func_identifier] = ACTIONS(58),
    [sym_line_comment] = ACTIONS(34),
    [sym_block_comment] = ACTIONS(34),
    [sym_integer] = ACTIONS(58),
    [sym_string] = ACTIONS(58),
  },
  [97] = {
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_RPAREN] = ACTIONS(334),
    [anon_sym_LBRACK] = ACTIONS(334),
    [anon_sym_RBRACK] = ACTIONS(334),
    [anon_sym_BSLASH] = ACTIONS(334),
    [anon_sym_1] = ACTIONS(334),
    [anon_sym_lambda] = ACTIONS(332),
    [anon_sym_DASH_GT] = ACTIONS(334),
    [anon_sym_COLON_EQ] = ACTIONS(334),
    [anon_sym_SLASH] = ACTIONS(332),
    [anon_sym_PIPE] = ACTIONS(334),
    [anon_sym_LT_DASH] = ACTIONS(334),
    [sym_identifier] = ACTIONS(332),
    [sym_func_identifier] = ACTIONS(334),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
    [sym_integer] = ACTIONS(334),
    [sym_string] = ACTIONS(334),
  },
  [98] = {
    [sym__replacement_indicator] = STATE(112),
    [sym_replace_forwards] = STATE(112),
    [sym_replace_backwards] = STATE(112),
    [anon_sym_BSLASH] = ACTIONS(348),
    [anon_sym_DASH_GT] = ACTIONS(350),
    [anon_sym_COLON_EQ] = ACTIONS(350),
    [anon_sym_SLASH] = ACTIONS(352),
    [anon_sym_PIPE] = ACTIONS(350),
    [anon_sym_LT_DASH] = ACTIONS(348),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
  },
  [99] = {
    [anon_sym_LPAREN] = ACTIONS(358),
    [anon_sym_RPAREN] = ACTIONS(358),
    [anon_sym_LBRACK] = ACTIONS(358),
    [anon_sym_RBRACK] = ACTIONS(358),
    [anon_sym_BSLASH] = ACTIONS(358),
    [anon_sym_1] = ACTIONS(358),
    [anon_sym_lambda] = ACTIONS(356),
    [anon_sym_DASH_GT] = ACTIONS(358),
    [anon_sym_COLON_EQ] = ACTIONS(358),
    [anon_sym_SLASH] = ACTIONS(356),
    [anon_sym_PIPE] = ACTIONS(358),
    [anon_sym_LT_DASH] = ACTIONS(358),
    [sym_identifier] = ACTIONS(356),
    [sym_func_identifier] = ACTIONS(358),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
    [sym_integer] = ACTIONS(358),
    [sym_string] = ACTIONS(358),
  },
  [100] = {
    [sym__term] = STATE(113),
    [sym_group] = STATE(41),
    [sym_function] = STATE(41),
    [sym__terminal] = STATE(41),
    [sym_lambda] = STATE(42),
    [aux_sym_block_expression_repeat1] = STATE(113),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(362),
    [anon_sym_LBRACK] = ACTIONS(362),
    [anon_sym_BSLASH] = ACTIONS(85),
    [anon_sym_1] = ACTIONS(85),
    [anon_sym_lambda] = ACTIONS(30),
    [sym_identifier] = ACTIONS(87),
    [sym_func_identifier] = ACTIONS(89),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
    [sym_integer] = ACTIONS(89),
    [sym_string] = ACTIONS(89),
  },
  [101] = {
    [sym__term] = STATE(100),
    [sym_group] = STATE(41),
    [sym_function] = STATE(41),
    [sym_func_body] = STATE(114),
    [sym__terminal] = STATE(41),
    [sym_lambda] = STATE(42),
    [aux_sym_block_expression_repeat1] = STATE(100),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(358),
    [anon_sym_LBRACK] = ACTIONS(358),
    [anon_sym_BSLASH] = ACTIONS(85),
    [anon_sym_1] = ACTIONS(85),
    [anon_sym_lambda] = ACTIONS(30),
    [sym_identifier] = ACTIONS(87),
    [sym_func_identifier] = ACTIONS(89),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
    [sym_integer] = ACTIONS(89),
    [sym_string] = ACTIONS(89),
  },
  [102] = {
    [anon_sym_LPAREN] = ACTIONS(381),
    [anon_sym_BSLASH] = ACTIONS(381),
    [anon_sym_1] = ACTIONS(381),
    [anon_sym_lambda] = ACTIONS(383),
    [sym_identifier] = ACTIONS(383),
    [sym_func_identifier] = ACTIONS(381),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
    [sym_integer] = ACTIONS(381),
    [sym_string] = ACTIONS(381),
  },
  [103] = {
    [anon_sym_LPAREN] = ACTIONS(385),
    [anon_sym_BSLASH] = ACTIONS(385),
    [anon_sym_1] = ACTIONS(385),
    [anon_sym_lambda] = ACTIONS(387),
    [sym_identifier] = ACTIONS(387),
    [sym_func_identifier] = ACTIONS(385),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
    [sym_integer] = ACTIONS(385),
    [sym_string] = ACTIONS(385),
  },
  [104] = {
    [sym__term] = STATE(115),
    [sym_group] = STATE(41),
    [sym_function] = STATE(41),
    [sym__terminal] = STATE(41),
    [sym_lambda] = STATE(116),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_BSLASH] = ACTIONS(85),
    [anon_sym_1] = ACTIONS(85),
    [anon_sym_lambda] = ACTIONS(30),
    [sym_identifier] = ACTIONS(87),
    [sym_func_identifier] = ACTIONS(89),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
    [sym_integer] = ACTIONS(89),
    [sym_string] = ACTIONS(89),
  },
  [105] = {
    [sym__term] = STATE(117),
    [sym_group] = STATE(41),
    [sym_function] = STATE(41),
    [sym_func_body] = STATE(99),
    [sym__terminal] = STATE(41),
    [sym_lambda] = STATE(83),
    [aux_sym_block_expression_repeat1] = STATE(117),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(233),
    [anon_sym_BSLASH] = ACTIONS(85),
    [anon_sym_1] = ACTIONS(85),
    [anon_sym_lambda] = ACTIONS(30),
    [anon_sym_DASH_GT] = ACTIONS(233),
    [anon_sym_COLON_EQ] = ACTIONS(233),
    [anon_sym_SLASH] = ACTIONS(231),
    [anon_sym_PIPE] = ACTIONS(233),
    [anon_sym_LT_DASH] = ACTIONS(233),
    [sym_identifier] = ACTIONS(87),
    [sym_func_identifier] = ACTIONS(89),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
    [sym_integer] = ACTIONS(89),
    [sym_string] = ACTIONS(89),
  },
  [106] = {
    [sym_func_sep] = STATE(118),
    [aux_sym_function_repeat1] = STATE(87),
    [anon_sym_DASH_GT] = ACTIONS(217),
    [anon_sym_DOT] = ACTIONS(217),
    [anon_sym_COLON] = ACTIONS(217),
    [sym_identifier] = ACTIONS(235),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
  },
  [107] = {
    [sym__term] = STATE(107),
    [sym_group] = STATE(14),
    [sym_function] = STATE(14),
    [sym__terminal] = STATE(14),
    [sym_lambda] = STATE(15),
    [aux_sym_block_expression_repeat1] = STATE(107),
    [anon_sym_SEMI] = ACTIONS(241),
    [anon_sym_LPAREN] = ACTIONS(243),
    [anon_sym_LBRACK] = ACTIONS(241),
    [sym__newline] = ACTIONS(246),
    [anon_sym_BSLASH] = ACTIONS(248),
    [anon_sym_1] = ACTIONS(248),
    [anon_sym_lambda] = ACTIONS(248),
    [sym_identifier] = ACTIONS(251),
    [sym_func_identifier] = ACTIONS(251),
    [sym_line_comment] = ACTIONS(34),
    [sym_block_comment] = ACTIONS(34),
    [sym_integer] = ACTIONS(251),
    [sym_string] = ACTIONS(251),
  },
  [108] = {
    [anon_sym_SEMI] = ACTIONS(389),
    [anon_sym_LPAREN] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(389),
    [sym__newline] = ACTIONS(391),
    [anon_sym_BSLASH] = ACTIONS(389),
    [anon_sym_1] = ACTIONS(389),
    [anon_sym_lambda] = ACTIONS(389),
    [sym_identifier] = ACTIONS(389),
    [sym_func_identifier] = ACTIONS(389),
    [sym_line_comment] = ACTIONS(34),
    [sym_block_comment] = ACTIONS(34),
    [sym_integer] = ACTIONS(389),
    [sym_string] = ACTIONS(389),
  },
  [109] = {
    [sym__term] = STATE(119),
    [sym_group] = STATE(41),
    [sym_function] = STATE(41),
    [sym__terminal] = STATE(41),
    [sym_lambda] = STATE(116),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_BSLASH] = ACTIONS(85),
    [anon_sym_1] = ACTIONS(85),
    [anon_sym_lambda] = ACTIONS(30),
    [sym_identifier] = ACTIONS(87),
    [sym_func_identifier] = ACTIONS(89),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
    [sym_integer] = ACTIONS(89),
    [sym_string] = ACTIONS(89),
  },
  [110] = {
    [sym__term] = STATE(110),
    [sym_group] = STATE(30),
    [sym_function] = STATE(30),
    [sym__terminal] = STATE(30),
    [sym_lambda] = STATE(31),
    [aux_sym_block_expression_repeat1] = STATE(110),
    [anon_sym_SEMI] = ACTIONS(241),
    [anon_sym_LPAREN] = ACTIONS(306),
    [anon_sym_LBRACK] = ACTIONS(241),
    [sym__newline] = ACTIONS(246),
    [sym_block_end] = ACTIONS(241),
    [anon_sym_EQ_EQ] = ACTIONS(241),
    [anon_sym_EQ1] = ACTIONS(241),
    [anon_sym_EQ2] = ACTIONS(241),
    [anon_sym_a_EQ] = ACTIONS(241),
    [anon_sym_EQa] = ACTIONS(241),
    [anon_sym_EQ_GT] = ACTIONS(241),
    [anon_sym_EQ3] = ACTIONS(241),
    [anon_sym_EQ4] = ACTIONS(241),
    [anon_sym_b_EQ] = ACTIONS(241),
    [anon_sym_EQb] = ACTIONS(241),
    [anon_sym_BSLASH] = ACTIONS(248),
    [anon_sym_1] = ACTIONS(248),
    [anon_sym_lambda] = ACTIONS(248),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(241),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(241),
    [sym_identifier] = ACTIONS(309),
    [sym_func_identifier] = ACTIONS(309),
    [sym_line_comment] = ACTIONS(34),
    [sym_block_comment] = ACTIONS(34),
    [sym_integer] = ACTIONS(309),
    [sym_string] = ACTIONS(309),
  },
  [111] = {
    [anon_sym_SEMI] = ACTIONS(389),
    [anon_sym_LPAREN] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(389),
    [sym__newline] = ACTIONS(391),
    [sym_block_end] = ACTIONS(389),
    [anon_sym_EQ_EQ] = ACTIONS(389),
    [anon_sym_EQ1] = ACTIONS(389),
    [anon_sym_EQ2] = ACTIONS(389),
    [anon_sym_a_EQ] = ACTIONS(389),
    [anon_sym_EQa] = ACTIONS(389),
    [anon_sym_EQ_GT] = ACTIONS(389),
    [anon_sym_EQ3] = ACTIONS(389),
    [anon_sym_EQ4] = ACTIONS(389),
    [anon_sym_b_EQ] = ACTIONS(389),
    [anon_sym_EQb] = ACTIONS(389),
    [anon_sym_BSLASH] = ACTIONS(389),
    [anon_sym_1] = ACTIONS(389),
    [anon_sym_lambda] = ACTIONS(389),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(389),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(389),
    [sym_identifier] = ACTIONS(389),
    [sym_func_identifier] = ACTIONS(389),
    [sym_line_comment] = ACTIONS(34),
    [sym_block_comment] = ACTIONS(34),
    [sym_integer] = ACTIONS(389),
    [sym_string] = ACTIONS(389),
  },
  [112] = {
    [sym__term] = STATE(120),
    [sym_group] = STATE(41),
    [sym_function] = STATE(41),
    [sym__terminal] = STATE(41),
    [sym_lambda] = STATE(116),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_BSLASH] = ACTIONS(85),
    [anon_sym_1] = ACTIONS(85),
    [anon_sym_lambda] = ACTIONS(30),
    [sym_identifier] = ACTIONS(87),
    [sym_func_identifier] = ACTIONS(89),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
    [sym_integer] = ACTIONS(89),
    [sym_string] = ACTIONS(89),
  },
  [113] = {
    [sym__term] = STATE(113),
    [sym_group] = STATE(41),
    [sym_function] = STATE(41),
    [sym__terminal] = STATE(41),
    [sym_lambda] = STATE(42),
    [aux_sym_block_expression_repeat1] = STATE(113),
    [anon_sym_LPAREN] = ACTIONS(336),
    [anon_sym_RPAREN] = ACTIONS(246),
    [anon_sym_LBRACK] = ACTIONS(246),
    [anon_sym_BSLASH] = ACTIONS(339),
    [anon_sym_1] = ACTIONS(339),
    [anon_sym_lambda] = ACTIONS(248),
    [sym_identifier] = ACTIONS(342),
    [sym_func_identifier] = ACTIONS(345),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
    [sym_integer] = ACTIONS(345),
    [sym_string] = ACTIONS(345),
  },
  [114] = {
    [anon_sym_LPAREN] = ACTIONS(391),
    [anon_sym_RPAREN] = ACTIONS(391),
    [anon_sym_LBRACK] = ACTIONS(391),
    [anon_sym_RBRACK] = ACTIONS(391),
    [anon_sym_BSLASH] = ACTIONS(391),
    [anon_sym_1] = ACTIONS(391),
    [anon_sym_lambda] = ACTIONS(389),
    [anon_sym_DASH_GT] = ACTIONS(391),
    [anon_sym_COLON_EQ] = ACTIONS(391),
    [anon_sym_SLASH] = ACTIONS(389),
    [anon_sym_PIPE] = ACTIONS(391),
    [anon_sym_LT_DASH] = ACTIONS(391),
    [sym_identifier] = ACTIONS(389),
    [sym_func_identifier] = ACTIONS(391),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
    [sym_integer] = ACTIONS(391),
    [sym_string] = ACTIONS(391),
  },
  [115] = {
    [anon_sym_RBRACK] = ACTIONS(393),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
  },
  [116] = {
    [sym_func_sep] = STATE(122),
    [aux_sym_function_repeat1] = STATE(123),
    [anon_sym_DASH_GT] = ACTIONS(217),
    [anon_sym_DOT] = ACTIONS(217),
    [anon_sym_COLON] = ACTIONS(217),
    [sym_identifier] = ACTIONS(395),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
  },
  [117] = {
    [sym__term] = STATE(124),
    [sym_group] = STATE(41),
    [sym_function] = STATE(41),
    [sym__terminal] = STATE(41),
    [sym_lambda] = STATE(83),
    [aux_sym_block_expression_repeat1] = STATE(124),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(362),
    [anon_sym_BSLASH] = ACTIONS(85),
    [anon_sym_1] = ACTIONS(85),
    [anon_sym_lambda] = ACTIONS(30),
    [anon_sym_DASH_GT] = ACTIONS(362),
    [anon_sym_COLON_EQ] = ACTIONS(362),
    [anon_sym_SLASH] = ACTIONS(360),
    [anon_sym_PIPE] = ACTIONS(362),
    [anon_sym_LT_DASH] = ACTIONS(362),
    [sym_identifier] = ACTIONS(87),
    [sym_func_identifier] = ACTIONS(89),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
    [sym_integer] = ACTIONS(89),
    [sym_string] = ACTIONS(89),
  },
  [118] = {
    [sym__term] = STATE(117),
    [sym_group] = STATE(41),
    [sym_function] = STATE(41),
    [sym_func_body] = STATE(114),
    [sym__terminal] = STATE(41),
    [sym_lambda] = STATE(83),
    [aux_sym_block_expression_repeat1] = STATE(117),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(358),
    [anon_sym_BSLASH] = ACTIONS(85),
    [anon_sym_1] = ACTIONS(85),
    [anon_sym_lambda] = ACTIONS(30),
    [anon_sym_DASH_GT] = ACTIONS(358),
    [anon_sym_COLON_EQ] = ACTIONS(358),
    [anon_sym_SLASH] = ACTIONS(356),
    [anon_sym_PIPE] = ACTIONS(358),
    [anon_sym_LT_DASH] = ACTIONS(358),
    [sym_identifier] = ACTIONS(87),
    [sym_func_identifier] = ACTIONS(89),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
    [sym_integer] = ACTIONS(89),
    [sym_string] = ACTIONS(89),
  },
  [119] = {
    [anon_sym_RBRACK] = ACTIONS(397),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
  },
  [120] = {
    [anon_sym_RBRACK] = ACTIONS(399),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
  },
  [121] = {
    [anon_sym_SEMI] = ACTIONS(401),
    [anon_sym_LPAREN] = ACTIONS(401),
    [anon_sym_LBRACK] = ACTIONS(401),
    [sym__newline] = ACTIONS(403),
    [anon_sym_BSLASH] = ACTIONS(401),
    [anon_sym_1] = ACTIONS(401),
    [anon_sym_lambda] = ACTIONS(401),
    [sym_identifier] = ACTIONS(401),
    [sym_func_identifier] = ACTIONS(401),
    [sym_line_comment] = ACTIONS(34),
    [sym_block_comment] = ACTIONS(34),
    [sym_integer] = ACTIONS(401),
    [sym_string] = ACTIONS(401),
  },
  [122] = {
    [sym__term] = STATE(127),
    [sym_group] = STATE(41),
    [sym_function] = STATE(41),
    [sym_func_body] = STATE(99),
    [sym__terminal] = STATE(41),
    [sym_lambda] = STATE(116),
    [aux_sym_block_expression_repeat1] = STATE(127),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(233),
    [anon_sym_RBRACK] = ACTIONS(233),
    [anon_sym_BSLASH] = ACTIONS(85),
    [anon_sym_1] = ACTIONS(85),
    [anon_sym_lambda] = ACTIONS(30),
    [sym_identifier] = ACTIONS(87),
    [sym_func_identifier] = ACTIONS(89),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
    [sym_integer] = ACTIONS(89),
    [sym_string] = ACTIONS(89),
  },
  [123] = {
    [sym_func_sep] = STATE(128),
    [aux_sym_function_repeat1] = STATE(87),
    [anon_sym_DASH_GT] = ACTIONS(217),
    [anon_sym_DOT] = ACTIONS(217),
    [anon_sym_COLON] = ACTIONS(217),
    [sym_identifier] = ACTIONS(235),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
  },
  [124] = {
    [sym__term] = STATE(124),
    [sym_group] = STATE(41),
    [sym_function] = STATE(41),
    [sym__terminal] = STATE(41),
    [sym_lambda] = STATE(83),
    [aux_sym_block_expression_repeat1] = STATE(124),
    [anon_sym_LPAREN] = ACTIONS(336),
    [anon_sym_LBRACK] = ACTIONS(246),
    [anon_sym_BSLASH] = ACTIONS(339),
    [anon_sym_1] = ACTIONS(339),
    [anon_sym_lambda] = ACTIONS(248),
    [anon_sym_DASH_GT] = ACTIONS(246),
    [anon_sym_COLON_EQ] = ACTIONS(246),
    [anon_sym_SLASH] = ACTIONS(241),
    [anon_sym_PIPE] = ACTIONS(246),
    [anon_sym_LT_DASH] = ACTIONS(246),
    [sym_identifier] = ACTIONS(342),
    [sym_func_identifier] = ACTIONS(345),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
    [sym_integer] = ACTIONS(345),
    [sym_string] = ACTIONS(345),
  },
  [125] = {
    [anon_sym_SEMI] = ACTIONS(401),
    [anon_sym_LPAREN] = ACTIONS(401),
    [anon_sym_LBRACK] = ACTIONS(401),
    [sym__newline] = ACTIONS(403),
    [sym_block_end] = ACTIONS(401),
    [anon_sym_EQ_EQ] = ACTIONS(401),
    [anon_sym_EQ1] = ACTIONS(401),
    [anon_sym_EQ2] = ACTIONS(401),
    [anon_sym_a_EQ] = ACTIONS(401),
    [anon_sym_EQa] = ACTIONS(401),
    [anon_sym_EQ_GT] = ACTIONS(401),
    [anon_sym_EQ3] = ACTIONS(401),
    [anon_sym_EQ4] = ACTIONS(401),
    [anon_sym_b_EQ] = ACTIONS(401),
    [anon_sym_EQb] = ACTIONS(401),
    [anon_sym_BSLASH] = ACTIONS(401),
    [anon_sym_1] = ACTIONS(401),
    [anon_sym_lambda] = ACTIONS(401),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(401),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(401),
    [sym_identifier] = ACTIONS(401),
    [sym_func_identifier] = ACTIONS(401),
    [sym_line_comment] = ACTIONS(34),
    [sym_block_comment] = ACTIONS(34),
    [sym_integer] = ACTIONS(401),
    [sym_string] = ACTIONS(401),
  },
  [126] = {
    [anon_sym_LPAREN] = ACTIONS(403),
    [anon_sym_RPAREN] = ACTIONS(403),
    [anon_sym_LBRACK] = ACTIONS(403),
    [anon_sym_RBRACK] = ACTIONS(403),
    [anon_sym_BSLASH] = ACTIONS(403),
    [anon_sym_1] = ACTIONS(403),
    [anon_sym_lambda] = ACTIONS(401),
    [anon_sym_DASH_GT] = ACTIONS(403),
    [anon_sym_COLON_EQ] = ACTIONS(403),
    [anon_sym_SLASH] = ACTIONS(401),
    [anon_sym_PIPE] = ACTIONS(403),
    [anon_sym_LT_DASH] = ACTIONS(403),
    [sym_identifier] = ACTIONS(401),
    [sym_func_identifier] = ACTIONS(403),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
    [sym_integer] = ACTIONS(403),
    [sym_string] = ACTIONS(403),
  },
  [127] = {
    [sym__term] = STATE(129),
    [sym_group] = STATE(41),
    [sym_function] = STATE(41),
    [sym__terminal] = STATE(41),
    [sym_lambda] = STATE(116),
    [aux_sym_block_expression_repeat1] = STATE(129),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(362),
    [anon_sym_RBRACK] = ACTIONS(362),
    [anon_sym_BSLASH] = ACTIONS(85),
    [anon_sym_1] = ACTIONS(85),
    [anon_sym_lambda] = ACTIONS(30),
    [sym_identifier] = ACTIONS(87),
    [sym_func_identifier] = ACTIONS(89),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
    [sym_integer] = ACTIONS(89),
    [sym_string] = ACTIONS(89),
  },
  [128] = {
    [sym__term] = STATE(127),
    [sym_group] = STATE(41),
    [sym_function] = STATE(41),
    [sym_func_body] = STATE(114),
    [sym__terminal] = STATE(41),
    [sym_lambda] = STATE(116),
    [aux_sym_block_expression_repeat1] = STATE(127),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(358),
    [anon_sym_RBRACK] = ACTIONS(358),
    [anon_sym_BSLASH] = ACTIONS(85),
    [anon_sym_1] = ACTIONS(85),
    [anon_sym_lambda] = ACTIONS(30),
    [sym_identifier] = ACTIONS(87),
    [sym_func_identifier] = ACTIONS(89),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
    [sym_integer] = ACTIONS(89),
    [sym_string] = ACTIONS(89),
  },
  [129] = {
    [sym__term] = STATE(129),
    [sym_group] = STATE(41),
    [sym_function] = STATE(41),
    [sym__terminal] = STATE(41),
    [sym_lambda] = STATE(116),
    [aux_sym_block_expression_repeat1] = STATE(129),
    [anon_sym_LPAREN] = ACTIONS(336),
    [anon_sym_LBRACK] = ACTIONS(246),
    [anon_sym_RBRACK] = ACTIONS(246),
    [anon_sym_BSLASH] = ACTIONS(339),
    [anon_sym_1] = ACTIONS(339),
    [anon_sym_lambda] = ACTIONS(248),
    [sym_identifier] = ACTIONS(342),
    [sym_func_identifier] = ACTIONS(345),
    [sym_line_comment] = ACTIONS(40),
    [sym_block_comment] = ACTIONS(40),
    [sym_integer] = ACTIONS(345),
    [sym_string] = ACTIONS(345),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(2),
  [9] = {.count = 1, .reusable = false}, SHIFT(3),
  [11] = {.count = 1, .reusable = true}, SHIFT(9),
  [13] = {.count = 1, .reusable = false}, SHIFT(4),
  [15] = {.count = 1, .reusable = false}, SHIFT(5),
  [17] = {.count = 1, .reusable = false}, SHIFT(6),
  [19] = {.count = 1, .reusable = false}, SHIFT(7),
  [21] = {.count = 2, .reusable = false}, SHIFT(9), SHIFT_EXTRA(),
  [24] = {.count = 1, .reusable = false}, SHIFT(10),
  [26] = {.count = 1, .reusable = false}, SHIFT(11),
  [28] = {.count = 1, .reusable = true}, SHIFT(10),
  [30] = {.count = 1, .reusable = false}, SHIFT(12),
  [32] = {.count = 1, .reusable = false}, SHIFT(14),
  [34] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [36] = {.count = 1, .reusable = false}, SHIFT(17),
  [38] = {.count = 1, .reusable = true}, SHIFT(18),
  [40] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [42] = {.count = 1, .reusable = false}, SHIFT(19),
  [44] = {.count = 1, .reusable = false}, SHIFT(20),
  [46] = {.count = 1, .reusable = true}, SHIFT(32),
  [48] = {.count = 1, .reusable = false}, SHIFT(21),
  [50] = {.count = 1, .reusable = false}, SHIFT(22),
  [52] = {.count = 1, .reusable = false}, SHIFT(23),
  [54] = {.count = 1, .reusable = false}, SHIFT(24),
  [56] = {.count = 1, .reusable = false}, SHIFT(25),
  [58] = {.count = 1, .reusable = false}, SHIFT(30),
  [60] = {.count = 1, .reusable = false}, SHIFT(34),
  [62] = {.count = 1, .reusable = false}, SHIFT(35),
  [64] = {.count = 1, .reusable = false}, SHIFT(36),
  [66] = {.count = 1, .reusable = true}, SHIFT(37),
  [68] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [70] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [72] = {.count = 1, .reusable = true}, SHIFT(38),
  [74] = {.count = 2, .reusable = false}, SHIFT(38), SHIFT_EXTRA(),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 1),
  [79] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 1),
  [81] = {.count = 1, .reusable = true}, SHIFT(39),
  [83] = {.count = 1, .reusable = true}, SHIFT(40),
  [85] = {.count = 1, .reusable = true}, SHIFT(12),
  [87] = {.count = 1, .reusable = false}, SHIFT(41),
  [89] = {.count = 1, .reusable = true}, SHIFT(41),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym_lambda, 1),
  [93] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [95] = {.count = 1, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2),
  [97] = {.count = 1, .reusable = false}, REDUCE(sym__term, 1),
  [99] = {.count = 1, .reusable = false}, SHIFT(44),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym__term, 1),
  [103] = {.count = 1, .reusable = true}, SHIFT(46),
  [105] = {.count = 1, .reusable = true}, SHIFT(48),
  [107] = {.count = 1, .reusable = false}, SHIFT(49),
  [109] = {.count = 1, .reusable = true}, SHIFT(49),
  [111] = {.count = 1, .reusable = false}, SHIFT(51),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_import_statement, 2),
  [115] = {.count = 1, .reusable = false}, REDUCE(sym_import_statement, 2),
  [117] = {.count = 1, .reusable = true}, SHIFT(52),
  [119] = {.count = 1, .reusable = true}, SHIFT(53),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym_block, 2),
  [123] = {.count = 1, .reusable = false}, REDUCE(sym_block, 2),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_alpha_convert, 1),
  [127] = {.count = 1, .reusable = false}, REDUCE(sym_alpha_convert, 1),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_beta_reduce, 1),
  [131] = {.count = 1, .reusable = false}, REDUCE(sym_beta_reduce, 1),
  [133] = {.count = 1, .reusable = false}, SHIFT(55),
  [135] = {.count = 1, .reusable = false}, SHIFT(56),
  [137] = {.count = 1, .reusable = false}, SHIFT(57),
  [139] = {.count = 1, .reusable = false}, SHIFT(58),
  [141] = {.count = 1, .reusable = true}, SHIFT(58),
  [143] = {.count = 1, .reusable = false}, SHIFT(60),
  [145] = {.count = 1, .reusable = false}, REDUCE(aux_sym__block_contents_repeat1, 1, .alias_sequence_id = 1),
  [147] = {.count = 1, .reusable = true}, REDUCE(aux_sym__block_contents_repeat1, 1, .alias_sequence_id = 1),
  [149] = {.count = 1, .reusable = true}, SHIFT(20),
  [151] = {.count = 1, .reusable = true}, SHIFT(30),
  [153] = {.count = 1, .reusable = false}, SHIFT(62),
  [155] = {.count = 1, .reusable = true}, SHIFT(64),
  [157] = {.count = 1, .reusable = true}, SHIFT(66),
  [159] = {.count = 1, .reusable = true}, SHIFT(67),
  [161] = {.count = 1, .reusable = false}, REDUCE(sym__block_contents, 1),
  [163] = {.count = 1, .reusable = false}, REDUCE(sym_block_expression, 1),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_block_expression, 1),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_annotation, 2),
  [169] = {.count = 1, .reusable = false}, REDUCE(sym_annotation, 2),
  [171] = {.count = 1, .reusable = false}, SHIFT(69),
  [173] = {.count = 1, .reusable = false}, SHIFT(70),
  [175] = {.count = 1, .reusable = false}, SHIFT(71),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 2),
  [179] = {.count = 1, .reusable = false}, REDUCE(sym_function_definition, 2),
  [181] = {.count = 2, .reusable = false}, REDUCE(sym_function_definition, 2), SHIFT_EXTRA(),
  [184] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [187] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [190] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(38),
  [193] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [196] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [199] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [202] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [205] = {.count = 3, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(38), SHIFT_EXTRA(),
  [209] = {.count = 1, .reusable = true}, SHIFT(73),
  [211] = {.count = 1, .reusable = false}, REDUCE(sym_group, 2),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_group, 2),
  [215] = {.count = 1, .reusable = true}, SHIFT(75),
  [217] = {.count = 1, .reusable = true}, SHIFT(77),
  [219] = {.count = 1, .reusable = true}, SHIFT(79),
  [221] = {.count = 1, .reusable = true}, SHIFT(80),
  [223] = {.count = 1, .reusable = false}, REDUCE(sym__term, 2),
  [225] = {.count = 1, .reusable = true}, REDUCE(sym__term, 2),
  [227] = {.count = 1, .reusable = false}, REDUCE(sym_func_sep, 1),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym_func_sep, 1),
  [231] = {.count = 1, .reusable = false}, REDUCE(sym_function, 2),
  [233] = {.count = 1, .reusable = true}, REDUCE(sym_function, 2),
  [235] = {.count = 1, .reusable = true}, SHIFT(87),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 2),
  [239] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 2),
  [241] = {.count = 1, .reusable = false}, REDUCE(aux_sym_block_expression_repeat1, 2),
  [243] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(11),
  [246] = {.count = 1, .reusable = true}, REDUCE(aux_sym_block_expression_repeat1, 2),
  [248] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(12),
  [251] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(14),
  [254] = {.count = 1, .reusable = true}, REDUCE(sym_file_path, 2),
  [256] = {.count = 1, .reusable = false}, REDUCE(sym_file_path, 2),
  [258] = {.count = 1, .reusable = true}, SHIFT(88),
  [260] = {.count = 1, .reusable = true}, SHIFT(89),
  [262] = {.count = 1, .reusable = false}, SHIFT(90),
  [264] = {.count = 1, .reusable = true}, REDUCE(sym_block, 3),
  [266] = {.count = 1, .reusable = false}, REDUCE(sym_block, 3),
  [268] = {.count = 1, .reusable = true}, SHIFT(91),
  [270] = {.count = 1, .reusable = false}, REDUCE(aux_sym__block_contents_repeat1, 2, .alias_sequence_id = 1),
  [272] = {.count = 1, .reusable = true}, REDUCE(aux_sym__block_contents_repeat1, 2, .alias_sequence_id = 1),
  [274] = {.count = 1, .reusable = false}, SHIFT(92),
  [276] = {.count = 1, .reusable = false}, REDUCE(aux_sym__block_contents_repeat1, 2, .alias_sequence_id = 2),
  [278] = {.count = 1, .reusable = true}, REDUCE(aux_sym__block_contents_repeat1, 2, .alias_sequence_id = 2),
  [280] = {.count = 2, .reusable = false}, REDUCE(aux_sym__block_contents_repeat1, 2), SHIFT_REPEAT(20),
  [283] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_contents_repeat1, 2), SHIFT_REPEAT(67),
  [286] = {.count = 1, .reusable = false}, REDUCE(aux_sym__block_contents_repeat1, 2),
  [288] = {.count = 2, .reusable = false}, REDUCE(aux_sym__block_contents_repeat1, 2), SHIFT_REPEAT(22),
  [291] = {.count = 2, .reusable = false}, REDUCE(aux_sym__block_contents_repeat1, 2), SHIFT_REPEAT(23),
  [294] = {.count = 2, .reusable = false}, REDUCE(aux_sym__block_contents_repeat1, 2), SHIFT_REPEAT(12),
  [297] = {.count = 2, .reusable = false}, REDUCE(aux_sym__block_contents_repeat1, 2), SHIFT_REPEAT(24),
  [300] = {.count = 2, .reusable = false}, REDUCE(aux_sym__block_contents_repeat1, 2), SHIFT_REPEAT(25),
  [303] = {.count = 2, .reusable = false}, REDUCE(aux_sym__block_contents_repeat1, 2), SHIFT_REPEAT(30),
  [306] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(20),
  [309] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(30),
  [312] = {.count = 1, .reusable = true}, REDUCE(sym_annotation, 3),
  [314] = {.count = 1, .reusable = false}, REDUCE(sym_annotation, 3),
  [316] = {.count = 1, .reusable = false}, REDUCE(aux_sym_annotation_repeat1, 2),
  [318] = {.count = 2, .reusable = false}, REDUCE(aux_sym_annotation_repeat1, 2), SHIFT_REPEAT(70),
  [321] = {.count = 1, .reusable = false}, REDUCE(aux_sym_annotation_repeat2, 2),
  [323] = {.count = 2, .reusable = false}, REDUCE(aux_sym_annotation_repeat2, 2), SHIFT_REPEAT(71),
  [326] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 3),
  [328] = {.count = 1, .reusable = false}, REDUCE(sym_function_definition, 3),
  [330] = {.count = 1, .reusable = true}, SHIFT(97),
  [332] = {.count = 1, .reusable = false}, REDUCE(sym_group, 3),
  [334] = {.count = 1, .reusable = true}, REDUCE(sym_group, 3),
  [336] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(39),
  [339] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(12),
  [342] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(41),
  [345] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(41),
  [348] = {.count = 1, .reusable = true}, SHIFT(102),
  [350] = {.count = 1, .reusable = true}, SHIFT(103),
  [352] = {.count = 1, .reusable = false}, SHIFT(103),
  [354] = {.count = 1, .reusable = true}, SHIFT(106),
  [356] = {.count = 1, .reusable = false}, REDUCE(sym_function, 3),
  [358] = {.count = 1, .reusable = true}, REDUCE(sym_function, 3),
  [360] = {.count = 1, .reusable = false}, REDUCE(sym_func_body, 1),
  [362] = {.count = 1, .reusable = true}, REDUCE(sym_func_body, 1),
  [364] = {.count = 1, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2),
  [366] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(87),
  [369] = {.count = 1, .reusable = false}, REDUCE(sym_block_tag, 3),
  [371] = {.count = 1, .reusable = true}, REDUCE(sym_block_tag, 3),
  [373] = {.count = 1, .reusable = true}, REDUCE(sym_block, 4),
  [375] = {.count = 1, .reusable = false}, REDUCE(sym_block, 4),
  [377] = {.count = 1, .reusable = false}, REDUCE(aux_sym__block_contents_repeat1, 3, .alias_sequence_id = 2),
  [379] = {.count = 1, .reusable = true}, REDUCE(aux_sym__block_contents_repeat1, 3, .alias_sequence_id = 2),
  [381] = {.count = 1, .reusable = true}, REDUCE(sym_replace_backwards, 1),
  [383] = {.count = 1, .reusable = false}, REDUCE(sym_replace_backwards, 1),
  [385] = {.count = 1, .reusable = true}, REDUCE(sym_replace_forwards, 1),
  [387] = {.count = 1, .reusable = false}, REDUCE(sym_replace_forwards, 1),
  [389] = {.count = 1, .reusable = false}, REDUCE(sym_function, 4),
  [391] = {.count = 1, .reusable = true}, REDUCE(sym_function, 4),
  [393] = {.count = 1, .reusable = true}, SHIFT(121),
  [395] = {.count = 1, .reusable = true}, SHIFT(123),
  [397] = {.count = 1, .reusable = true}, SHIFT(125),
  [399] = {.count = 1, .reusable = true}, SHIFT(126),
  [401] = {.count = 1, .reusable = false}, REDUCE(sym_beta_replacement, 5),
  [403] = {.count = 1, .reusable = true}, REDUCE(sym_beta_replacement, 5),
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
