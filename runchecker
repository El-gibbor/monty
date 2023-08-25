#!/bin/bash

cd test_suite || exit 1

# If no arguments are provided, run all tasks
if [ $# -eq 0 ]; then
    for task_dir in *; do
        if [ -d "$task_dir" ]; then
            cd "$task_dir"
            ./runchecker.bash
            sleep 2
            cd ..
        fi
    done
else
    # Loop through provided task numbers
    for task_number in "$@"; do
        task_dir="task_$task_number"
        if [ -d "$task_dir" ]; then
            cd "$task_dir"
            ./runchecker.bash
            sleep 2
            cd ..
        else
            echo "Task directory $task_dir not found"
        fi
    done
fi

cd ..
