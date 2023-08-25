#include "monty.h"
#include <stdio.h>

/**
 * swap - Swaps the top two elements of the stack.
 * @stack: Pointer to the top of the stack.
 * @line_number: Current line number in the file.
 */
void add(stack_t **stack, unsigned int line_number)
{
	int sum;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		free_memory(stack);
		exit(EXIT_FAILURE);
	}

	sum = (*stack)->n + (*stack)->next->n;
	pop(stack, line_number);
	printf("%d\n", sum);
}

