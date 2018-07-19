const PREC = {
  FUNC: 10,
  FUNC_BODY: 10,
  BLOCK: 1,
  APPLY: 10,
  REP_OP: 1,
  BETA_REPLACE: 1,
  COMMENT: 10
};

module.exports = grammar({
  name: 'lambda',

  extras: $ => [/[\s\uFEFF\u2060\u200B]|\n/, $.comment],

  rules: {

    program: $ => repeat(choice($.block, $.expression)),

    block: $ => prec(PREC.BLOCK, seq($.begin_block, $.expression, repeat(seq($._operator, $.expression)))),

    comment: $ => token(prec(PREC.COMMENT, choice(
      seq("--", /.*/, "\n"),
      seq('"""', /[^"""]*/, '"""\n')
    ))),

    begin_block: $ => choice(">>", "|>", "$>"),

    _operator: $ => choice($.beta_reduce, $.alpha_convert),

    expression: $ => seq(repeat($._term), choice("\n", ";")),

    _term: $ => seq(choice(
      $.apply,
      $.named_variable,
      $.variable,
      $.numbered_variable,
      $.function,
      $.group,
      $.beta_replacement
    )),

    beta_replacement: $ => prec(PREC.BETA_REPLACE, seq($._term, $.repl_def)),

    repl_def: $ => seq("[", $._term, $.replace_operator, $._term, "]"),

    _var: $ => choice($.variable, $.named_variable, $.numbered_variable),

    replace_operator: $ => prec(PREC.REP_OP, choice("/", "\\", "|", "<-")),

    named_variable: $ => choice("True", "False", " 0", " 1", " 2"),

    apply: $ => prec.left(PREC.APPLY, seq(choice($._term, $.apply), $._term)),

    variable: $ => seq(/[a-z]/),

    numbered_variable: $ => seq(/[a-z]/, /_?\d+/),

    function: $ => prec.right(PREC.FUNC, seq($._lambda, $.bound_variables, $._func_sep, $.func_body)),

    bound_variables: $ => repeat1(choice($.variable, $.numbered_variable)),

    func_body: $ => prec.right(PREC.FUNC_BODY, seq($._term, repeat($._term))),

    _lambda: $ => choice("\\", /\\?(LAMBDA|lambda|Lambda)/, "\u03BB"),

    group: $ => seq("(", repeat($._term), ")"),

    _func_sep: $ => choice(".", "->"),

    beta_reduce: $ => choice("=>", seq("=", "β"), seq("β", "=")),

    alpha_convert: $ => choice("==", seq("=", "α"), seq("α", "="))
  }
});
