const PREC = {
  FUNC: 1,
  APPL: 10,
  COMMENT: 1
}

module.exports = grammar({
  name: 'lambda',

  extras: $ => [/[\s\uFEFF\u2060\u200B]|\n/, $.comment],

  rules: {
    // The production rules of the context-free grammar
    program: $ => repeat(choice($.block, $.expression)),

    block: $ => prec(1, seq($.begin_block, $.expression, repeat(seq($._operator, $.expression)))),

    comment: $ => token(prec(10, choice(
      seq("--", /.*/, "\n"),
      seq('"""', /[^"""]*/, '"""')
    ))),

    begin_block: $ => choice(">>", "|>", "$>"),

    _operator: $ => choice($.beta_reduce, $.alpha_convert),

    expression: $ => seq(repeat1($._term), choice("\n", ";")),

    _term: $ => seq(choice(
      $.apply,
      $.named_variable,
      $.variable,
      $.numbered_variable,
      $.function,
      $.group,
      $.beta_replacement
    )),

    beta_replacement: $ => prec(1, seq($._term, $.repl_def)),

    repl_def: $ => seq("[", $._term, $.replace_operator, $._term, "]"),

    _var: $ => choice($.variable, $.named_variable, $.numbered_variable),

    replace_operator: $ => prec(1, choice("/", "\\", "|", "<-")),

    named_variable: $ => choice("True", "False", " 0", " 1", " 2"),

    apply: $ => prec.left(1, seq(choice($._term, $.apply), $._term)),

    variable: $ => seq(/[a-z]/),

    numbered_variable: $ => seq(/[a-z]/, /_?\d+/),

    function: $ => prec.right(10, seq($._lambda, $.bound_variables, $._func_sep, $.func_body)),

    bound_variables: $ => repeat1(choice($.variable, $.numbered_variable)),

    func_body: $ => prec.right(1, seq($._term, repeat($._term))),

    _lambda: $ => choice("\\", /\\?(LAMBDA|lambda|Lambda)/, "\u03BB"),

    group: $ => seq("(", repeat($._term), ")"),

    _func_sep: $ => choice(".", "->"),

    beta_reduce: $ => choice("=>", seq("=", "β"), seq("β", "=")),

    alpha_convert: $ => choice("==", seq("=", "α"), seq("α", "="))
  }
});
