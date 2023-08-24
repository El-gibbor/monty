#include "monty.h"
#include <stdlib.h>

void free_memory(char *line, FILE *fd)
{
	free(line);
	fclose(fd);
}
