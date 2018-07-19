There are 3 types of expression declaration: function, block, and single line expression.

A function is defined like so:
```
FUNTION_NAME = <expression>
```
Note that the first character of the function name must be a capital letter. Any following characters can be mixed lower, upper, numbers, and underscores.

A block is defined like this:
```
>>> { Optional block description }
<expression>
<expression>
...
<<<
```
The closing `<<<` is currently optional, and a blank line will also end a block.

Finally, an expression can be given a line to itself using this syntax:
```
> <expression>
```

An expression is a combination of groups, functions, variables, etc. Here are several examples of the identity function (using the different allowed syntaxes):
```
> \x -> x
> \x . x
> λx . x
> lambda x: x
```

Note that `lambda` must be all lower case to be interpreted as starting a function.
