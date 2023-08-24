#include "monty.h"

/**
 * main - Entry Point
 * @argc: argument count
 * @argv: argument value
 *
 * Return: On success, always 0. On failure, -1.
 */
int main(int argc, char *argv[])
{
	char *line;
	size_t line_size;
	FILE *fd;
	stack_t *stack;

	/* Check Usage */
	check_usage(argc);

	/* Open the file */
	fd = open_file(argv[1]);

	/* Interpret the file */
	while (getline(&line, &line_size, fd))
		interpret_line(line, &stack);

	/* Free memory and close file */
	free_memory(NULL, NULL);

	return (EXIT_SUCCESS);
}
