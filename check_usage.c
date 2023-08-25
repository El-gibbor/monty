#include "monty.h"

/**
 * check_usage - Checks the command line arguments for proper usage.
 * @argc: Number of command line arguments.
 */
void check_usage(int argc)
{
	if (argc < 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
}
