#!/bin/bash

# Define colors
GREEN='\033[0;32m'
RED='\033[0;31m'
NC='\033[0m' # No Color

# monty bytcode test case:
montyBytes="push 1
push 2
push 3
pint"

# make test case file:
echo "$montyBytes" > testCase00

# Run the program and capture its output
program_output=$(./monty testCase00)

# Specify the expected result
expected_result="3"

# Compare the program's output with the expected result
if [ "$program_output" == "$expected_result" ]; then
    echo -e "${GREEN}Mafanikio${NC}"
else
    echo -e "${RED}Kushindwa${NC}"
    echo "MontyBytes:
$montyBytes

Got:
$program_output
expected:
$expected_result"
fi

# delete the test case file
rm testCase00
