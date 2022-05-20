#include "monty.h"

/**
 * isNumber - checks if a given str, is an array of ASCII
 * digits
 * @str: string to check
 *
 *
 * Return: 1 if true, else 0
 * On error: nothing
 */

int isNumber(char *str)
{
	if (!*(str + 1))
		return (isdigit(*str) ? 1 : 0);
	return (isdigit(*str) || (*str == '-') ? isNumber(str + 1) : 0);
}
