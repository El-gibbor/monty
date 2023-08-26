#include "monty.h"
#include <stdio.h>

/**
 * add - Adds the top two elements of the stack.
 * @stack: Pointer to the top of the stack.
 * @line_number: Current line number in the file.
 */
void add(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		free_memory(stack);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n += (*stack)->n;
	pop(stack, line_number);
}

/**
 * nop - Does nothing
 * @stack: Pointer to the top of the stack.
 * @line_number: Current line number in the file.
 */
void nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}

/**
 * sub - Subtracts top element from the second top element of the stack.
 * @stack: Pointer to the top of the stack.
 * @line_number: Current line number in the file.
 */
void sub(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		free_memory(stack);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n -= (*stack)->n;
	pop(stack, line_number);
}

/**
 * _div - divides the second top element by the top element of the stack.
 * @stack: Pointer to the top of the stack.
 * @line_number: Current line number in the file.
 */
void _div(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		free_memory(stack);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		free_memory(stack);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n /= (*stack)->n;
	pop(stack, line_number);
}

/**
 * mul - multiplies the top two elements of the stack.
 * @stack: Pointer to the top of the stack.
 * @line_number: Current line number in the file.
 */
void mul(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		free_memory(stack);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n *= (*stack)->n;
	pop(stack, line_number);
}

