#!/bin/bash

TestFolder=currentTests


make bin/print_parsed -B

if [[ "$?" -ne 0 ]]; then
    echo "Build failed.";
fi

bin/print_parsed < $TestFolder/in_code.txt > $TestFolder/out_code.txt 2> $TestFolder/assembly.txt

# make clean