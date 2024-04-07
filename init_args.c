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

	arguments->instruction = malloc(sizeof(instruction_t));
	if (arguments->instruction == NULL)
		malloc_error();

	arguments->stream = NULL;
	arguments->line = NULL;
	arguments->n_tokens = 0;
	arguments->line_number = 0;
}
