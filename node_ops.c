#include "monty.h"

/**
 * create_node - Creates a new node for a doubly linked list
 * @head: The head of the doubly linked list
 * @n: The value of the new node
 * Return: The address of the new node, or NULL if it failed
*/
stack_t *create_node(stack_t **head, int n)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if (!head || !new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	return (new_node);
}

/**
 * push - Pushes a new node to the top of a doubly linked list
 * @stack: The head of the doubly linked list
 * @line_number: The line number of the opcode being executed
*/
void push(stack_t **stack, unsigned int line_number)
{
	int value;
	stack_t *new_node;

	char *op_arg = strtok(NULL, " \t\n");

	if (op_arg == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	value = atoi(op_arg);
	if (value == 0 && strcmp(op_arg, "0") != 0)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
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
 * pall - Prints all the values on a doubly linked list
 * @stack: The head of the doubly linked list
 * @line_number: The line number of the opcode being executed
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
