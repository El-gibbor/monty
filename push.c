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

	if (op_arg == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		free_memory(stack);
		exit(EXIT_FAILURE);
	}

	value = _atoi(op_arg);
	if (value == 0 && (strcmp(op_arg, "0") != 0 && strcmp(op_arg, "-0") != 0))
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
