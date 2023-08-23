#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i;

	if (argc <= 1)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}

	while (argv[i])
		if (NULL == fopen(argv[i], "r")
		{
			printf("Error: can't find file <%s>\n", argv[i]);
			return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}
