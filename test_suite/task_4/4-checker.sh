#!/bin/bash

# Define colors
GREEN='\033[0;32m'
RED='\033[0;31m'
NC='\033[0m' # No Color

# monty bytcode test case:
montyBytes="add
pall"

# make test case file:
echo "$montyBytes" > testCase00

# Run the program and capture its output
program_output=$(./monty testCase00 2>&1 >/dev/null)

# Specify the expected result
expected_result="L1: can't add, stack too short"

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
