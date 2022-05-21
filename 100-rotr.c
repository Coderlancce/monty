#include "monty.h"

/**
 * rotr - The last element of the stack becomes the top element of
 * the stack
 * @stack: stack where this function will operate
 * @line_number: on error case, to print out the info
 *
 *
 * Return: nothing
 * On error: it frees some buffers and exit the program
 * with EXIT_FAILURE
 */

void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *curr = *stack;
	int value = 0;
	(void) line_number;

	while (curr && curr->next)
		curr = curr->next;

	for (; curr && curr->prev; curr = curr->prev)
	{
		value = curr->n;
		curr->n = (curr->prev)->n;
		(curr->prev)->n = value;
	}
}
