#include <stdio.h>
#include <stdlib.h>
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
	int n = 1;
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
		n++;
	}

	return (EXIT_SUCCESS);
}
