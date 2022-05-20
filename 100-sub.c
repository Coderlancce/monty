#include "monty.h"

/**
 * sub - The opcode sub substract the top two elements of the stack.
 * it simply multiply the first node value by "-1" and calls
 * "add" command function
 * @stack: stack where this function will operate
 * @line_number: on error case, to print out the info
 *
 *
 * Return: nothing
 * On error: it frees some buffers and exit the program
 * with EXIT_FAILURE
 */

void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	if (current && current->next)
	{
		current->n *= -1;
		add(stack, line_number);
	}
	else
	{
		freeStack(stack);
		free(pack.cmd);
		dprintf(2, "L%d: can't sub, stack too short", line_number);
		error("", 0, 1);
	}
}
