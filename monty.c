#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * main - Entry Point
 * @argc: argument count
 * @argv: argument value
 *
 * Return: On success, always 0. On failure, -1.
 */
int main(int argc, char *argv[])
{
	char *line = NULL, *opcode;
	int n = 1, line_number = 0;
	size_t line_size = 0;
	FILE *fd;

	if (argc <= 1)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}

	while (argv[n])
	{
		fd = fopen(argv[n], "r");
		if (fd == NULL)
		{
			printf("Error: can't open file %s\n", argv[n]);
			return (EXIT_FAILURE);
		}

		while(getline(&line, &line_size, fd) != -1)
		{
			opcode = strtok(line, " \t\n");

			if (strcmp(opcode, "push") == 0)
			{
				printf("push\n");
			}
			else if (strcmp(opcode, "pall") == 0)
			{
				printf("pall\n");
			}
			else
			{
				printf("L%d: unknown instruction %s\n", line_number, opcode);
				return (EXIT_FAILURE);
			}
			free(line);
			line_number++;
		}
		n++;
	}

	return (EXIT_SUCCESS);
}
