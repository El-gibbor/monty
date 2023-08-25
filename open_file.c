#include "monty.h"
#include <stdio.h>

/**
 * open_file - A fucntion thar opens a files path for read
 * @filepath: path to the file to read
 */
void open_file(char *filepath)
{
	global.fd = fopen(filepath, "r");
	if (global.fd == NULL)
	{
		fprintf(stderr, "Error: can't open file %s\n", filepath);
		exit(EXIT_FAILURE);
	}
}
