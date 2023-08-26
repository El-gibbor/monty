#include "monty.h"
#include <stdio.h>

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

/**
 * pchar - prints the char at the top of the stack, followed by a new line..
 * @stack: Pointer to the top of the stack.
 * @line_number: Current line number in the file.
 */
void pchar(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		free_memory(stack);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n < 0 || (*stack)->n > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		free_memory(stack);
		exit(EXIT_FAILURE);
	}

	printf("%c\n", (*stack)->n);
}

/**
 * pstr - prints the stack as a string.
 * @stack: Pointer to the top of the stack.
 * @line_number: Current line number in the file.
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *curr_node = *stack;
	(void)line_number; /* unused parameter */

	while (curr_node != NULL && curr_node->n > 0 && curr_node->n <= 127)
	{
		printf("%c", (curr_node)->n);
		curr_node = curr_node->next;
	}
	printf("\n");
}

/**
 * rotl - Rotates the stack to the top.
 * @stack: Pointer to the top of the stack.
 * @line_number: Current line number in the file.
 */
void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *last = *stack; /* clone of the stack */

	(void)line_number; /* unused parameter */

	if (*stack == NULL || (*stack)->next == NULL)
		return;

	/* get to the last node of the stack */
	while (last->next != NULL)
		last = last->next;

	last->next = *stack; /* link the top of the stack to the last node */
	(*stack)->prev = last;

	*stack = (*stack)->next; /* update the stack to pop off top node */
	last->next->next = NULL; /* discontinue the list after the newly added node */
}

