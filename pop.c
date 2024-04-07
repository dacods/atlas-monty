#include "monty.h"

/**
 * pop - Removes the top element from the stack
 * @stack: pointer
 * @line_number: Line number where pop is called
 * Return: 0
 */

void pop(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	if (arguments->head == NULL)
	{
		dprintf(2, "L%d: can't pop an empty stack\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}

	delete_stack_node();
	arguments->stack_length -= 1;
}
