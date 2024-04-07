#include "monty.h"

/**
 * free_args - free memory allocated to arguments pointer
 *
 * Return: 0
 */

void free_args(void)
{
	if (arguments == NULL)
		return;

	if (arguments->instruction)
	{
		free(arguments->instruction);
		arguments->instruction = NULL;
	}

	free_head();

	if (arguments->line)
	{
		free(arguments->line);
		arguments->line = NULL;
	}

	free(arguments);
}
