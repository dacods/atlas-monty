#include "monty.h"

/**
 * delete_stack_node - delete node at he head
 *
 * Return: 0
 */

void delete_stack_node(void)
{
	stack_t *tmp;

	tmp = arguments->head;
	arguments->head = tmp->next;
	free(tmp);
}
