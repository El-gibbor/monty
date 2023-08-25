#include "monty.h"

/**
 * create_node - Creates a new node and adds it to the stack.
 * @head: Pointer to the top of the stack.
 * @n: Value to store in the new node.
 *
 * Return: Address of the newly created node, or NULL on failure.
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

