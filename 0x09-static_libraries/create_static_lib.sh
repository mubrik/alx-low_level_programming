#!/bin/bash

# find .c files and compile obj
find . -iname "*.c" -exec bash -c ' gcc -c $0 -o ${0/\.c/.o}' {} \;
# create static library
ar rc liball.a *.o
