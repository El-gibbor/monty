#include "monty.h"

/**
 * _atoi -  a function that converts a string to integers
 * @str: the string to be converted
 *
 * Return: the resulting integer, if error return 0
 */
int _atoi(const char *str)
{
	int result = 0, sign = 1;

	if (str == NULL)
		return (0);

	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (0);

		result = result * 10 + (*str - '0');
		str++;
	}
	return (sign * result);
}

