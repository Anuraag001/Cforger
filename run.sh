#!/bin/bash

# Check if there is at least one command line argument
if [ $# -eq 0 ]; then
    echo "Usage: $0 <your_input>"
    exit 1
fi

# Access the first command line argument using $1
user_input="$1"

# Display the input
# echo "You entered: $user_input"
flex $1.l
bison $1.y -d
gcc lex.yy.c $1.tab.c
./a.out input.txt