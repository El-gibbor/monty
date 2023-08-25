#include "monty.h"

void prototype_to_hide_global_variables(void);
global_var global;

/**
 * main - Entry Point
 * @argc: argument count
 * @argv: argument value
 *
 * Return: On success, always 0. On failure, -1.
 */
int main(int argc, char *argv[])
{
	size_t line_size = 0;
	stack_t *stack = NULL;

	/* Check Usage */
	check_usage(argc);

	/* Open the file */
	open_file(argv[1]);

	/* Interpret the file */
	while (getline(&global.line, &line_size, global.fd) != -1)
		interpret_line(&stack);

	/* Free memory and close file */
	free_memory(&stack);

	return (EXIT_SUCCESS);
}
