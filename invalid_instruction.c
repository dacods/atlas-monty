#include "monty.h"

/**
 * invaild_instruction - Handles errors
 *
 * Return: 0
 */

void invaild_instruction(void)
{
	dprintf(2, "L%d: unknown instruction %s\n", argument->line_number, argument->tokens[0]);
	close_stream();
	free_tokens();
	free_args();
	exit(EXIT_FAILURE);
}
