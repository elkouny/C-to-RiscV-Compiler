#!/bin/bash
TO_ASSEMBLE=currentTests/in_code.c
OUT=currentTests/ast.txt
echo "########## Cleaning ###########"
make clean
sed -i -r 's/#*//g' Makefile
sed -i -r '14, 18 s/^/#/g' Makefile
sed -i -r '1 s/\/\*/\/\/\ /g' src/compiler_code/* 
sed -i -r '20 s/\*\//\/\/\ /g' src/compiler_code/*
echo "########## Making ###########"
make bin/print_parsed 
echo "########## Testing ###########"
cat $TO_ASSEMBLE | ./bin/print_parsed > $OUT
cat currentTests/ast.txt
echo "########## Done ###########"
