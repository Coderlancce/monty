#include "monty.h"

/**
 * wordsum - count the number of words
 * @buffer: pointer to string
 *
 * Return: number of words
 */

int wordsum(char *buffer)
{
	int i, count = 2;
	char *delim = " ";

	for (i = 0; buffer[i] != '\0'; i++)
	{
		if (buffer[i] == delim[0])
			count++;
	}
	return (count);
}
