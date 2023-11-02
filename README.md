2022/2023 Compilers Coursework
==============================

## Setup:
```bash
$ docker build -t compilers_image .
$ docker run --rm -it -v "${PWD}:/code" -w "/code" --name "compilers_env" compilers_image
```

## Single Test to produce C code:
Write your C code in currentTests/in_code.c
Then run
```bash 
$ ./singleTest.sh
```
You should then see the output assembly code in currentTest/assembly.asm


## Single Test to visualize AST:
Write your C code in currentTests/in_code.c
Then run
```bash 
$ ./parsePrint.sh
```
You should then see the output assembly code in currentTest/ast.txt

## Run Test suite

```bash 
$ ./test.sh
```

C to RISCV compiler using Flex Bison and C++ for AST processing.
Ranked 7/70 groups for IAC Compilers coursework
Here is a list of features:
* a file containing just a single function with no arguments
* variables of `int` type
* local variables
* arithmetic and logical expressions
* if-then-else statements
* while loops
* files containing multiple functions that call each other
* functions that take up to four parameters
* for loops
* arrays declared globally (i.e. outside of any function in your file)
* arrays declared locally (i.e. inside a function)
* reading and writing elements of an array
* recursive function calls
* the `enum` keyword
* `switch` statements
* the `break` and `continue` keywords
* functions that take more than four parameters
* mutually recursive function calls
* locally scoped variable declarations (e.g. a variable that is declared inside the body of a while loop, such as `while(...) { int x = ...; ... }`.
* the `sizeof(...)` function (which takes either a type or a variable)
* taking the address of a variable using the `&` operator
* dereferencing a pointer-variable using the `*` operator
* pointer arithmetic
