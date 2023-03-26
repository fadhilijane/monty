#include "monty.h"

/**
 * main - runs the code
 *
 */

int main()
{
	int choice;

	printf("The stacks are:\n\n");
	top = -1;

	do
	{
		printf("1. insert\n2. Display\n3. exit\n\n");
		printf("Enter your choice:");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				push();
				break;
			case 2:
				pall();
				break;
			case 3:
				exit(0);
				break;
			default:
				printf("Sorry, invalid choice!\n");
				break;
		}
	}
	while(choice != 3);
	return 0;
}

