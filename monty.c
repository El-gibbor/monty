#include "monty.h"
#include <stdlib.h>

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
	fd = open_file(argv[1]);

	/* Interpret the file */
	line = NULL;
	while (getline(&line, &line_size, fd) != -1)
		interpret_line(&stack);

	/* Free memory and close file */
	free(stack);
	free_memory();

	return (EXIT_SUCCESS);
}
