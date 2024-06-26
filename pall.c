#include "monty.h"

/**
 * pall - Prints all the elments in the stack
 * @stack: pointer
 * @line_number: Line number where pall is called
 * Return: 0
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	if (arguments->head == NULL)
		return;

	(void) line_number;
	(void) stack;

	tmp = arguments->head;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
