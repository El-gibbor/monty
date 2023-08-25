#include "monty.h"

/**
 * pall - Prints all values on the stack.
 * @stack: Pointer to the top of the stack.
 * @line_number: Current line number in the file.
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *curr_node;
	(void)line_number; /* Unused variable */

	curr_node = *stack;
	while (curr_node != NULL)
	{
		printf("%d\n", curr_node->n);
		curr_node = curr_node->next;
	}
}
