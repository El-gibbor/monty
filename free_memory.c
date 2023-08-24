#include "monty.h"
#include <stdlib.h>

void free_memory(void)
{
	free(global.line);
	fclose(global.fd);
}
