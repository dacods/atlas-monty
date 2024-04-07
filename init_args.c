#include "monty.h"

/**
 * init_args - Initializes a pointer to struct
 *
 * Return: 0
 */

void init_args()
{
	arguments = malloc(sizeof(arg_t));
	if (arguments == NULL)
	malloc_error();

	arguments->stream = NULL;
	arguments->line = NULL;
}
