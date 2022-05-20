#include "monty.h"

/**
 * mul - The opcode mul multiply the top two elements of the stack.
 * it simply multiply the nodes, store the result on one node,
 * the other one is set to zero, and calls the "add" command function
 * @stack: stack where this function will operate
 * @line_number: on error case, to print out the info
 *
 *
 * Return: nothing
 * On error: it frees some buffers and exit the program
 * with EXIT_FAILURE
 */

void mul(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	if (current && current->next && (current->n != 0))
	{
		current->n = (current->next)->n * current->n;
		(current->next)->n = 0;
		add(stack, line_number);
	}
	else
	{
		freeStack(stack);
		free(pack.cmd);
		dprintf(2, "L%d: can't mul, stack too short", line_number);
		error("", 0, 1);
	}
}
