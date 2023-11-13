#!/bin/bash

# Path to your file
FILE="../fibb.h"

# Check GCC formatting
g++ -fsyntax-only $FILE
if [ $? -ne 0 ]
then
    echo "Code does not conform to GCC format"
    exit 1
fi

# Compilation with -Werror flag
g++ -Werror $FILE
if [ $? -ne 0 ]
then
    echo "Compilation errors detected"
    exit 1
fi
