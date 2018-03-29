# tree-sitter-lambda

A personal language for lambda calculus

## Syntax

Take the following:
```
-- isZero 0
>> (λz.z(λy.False)True) 0
=> 0 (λy.False) True
=> False (λy.False) True
=> True
```

- The first line is a comment.
- The second line begins with `>>`, indicating we are forming a "block" of expressions (each is an altered form of the previous).
- Parentheses indicate explicit grouping.
- `λ` is used for function declarations, but `\`, `lambda`, `Lambda`, and `LAMBDA` work as well (currently).
- The variables following the `λ` are bound variables.
- The `.` indicates the beginning of the function body.
  - Alternatively, `->` can be used. `λx.x` is the same as `λx -> x`.
  - Whitespace here is mostly ignored.
- Variables can be given a number suffix; e.g., `x`, `x0`, `x_23` are all valid (and different) variable names.
- Variables starting with a capital letter are named variables; they have special meaning defined elsewhere. All (non-suffix) numbers are considered named.
- The expression ends at a newline, or `;`.
- Following the first expression is `=>`, which is beta-conversion.
  - `β=` or `=β` can also be used.

Not above, but also important
- `==`, `α=`, `=α` indicate alpha conversion
