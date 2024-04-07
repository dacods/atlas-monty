#include "monty.h"

/**
 * push - Pushes an integer onto the stack
 * @stack: pointer
 * @line_number: line number where push is called
 * Return: 0
 */

void push(stack_t **stack, unsigned int line_number)
{
	if (arguments->n_tokens <= 1 || !(is_number(arguments->tokens[1])))
	{
		free_args();
		dprintf(2, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	*stack = malloc(sizeof(stack_t));
	if (*stack == NULL)
		malloc_error();
	(*stack)->next = (*stack)->prev = NULL;

	(*stack)->n = (int) atoi(arguments->tokens[1]);

	if (arguments->head != NULL)
	{
		(*stack)->next = arguments->head;
		arguments->head->prev = *stack;
	}
	arguments->head = *stack;
	arguments->stack_length += 1;
}
