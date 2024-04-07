#include "monty.h"

/**
 * invaild_instruction - Handles errors
 *
 * Return: 0
 */

void invalid_instruction(void)
{
	dprintf(2, "L%d: unknown instruction %s\n", arguments->line_number, arguments->tokens[0]);
	close_stream();
	free_tokens();
	free_args();
	exit(EXIT_FAILURE);
}
