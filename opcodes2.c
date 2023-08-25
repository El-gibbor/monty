#include "monty.h"

/**
 * nop - This opcode doesn't perform any operation
 * @stack: Pointer to the top of the stack.
 * @line_number: Current line number in the file.
 */
void nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;  /* Unused variable */
	(void)line_number;  /* Unused variable */
}
