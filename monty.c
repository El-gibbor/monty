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
	/* Variable declaration */
	char *filename, *line = NULL, *opcode, *argument;
	int line_number = 0;
	size_t line_size = 0;
	FILE *fd;
	stack_t *stack = NULL;
	instruction_t instruction[10];

	/* Check Usage */
	if (argc < 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}

	/* Open the file */
	filename = argv[1];
	fd = fopen(filename, "r");
	if (fd == NULL)
	{
		fprintf(stderr, "Error: can't open file %s\n", filename);
		return (EXIT_FAILURE);
	}

	while(getline(&line, &line_size, fd) != -1)
	{
		/* get the opcode */
		opcode = strtok(line, " \t\n");
		if (opcode == NULL)
			continue;

		argument = strtok(NULL, " \t\n");
		for(i = 0; instruction[i]; i++)
		{
			if (strcmp(opcode, instruction[i].opcode) == 0)
			{
				instruction[i].f(&stack, argument);
				break;
			}
		}
		if (instruction[i] == NULL)
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
			free(line);
			fclose(fd);
			return (EXIT_FAILURE);
		}
		line_number++;
	}

	/* Free memory and close file */
	free(line);
	fclose(fd);

	return (EXIT_SUCCESS);
}
