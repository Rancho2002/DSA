#!/bin/bash
# Initialize the first two Fibonacci numbers
a=0
b=1
# Calculate and print the Fibonacci series up to 100
while [ $a -le 100 ]; do
    echo -n "$a "
    temp=$a
    a=$b
    b=$((temp + b))
done
echo
