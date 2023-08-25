#!/bin/bash

for task_dir in task_*; do
	./test_suite/"$task_dir"/runchecker.sh
done
