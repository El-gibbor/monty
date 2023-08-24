#include "monty.h"

/**
 * check_usage - Checks if the program was executed with the correct number
 * of arguments
 * @argc: The number of arguments
 */
void check_usage(int argc)
{
	if (argc < 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
}
