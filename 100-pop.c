#include "monty.h"

/**
 * pop - The opcode pop removes the top element of the stack.
 * @stack: stack where this function will operate
 * @line_number: on error case, to print out the info
 *
 *
 * Return: nothing
 * On error: it frees some buffers and exit the program
 * with EXIT_FAILURE
 */

void pop(stack_t **stack, unsigned int line_number)
{
	if (*stack && (*stack)->next)
	{
		*stack = (*stack)->next;
		free((*stack)->prev);
	}
	else if (*stack)
	{
		free(*stack);
		*stack = NULL;
	}
	else
	{
		free(pack.cmd);
		dprintf(2, "L%d: can't pop an empty stack", line_number);
		error("", 0, 1);
	}
}
