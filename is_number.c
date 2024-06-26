#include "monty.h"

/**
 * is_number - Checks if a string is a valid integer number
 * @str: string
 * Return: 1 if string is valid number, 0 otherwise
 */

int is_number(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i == 0 && str[i] == '-' && str[i + 1])
		{
			i++;
			continue;
		}

		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}

	return (1);
}
