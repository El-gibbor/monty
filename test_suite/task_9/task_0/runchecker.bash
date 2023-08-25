#!/bin/bash

# Print directory name as header
task_number=$(echo "$PWD" | sed -n 's/.*task_\([0-9]*\).*/\1/p')
echo -e "\n#######################################################################"
echo "############################### TASK $task_number ################################"

cp ../../monty ./
for script in *checker.sh; do
  # Extract check number from script name
  check_number=$(echo "$script" | sed -n 's/\([0-9]*\)-checker.sh/\1/p')
  
  # Print check number
  echo -e "\n_______________________________ Check $check_number _______________________________"

  chmod +x "$script" # Give execute permission if needed
  sleep 1.5
  ./"$script"           # Run the script
done
