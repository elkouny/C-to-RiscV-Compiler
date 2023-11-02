2022/2023 Compilers Coursework
==============================
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
You should then see the visulized AST in currentTest/ast.txt

## Run Test suite

```bash 
$ ./test.sh
```
How it works:
For instance, suppose I have a file called `test_program.c` that contains:

    int f() { return 5; }

and another file called `test_program_driver.c` that contains:

    int f();
    int main() { return !( 5 == f() ); }

I run the compiler on the test program, like so:

    bin/c_compiler -S test_program.c -o test_program.s

I then use GCC to assemble the generated assembly program (`test_program.s`), like so:

    riscv64-unknown-elf-gcc -march=rv32imfd -mabi=ilp32d -o test_program.o -c test_program.s

I then use GCC to link the generated object file (`test_program.o`) with the driver program (`test_program_driver.c`), to produce an executable (`test_program`), like so:

    riscv64-unknown-elf-gcc -march=rv32imfd -mabi=ilp32d -static -o test_program test_program.o test_program_driver.c

I then use spike to simulate the executable on RISC-V, like so:

    spike pk test_program

This command should produce the exit code `0`.


