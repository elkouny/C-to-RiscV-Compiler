#!/bin/bash
TO_ASSEMBLE=currentTests/in_code.c
OUT=currentTests/assembly.asm
echo "########## Cleaning ###########"
make clean
sed -i -r 's/#*//g' Makefile
sed -i -r '29,31 s/^/#/' Makefile
sed -i -r '1 s/\/\//\/\*\ /g' src/compiler_code/* 
sed -i -r '20 s/\/\//\*\/\ /g' src/compiler_code/*
echo "########## Making ###########"
make all
echo "########## Testing ###########"
./bin/c_compiler -S "${TO_ASSEMBLE}" -o "${OUT}"
cat currentTests/assembly.asm 
echo "########## Done ###########"
