#include "monty.h"
#include <stdlib.h>

int interpret_line(char *line, stack_t **stack)
{
	char *opcode, *argument;

	opcode = strtok(line, " \t\n");
	if (opcode == NULL)
		return (EXIT_SUCCESS);

	argument = strtok(NULL, " \t\n");

	execute_opcode(opcode, _atoi(argument), stack);

	return (EXIT_SUCCESS);
}

int execute_opcode(char *opcode, int arg, stack_t **stack)
{
	int i;
	static int line_number;
	instruction_t instruction[10];

	for (i = 0; instruction[i].opcode; i++)
	{
		if (strcmp(opcode, instruction[i].opcode) == 0)
		{
			instruction[i].f(stack, arg);
			return (EXIT_SUCCESS);
		}
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
	return (EXIT_FAILURE);
}
