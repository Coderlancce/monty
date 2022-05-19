#include "monty.h"

char *number;

/**
 * checkfile - get the information of the document
 * @myfile: pointer save the name file
 *
 * Return: none
 */

void checkfile(char *myfile)
{
	FILE *montyFile;
	char *buffer;
	char **command;
	size_t size = 0;
	int ret;
	int large, line = 0, i = 0;
	stack_t *list = NULL;

	montyFile = fopen(myfile, "r");
	if (montyFile == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", myfile);
		exit(EXIT_FAILURE);
	}
	while ((ret = getline(&buffer, &size, montyFile)) != EOF)
	{
		if (!buffer)
		{
			write(2, "Error: malloc failed\n", 21);
			fclose(montyFile);
			exit(EXIT_FAILURE);
		}
		line += 1;
		if (ret == 1)
			continue;
		else
		{
			i = 0;
			while (buffer[i] == ' ' && buffer[i + 1] == ' ')
				i++;
			if (buffer[i + 1] == '\n')
				continue;
		}
		large = wordsum(buffer);
		command = extractcommand(buffer, large, montyFile);
		num_args(command, buffer, &list, line, montyFile);
	}
	free_stack(&list);
	free(buffer);
	fclose(montyFile);
}
