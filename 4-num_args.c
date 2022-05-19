#include "monty.h"

char *number;

/**
 *
 *
 *
 */

void num_args(char **command, char *buffer, stack_t **list, int line, FILE *montyFile)
{
	int i = 0;

	while (command[i] != NULL)
		i++;
	if (i != 2 && i != 1)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line, command[0]);
		free(command);
		free(buffer);
		free_stack(list);
		fclose(montyFile);
		exit(EXIT_FAILURE);
	}
	if (i == 2)
		number = command[1];
	codeprocess(command, buffer, line, list, montyFile);
}
