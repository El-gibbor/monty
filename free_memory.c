#include "monty.h"

/**
 * free_memory - Frees the memory allocated for the program
 */
void free_memory(void)
{
	free(line);
	fclose(fd);
}
