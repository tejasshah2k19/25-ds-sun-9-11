#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int stack[SIZE];
int top = -1;

void push(int num)
{
    top++;
    stack[top] = num;
}

void pop()
{
    printf(" %d", stack[top]);
    top--;
}

void display()
{
    int i;
    for (i = top; i >= 0; i--)
    {
        printf(" \n%d", stack[i]);
    }
}

int main()
{
    int choice;
    int num;

    while (-1)
    {
        printf("\n1 For PUSH\n2 For POP\n3 For Display\n4 For Exit");
        printf("\nEnter choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter number");
            scanf("%d", &num);
            push(num);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);

        default:
            break;
        }
    }
    return 0;
}