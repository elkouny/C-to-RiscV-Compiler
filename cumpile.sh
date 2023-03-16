#!/bin/bash

make clean

make all
#clear
while true
do 
echo "Enter your expression"
read -r EXPRESSION

echo $EXPRESSION | ./bin/cumpile
done