#include "monty.h"

void free_memory(void)
{
	free(line);
	fclose(fd);
}
