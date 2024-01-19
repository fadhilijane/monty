#include "monty.h"

/**
 * check_args - verifys the number of args in cmd line
 * @argc: args count
 * Return: nothing
 */
void check_args(int argc)
{
	if (argc < 2)
	{
		dprintf(2, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	else
		return;
}
