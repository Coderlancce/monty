#include "monty.h"

/**
 * stack - Set the mode to stack, instead of queue
 * @stack: stack where this function will operate
 * @line_number: on error case, to print out the info
 *
 *
 * Return: nothing
 * On error: it frees some buffers and exit the program
 * with EXIT_FAILURE
 */

void stack(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;

	pack.mode = 0;
}
