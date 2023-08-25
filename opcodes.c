#include "monty.h"

/**
 * push - Pushes an element onto the stack.
 * @stack: Pointer to the top of the stack.
 * @line_number: Current line number in the file.
 */
void push(stack_t **stack, unsigned int line_number)
{
	int value;
	stack_t *new_node;
	char *op_arg = strtok(NULL, " \t\n");

	value = _atoi(op_arg);
	if (!op_arg || (!value && (strcmp(op_arg, "0") && strcmp(op_arg, "-0"))))
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		free_memory(stack);
		exit(EXIT_FAILURE);
	}
	new_node = create_node(stack, value);
	if (*stack != NULL)
	{
		new_node->next = *stack;
		(*stack)->prev = new_node;
	}
	*stack = new_node;
}

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

/**
 * pint - Prints the value at the top of the stack.
 * @stack: Pointer to the top of the stack.
 * @line_number: Current line number in the file.
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		free_memory(stack);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}

/**
 * pop - Removes the top element of the stack.
 * @stack: Pointer to the top of the stack.
 * @line_number: Current line number in the file.
 */
void pop(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		free_memory(stack);
		exit(EXIT_FAILURE);
	}

	*stack = (*stack)->next;
}

