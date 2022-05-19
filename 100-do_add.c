#include "monty.h"

/**
 *
 *
 *
 */

void do_add(stack_t **stack, unsigned int line_number)
{
	int value;

	if (*stack == NULL ||(*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	value = (*stack)->n;
	value += (*stack)->next->n;
	do_pop(stack, line_number);
	(*stack)->n = value;
}
