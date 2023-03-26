#define LIMIT 100

/**
 * pall - displays the stack
 */

void pall()
{
	printf("The elements of the stack are: \n");
	for(i = top; i >= 0; i--)
	{
		printf("%d\n", stack[i]);
	}
}
