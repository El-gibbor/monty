#include "monty.h"

/**
 * free_memory - Frees allocated memory and closes files.
 */
void free_memory(void)
{
	free(line);
	fclose(fd);
}
