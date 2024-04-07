#include "monty.h"

/**
 * free_head - Free the memory allocated for the head and sets it to NULL
 *
 * Return: 0
 */

void free_head(void)
{
	if (arguments->head)
		free_stack(arguments->head);

	arguments->head = NULL;
}
