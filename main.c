#include "monty.h"

arg_t *arguments = NULL;

/**
 * main - Entry
 * @argc: arguments
 * @argv: strings
 * Return: 0
 */

int main(int argc, char **argv)
{
	size_t n = 0;

	valid_args(argc);
	init_args();
	stream(argv[1]);

	while (getline(&arguments->line, &n, arguments->stream) != -1)
	{
		arguments->line_number += 1;
	}

	return (0);
}
