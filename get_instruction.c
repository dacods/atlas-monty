#include "monty.h"

/**
 * get_instruction - instruction based on the first token from input line
 *
 * Return: 0
 */

void get_instruction(void)
{
	int i = 0;

	instruction_t instructions[] = {
		{"push", &push}, {"pop", &pop},
		{"pint", &pint}, {"swap", &swap},
		{"nop", &nop}, {"add", &add},
		{"pall", &pall},
		{NULL, NULL}
	};

	if (arguments->n_tokens == 0)
		return;

	for (; instructions[i].opcode != NULL; i++)
	{
		if (strcmp(instructions[i].opcode, argument->tokens[0]) == 0)
		{
			argument->instruction->opcode = instructions[i].opcode;
			argument->instruction->f = instructions[i].f;
			return;
		}
	}

	invalid_instruction();
}
