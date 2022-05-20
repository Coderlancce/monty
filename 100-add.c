#include "monty.h"

/**
 * add - The opcode add adds the top two elements of the stack.
 * deletes it, and push a new one with the result
 * @stack: stack where this function will operate
 * @line_number: on error case, to print out the info
 *
 *
 * Return: nothing
 * On error: it frees some buffers and exit the program
 * with EXIT_FAILURE
 */

void add(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	if (current && current->next)
	{
		(current->next)->n = current->n + (current->next)->n;
		pop(stack, pack.n);
	}
	else
	{
		freeStack(stack);
		free(pack.cmd);
		dprintf(2, "L%d: can't add, stack too short", line_number);
		error("", 0, 1);
	}
}
