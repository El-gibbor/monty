#include "monty.h"

/**
 * mod - remainder of the second top element by the top element of the stack.
 * @stack: Pointer to the top of the stack.
 * @line_number: Current line number in the file.
 */
void mod(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		free_memory(stack);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		free_memory(stack);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n %= (*stack)->n;
	pop(stack, line_number);
}

