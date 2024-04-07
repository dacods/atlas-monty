#include "monty.h"

/**
 * pint - Prints the value at the top of the stack
 * @stack: pointer
 * @line_number: Line number where pint is called
 * Return: 0
 */

void pint(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	if (argumnets->head == NULL)
	{
		dprintf(2, "L%d: can't pint, stack empty\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}

	printf("%d\n", arguments->head->n);
}
