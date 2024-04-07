#ifndef MONTY_H
#define MONTY_H
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct arg_s - hold variables
 * @stream: file that connects to the stream from file
 * @line: string which will be the line of text read from stream
 * Description: Hold variables that will be used
 */
typedef struct arg_s
{
	FILE *stream;
	char *line;
	unsigned int line_number;
	char **tokens;
	int n_tokens;
	instruction_t *instruction;
} arg_t;

extern arg_t *arguments;

int main(int argc, char **argv);
void valid_args(int argc);
void init_args();
void malloc_error(void);
void stream_fail(char *filename);
void stream(char *filename);
void free_tokens(void);
void get_instruction(void);
void run_instruction(void);
void invalid_instruction(void);
void close_stream(void);
void tokenize(void);
void push(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_numebr);
void nop(stack_t **stack, unsigned int line_number);

#endif
