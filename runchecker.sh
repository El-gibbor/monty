#!/bin/bash

cd test_suite || exit 1
for task_dir in *; do
	if [ -d $task_dir ]; then
		cd $task_dir
		./runchecker.sh
		cd ..
	fi
done
