#include "monty.h"

/**
 * pstr - The opcode pstr prints the string starting at the top
 * of the stack, followed by a new line.
 * @stack: stack where this function will operate
 * @line_number: on error case, to print out the info
 *
 *
 * Return: nothing
 * On error: it frees some buffers and exit the program
 * with EXIT_FAILURE
 */

void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *curr = *stack;
	(void) line_number;

	for (; curr; curr = curr->next)
		if (curr->n > 0 && curr->n <= 127)
			putchar(curr->n);
		else
			break;
	putchar('\n');
}
