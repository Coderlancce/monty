#include "monty.h"

/**
 * free_stack - free elements of the stack
 * @stack: doble pointer to head
 *
 * Return: none
 */

void free_stack(stack_t **stack)
{
	stack_t *tmp;

	if (*stack == NULL)
		return;
	while (1)
	{
		tmp = *stack;
		if ((*stack)->next == NULL)
		{
			free(tmp);
			*stack = NULL;
			break;
		}
		*stack = (*stack)->next;
		(*stack)->prev = NULL;
		free(tmp);
	}
}
