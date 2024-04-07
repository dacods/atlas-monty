#include "monty.h"

/**
 * malloc_error - Error when malloc fails
 *
 * Return: 0
 */

void malloc_error(void)
{
	dprintf(2, "Error: malloc failed\n");
	free_args();
	exit(EXIT_FAILURE);
}
