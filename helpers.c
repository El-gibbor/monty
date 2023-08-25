#include "monty.h"

/**
 * interpret_line - Interprets the line and executes corresponding opcodes.
 * @stack: Pointer to the top of the stack.
 *
 * Return: EXIT_SUCCESS on success, and EXIT_FAILURE on failure.
 */
int interpret_line(stack_t **stack)
{
	int i;
	char *opcode;
	static int line_number;

	instruction_t instruction[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"nop", NULL},
		{NULL, NULL}
	};
	line_number++;

	opcode = strtok(global.line, " \t\n");
	if (opcode == NULL)
		return (EXIT_SUCCESS);

	for (i = 0; instruction[i].opcode; i++)
	{
		if (strcmp(opcode, instruction[i].opcode) == 0)
		{
			instruction[i].f(stack, line_number);
			return (EXIT_SUCCESS);
		}
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
	free_memory(stack);
	exit(EXIT_FAILURE);
}

/**
 * free_memory - Frees allocated memory and closes files.
 *
 * @stack: The stack
 */
void free_memory(stack_t **stack)
{
	stack_t *current = *stack;
	stack_t *next_node;

	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
	*stack = NULL;
	free(global.line);
	fclose(global.fd);
}

/**
 * check_usage - Checks the command line arguments for proper usage.
 * @argc: Number of command line arguments.
 */
void check_usage(int argc)
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
}

/**
 * open_file - A fucntion thar opens a files path for read
 * @filepath: path to the file to read
 */
void open_file(char *filepath)
{
	global.fd = fopen(filepath, "r");
	if (global.fd == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filepath);
		exit(EXIT_FAILURE);
	}
}

/**
 * _atoi -  a function that converts a string to integers
 * @str: the string to be converted
 *
 * Return: the resulting integer, if error return 0
 */
int _atoi(const char *str)
{
	int result = 0, sign = 1;

	if (str == NULL)
		return (0);

	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (0);

		result = result * 10 + (*str - '0');
		str++;
	}
	return (sign * result);
}
