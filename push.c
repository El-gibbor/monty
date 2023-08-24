#include "monty.h"

int push(char *argument)
{
	int arg = _atoi(argument);

	if (arg == 0 && strcmp(argument, "0"))
	{
		printf("L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%s %d\n", argument, arg);

return (EXIT_SUCCESS);
}
