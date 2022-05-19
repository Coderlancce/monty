#include "monty.h"

/**
 *
 *
 *
 */

void do_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	(void) line_number;

	if (*stack == NULL)
		return;
	if ((*stack)->next == NULL)
	{
		free(tmp);
		*stack = NULL;
		return;
	}
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	free(tmp);
}
