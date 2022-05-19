#include "monty.h"

/**
 *
 *
 *
 */

void do_swap(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	tmp = (*stack)->next;
	(*stack)->next = tmp->next;
	(*stack)->prev = tmp;

	tmp->next = *stack;
	tmp->prev = NULL;

	(*stack)->next->prev = *stack;
	*stack = tmp;
}
