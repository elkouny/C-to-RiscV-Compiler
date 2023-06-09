#!/bin/bash

TestFolder=currentTests

clear
make clean

sed -i -r 's/#*//g' Makefile
sed -i -r '39,84 s/^/#/' Makefile
# sed -i '39,84 s/#*//g' Makefile

sed -i -r 's/^(\/\/\ )+//g' src/compiler_code/*

make bin/print_parsed -B\

if [[ "$?" -ne 0 ]]; then
    echo "Build Failed.";
else
    echo "Build Complete."
fi

bin/print_parsed < $TestFolder/in_code.c > $TestFolder/out_code.txt 2> $TestFolder/assembly.asm

echo "Generated Code"

# make clean
