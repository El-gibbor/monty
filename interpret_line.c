#include "monty.h"

/**
* interpret_line - Inteprets the line
*
* Return: EXIT_SUCCESS on success, and EXIT_FAILURE on failure
*/
int interpret_line(stack_t **stack)
{
	int i;
	char *opcode;
	static int line_number = -1;

	instruction_t instruction[] = {
		{"push", push},
		{"pall", pall},
		{NULL, NULL}
	};

	line_number++;

	opcode = strtok(line, " \t\n");
	if (opcode == NULL)
		return (EXIT_SUCCESS);

	for (i = 0; instruction[i].opcode; i++)
	{
		if (strcmp(opcode, instruction[i].opcode) == 0)
		{
			instruction[i].f(stack, line_number);
			return (EXIT_SUCCESS);
		}
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
	free_memory();
	exit(EXIT_FAILURE);
}
