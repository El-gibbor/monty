#!/bin/bash

# Print directory name as header
task_number=$(echo "$PWD" | sed -n 's/.*task_\([0-9]*\).*/\1/p')
echo "##### TASK $task_number #####"

cp ../../monty ./
for script in *checker.sh; do
    if [ "$script" != "runchecker.sh" ]; then
        # Print script name
        echo -e "\n------ ./$script ------"
        
        chmod +x "$script"    # Give execute permission if needed
        ./"$script"           # Run the script
    fi
done

