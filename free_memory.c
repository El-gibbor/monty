#include "monty.h"

/**
 * free_memory - Frees allocated memory and closes files.
 *
 * @stack: The stack
 */
void free_memory(stack_t **stack)
{
	stack_t *current = *stack;
	stack_t *next_node;

	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}

	*stack = NULL;
	free(global.line);
	fclose(global.fd);
}
