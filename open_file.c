#include "monty.h"

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
