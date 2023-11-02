#!/bin/bash
TO_ASSEMBLE=currentTests/in_code.c
OUT=currentTests/assembly.asm
echo "########## Cleaning ###########"
make clean
echo "########## Making ###########"
make all
echo "########## Testing ###########"
./bin/c_compiler -S "${TO_ASSEMBLE}" -o "${OUT}"
cat currentTests/assembly.asm 
echo "########## Done ###########"
