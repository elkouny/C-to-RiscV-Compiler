#!/bin/bash

TestFolder=currentTests

clear
make clean
make bin/print_parsed -B

if [[ "$?" -ne 0 ]]; then
    echo "Build Failed.";
else
    echo "Build Complete."
fi

bin/print_parsed < $TestFolder/in_code.txt > $TestFolder/out_code.txt 2> $TestFolder/assembly.txt

echo "Generated Code"

# make clean
