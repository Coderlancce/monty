#include "monty.h"

/**
 * extractcommand - divide in double pointer the string
 * @buffer: pointer to string
 * @large: number of words
 * @montyFile: File
 *
 * Return: double pointer
 */

char **extractcommand(char *buffer, int large, FILE *montyFile)
{
	char *delim = " \n\t";
	char *tok;
	size_t i;
	char **command;

	command = malloc(sizeof(char *) * large);
	if (command == NULL)
	{
		write(2, "Error: malloc failed\n", 21);
		free(buffer);
		fclose(montyFile);
		exit(EXIT_FAILURE);
	}
	tok = strtok(buffer, delim);
	i = 0;
	while (tok)
	{
		command[i] = tok;
		tok = strtok(NULL, delim);
		i++;
	}
	command[i] = NULL;
	return (command);
}
