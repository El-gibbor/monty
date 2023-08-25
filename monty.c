#include "monty.h"

void prototype_to_hide_global_variables(void);
global_var global;

/**
 * main - Executes the given monty bytecodes file
 * @argc: argument count
 * @argv: argument value
 * Return: EXIT_SUCCESS on success, EXIT_FAILURE on failure
 */
int main(int argc, char *argv[])
{
	size_t line_size = 0;
	stack_t *stack = NULL;

	check_usage(argc);

	open_file(argv[1]);

	/* Interpret the file */
	while (getline(&global.line, &line_size, global.fd) != -1)
		interpret_line(&stack);

	free_memory(&stack);
	return (EXIT_SUCCESS);
}

