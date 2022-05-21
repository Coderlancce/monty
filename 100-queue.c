#include "monty.h"

/**
 * queue - Set the mode to queue, instead of stack
 * @stack: stack where this function will operate
 * @line_number: on error case, to print out the info
 *
 *
 * Return: nothing
 * On error: it frees some buffers and exit the program
 * with EXIT_FAILURE
 */

void queue(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;

	pack.mode = 1;
}
