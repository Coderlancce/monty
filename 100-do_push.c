#include "monty.h"

/**
 *
 *
 */

void do_push(stack_t **stack, unsigned int line_number)
{
	stack_t *new;
	unsigned int num, i;

	for (i = 0; i < strlen(number); i++)
	{
		if (number[i] == '-')
			i++;
		if (!isdigit(number[i]))
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			free_stack(stack);
			exit(EXIT_FAILURE);
		}
	}
	num = atoi(number);
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		write(2, "Error: malloc failed\n", 21);
		exit(EXIT_FAILURE);
	}
	new->next = *stack;
	new->prev = NULL;
	new->n = num;
	if (*stack != NULL)
		(*stack)->prev = new;
	*stack = new;
}
