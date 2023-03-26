#include "monty.h"

/**
 * push - adds to the stack
 * Return: stack
 */

void push()
{
	int stack[LIMIT], top, element;

	if(top != isdigit)
	{
		printf("<line_number>: usage: push integer");
		exit(EXIT_FAILURE);
	}
	else
	{
		printf("Enter the element to be inserted:");
		scanf("%d", &element);
		top++;
		stack[top]= element;
	}
}
