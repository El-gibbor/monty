#ifndef MONTY_H
#define MONTY_H

#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif /* !_GNU_SOURCE */

/* Header Files */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

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
 * struct global_variables - Global variables
 * @line: line read by getline
 * @fd: file descriptor of opened file
 *
 * Description: Creates a struct to hold global variables
 */
typedef struct global_variables
{
	char *line;
	FILE *fd;
} global_var;

/* Function Prototypes */
void check_usage(int argc);
int _atoi(const char *str);
void open_file(char *filepath);
void free_memory(stack_t **stack);
int interpret_line(stack_t **stack);
stack_t *create_node(stack_t **head, int n);
void pop(stack_t **stack, unsigned int line_number);
void push(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);

/* GLOBAL VARIABLES */
extern global_var global;

#endif /* !MONTY_H */
