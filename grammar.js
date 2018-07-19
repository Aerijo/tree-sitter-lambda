const PREC = {
  block: 1,
  function: 2,
  func_body: 3
};

module.exports = grammar({
  name: 'lambda',

  extras: $ => [/\s/, $.line_comment, $.block_comment],

  word: $ => $.identifier,

  rules: {
    // Start rule
    program: $ => repeat(choice(
      $.line_comment,
      $.block_comment,
      $.annotation,
      $.function_definition,
      $.block,
      seq(">", $.expression),
      $._newline
    )),

    // Non terminals
    function_definition: $ => seq(
      $.func_identifier,
      "=",
      $.expression
    ),

    block: $ => prec.right(PREC.block, seq(
      $.block_start,
      optional($.block_tag),
      optional($._block_contents),
      $.block_end
    )),

    block_tag: $ => seq("{", $.identifier, "}"),

    _block_contents: $ => repeat1(choice(
      $.annotation,
      $._newline,
      seq(
        optional($._relation_operator),
        alias($.block_expression, "expression"),
        optional(";")
      )
    )),

    block_expression: $ => prec.right(repeat1($._term)),

    _relation_operator: $ => choice($.alpha_convert, $.beta_reduce),

    expression: $ => seq(repeat1($._term), choice(";", $._newline)),

    _term: $ => prec.right(seq(
      choice(
        $.group,
        $.function,
        $._terminal
      ),
      optional($.beta_replacement)
    )),

    group: $ => seq("(", repeat($._term), ")"),

    function: $ => prec.right(PREC.function, seq(
      $.func_indicator,
      repeat($.identifier),
      $.func_sep,
      optional($.func_body)
    )),

    func_body: $ => prec.right(repeat1($._term)),

    beta_replacement: $ => seq("[", $._term, $._replacement_indicator, $._term, "]"),

    _replacement_indicator: $ => choice($.replace_forwards, $.replace_backwards),

    _terminal: $ => choice(
      $.string,
      $.integer,
      $.identifier,
      $.func_identifier
    ),

    // Terminals
    _newline: $ => /\n/,

    block_start: $ => />>>+/,

    block_end: $ => /<<<+/,

    alpha_convert: $ => choice("==", "\u03B1=", "=\u03B1", "a=", "=a"),

    beta_reduce: $ => choice("=>", "\u03B2=", "=\u03B2", "b=", "=b"),

    func_indicator: $ => choice("\\", "\u03BB", "lambda"),

    func_sep: $ => choice("->", ".", ":"),

    annotation: $ => choice(
      seq('"""', repeat(choice(/[^"]/, /"[^"]/, /""[^"]/)), '"""'),
      seq("'''", repeat(choice(/[^']/, /'[^']/, /''[^']/)), "'''")
    ),

    // forwards means "x becomes y" (\x.M) N => M [x := N]
    replace_forwards: $ => choice("->", ":=", "/", "|"),

    // backwards means "x is now the meaning of y" (\x.M) N => M [N <- x]
    replace_backwards: $ => choice("<-", "\\"),

    identifier: $ => token(seq(/[a-z_]/, repeat(/[a-zA-Z0-9_]/))),

    func_identifier: $ => token(seq(/[A-Z]/, repeat(/[a-zA-Z0-9]/))),

    line_comment: $ => token(seq("--", /.*/)),

    block_comment: $ => token(seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/')),

    integer: $ => /\d+/,

    string: $ => token(choice( // python style (mostly)
        seq('`', repeat(choice(/[^\\`\n]/, /\\./, /\\\r?\n/)), '`'),
        seq('"', repeat(choice(/[^\\"\n]/, /\\./, /\\\r?\n/)), '"'),
        seq("'", repeat(choice(/[^\\'\n]/, /\\./, /\\\r?\n/)), "'")
    ))
  }
});
