#include "monty.h"

/**
 * do_pint - The opcode pint prints the value at the top of the stack
 * @stack: struct of doubly linked list
 * @line_number: line number currently in the file
 *
 * Return: void
 */

void do_pint(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;

	if (tmp == NULL)
	{
		free_stack(stack);
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", tmp->n);
}
