#include "monty.h"

/**
 * valid_args - Checks arguments
 * @argc: arguments
 * Return: 0
 */

void valid_args(int argc)
{
	if (argc == 2)
	return;

	dprintf(2, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
