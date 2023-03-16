#!/bin/bash

make clean

make
#clear
while true
do
echo "Enter your expression"
read -r EXPRESSION

echo $EXPRESSION | ./bin/print_canonical
done

