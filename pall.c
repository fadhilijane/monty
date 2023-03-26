#include "monty.h"

/**
 * pall - displays the stack
 */

void pall()
{
	int i;
	int stack[LIMIT];
	int top;

	printf("The elements of the stack are: \n");
	for(i = top; i >= 0; i--)
	{
		printf("%d\n", stack[i]);
	}
}
