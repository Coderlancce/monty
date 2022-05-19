#include "monty.h"

/**
 * main - Here its the first step
 * @argc: numbers of arguments
 * @argv: argument vector
 *
 * Return: 0 in success
 */

int main(int argc, char *argv[])
{
	char *myfile;

	if (argc != 2)
	{
		write(2, "USAGE: monty file\n", 18);
		exit(EXIT_FAILURE);
	}

	myfile = argv[1];
	checkfile(myfile);

	return (0);
}
