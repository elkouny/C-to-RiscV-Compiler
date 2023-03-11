#!/bin/bash

make
#clear
while true
do
echo "Enter your expression"
read -r EXPRESSION

echo $EXPRESSION | ./bin/print_parsed 
done
