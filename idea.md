### Goals
- Beginner friendly; features like
  - Fully parenthesise an expression
  - Validate a block
  - Solve an expression (and show steps)
- Smart reduction (find quickest route to beta normal, avoid growing expressions, stop if no progress is being made --- e.g., after 1000 steps)

### Not goals (use Haskell or something if you want this)
- Fast execution; this is an educational tool, not a proper language



### Implementation

- Sequential execution; anything can be overridden, but must be defined before use
