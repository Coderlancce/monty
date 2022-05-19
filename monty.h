#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>

extern char *number;

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

void checkfile(char *myfile);
int wordsum(char *buffer);
char **extractcommand(char *buffer, int large, FILE *montyFile);
void num_args(char **command, char *buffer, stack_t **list, int line, FILE *montyFile);
void codeprocess(char **command, char *buffer, int line, stack_t **list, FILE *montyFile);
void free_stack(stack_t **stack);
void do_push(stack_t **stack, unsigned int line_number);
void do_pall(stack_t **stack, unsigned int line_number);
void do_pop(stack_t **stack, unsigned int line_number);
void do_pint(stack_t **stack, unsigned int line_number);
void do_swap(stack_t **stack, unsigned int line_number);
void do_add(stack_t **stack, unsigned int line_number);
void do_nop(stack_t **stack, unsigned int line_number);

#endif /*MONTY_H*/
