#include "monty.h"

void pall(stack_t **stack, unsigned int line_number)
{
	int arg = _atoi(argument);

	if (arg == 0 && strcmp(argument, "0"))
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		free_memory();
		exit(EXIT_FAILURE);
	}

	(void)stack;
}
