#include "monty.h"

/**
 * close_stream - Closes the file stream and sets it to NULL
 *
 * Return: 0
 */

void close_stream(void)
{
	if (arguments->stream == NULL)
		return;

	fclose(arguments->stream);
	arguments->stream = NULL;
}
