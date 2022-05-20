#include "monty.h"

/**
 * error - it free and close something according to
 * values given in parameters and exit a program with
 * EXIT_FAILURE
 * @str: message to print on "stderr"
 * @shouldFree: if should free the given str
 * @closeFile: if shuold to close the file
 * (it's a global variable)
 *
 *
 * Return: exit with EXIT_FAILURE
 * On error: nohting
 */
void error(char *str, int shouldFree, int closeFile)
{
  dprintf(2, "%s\n", str);
  if (shouldFree)
    free(str);
  if (closeFile)
    fclose(pack.fdcode);
  exit(EXIT_FAILURE);
}
