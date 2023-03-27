#include "monty.h"

/**
 * main - runs the code
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define LIMIT 4

void push();
void display();

int top;
int stack[LIMIT];
int i;
int choice;

int main()
{
    int top = -1;
    do
    {
        
        printf("1. insert\n2. display\n3. exit\n\n");
        printf("please select a choice:");
        scanf("%d", &choice);
    
        switch(choice)
        {
            case 1:
            push();
            break;
            case 2:
            display();
            break;
            case 3:
            exit(0);
            break;
            default:
            printf("An invalid choice.");
            break;
        }
    }while(choice != 3);
    return 0;
}

void push()
{
    int element;
    
    
    if(top == LIMIT-1)
    {
        printf("stack overflow\n");
    }
    else
    {
        printf("What are your numbers?: ");
        scanf("%d", &element);
        top++;
        stack[top]= element;
    }
}

void display()
{
    printf("the elements of the stack are:\n");
    for(i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
}
