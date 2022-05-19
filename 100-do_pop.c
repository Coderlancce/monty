#include "monty.h"

/**
 * do_pop - The opcode pop removes the top element of the stack
 * @stack: doubly linked list representation of a stack (or queue)
 * @line_number: Currently line number in the file
 *
 * Return: void
 */

void do_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	(void) line_number;

	if (tmp == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->next == NULL)
	{
		free(tmp);
		*stack = NULL;
		return;
	}
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	free(tmp);
}
