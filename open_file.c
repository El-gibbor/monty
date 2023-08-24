#include "monty.h"
#include <stdio.h>

FILE *open_file(char *filepath)
{
	fd = fopen(filepath, "r");
	if (fd == NULL)
	{
		fprintf(stderr, "Error: can't open file %s\n", filepath);
		free_memory();
		exit(EXIT_FAILURE);
	}
	return (fd);
}
