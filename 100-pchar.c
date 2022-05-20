#include "monty.h"

/**
 * pchar - The opcode pchar prints the value at the top of the
 * stack in ASCII, followed by a new line.
 * @stack: stack where this function will operate
 * @line_number: on error case, to print out the info
 *
 *
 * Return: nothing
 * On error: it frees some buffers and exit the program
 * with EXIT_FAILURE
 */

void pchar(stack_t **stack, unsigned int line_number)
{
	char *msg;

	if (*stack)
		if ((*stack)->n >= 0 && (*stack)->n <= 127)
		{
			printf("%c\n", (*stack)->n);
				return;
		}
		else
			msg = "L%d: can't pchar, value out of range";
	else
		msg = "L%d: can't pchar, stack empty";

	freeStack(stack);
	free(pack.cmd);
	dprintf(2, msg, line_number);
	error("", 0, 1);
}
