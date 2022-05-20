#include "monty.h"

/**
 * pint - The opcode pint prints the value at the top of the
 * stack, followed by a new line.
 * @stack: stack where this function will operate
 * @line_number: on error case, to print out the info
 *
 *
 * Return: nothing
 * On error: it frees some buffers and exit the program
 * with EXIT_FAILURE
 */

void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack)
		printf("%d\n", (*stack)->n);
	else
	{
		freeStack(stack);
		free(pack.cmd);
		dprintf(2, "L%d: can't pint, stack empty", line_number);
		error("", 0, 1);
	}
}
