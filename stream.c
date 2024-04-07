#include "monty.h"

/**
 * stream_fail - Error when reading a file fails
 * @filename: a file
 * Return: 0
 */

void stream_fail(char *filename)
{
	fprintf(stderr, "Error: Can't open file %s\n", filename);
	free_args();
	exit(EXIT_FAILURE);
}

/**
 * stream - gets the stream
 * @filename: a file
 * Return: 0
 */

void stream(char *filename)
{
	int fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		stream_fail(filename);

	arguments->stream = fdopen(fd, "r");
	if (arguments->stream == NULL)
	{
		close(fd);
		stream_fail(filename);
	}
}
