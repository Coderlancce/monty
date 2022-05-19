#include "monty.h"

char *number;

/**
 *
 *
 *
 */

void codeprocess(char **command, char *buffer, int line, stack_t **list, FILE *montyFile)
{
	int j = 0;
	instruction_t opcodeFunc[] = {
		{"push", do_push},
		{"pall", do_pall},
		{"pint", do_pint},
		{"pop", do_pop},
		{"swap", do_swap},
		{"add", do_add},
		{"nop", do_nop},
		{NULL, NULL},
	};
	while (opcodeFunc[j].opcode != NULL)
	{
		if (strcmp(opcodeFunc[j].opcode, command[0]) == 0)
		{
			opcodeFunc[j].f(list, line);
			return;
		}
		j++;
	}
	if (opcodeFunc[j].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line, command[0]);
		free(command);
		free(buffer);
		free_stack(list);
		fclose(montyFile);
		exit(EXIT_FAILURE);
	}
}
