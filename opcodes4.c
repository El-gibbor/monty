#include "monty.h"

void _stack(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	global.mode = 0;
}

void queue(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	global.mode = 1;
}
