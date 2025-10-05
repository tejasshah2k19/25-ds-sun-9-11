#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int q[SIZE];
int r = -1;
int f = -1;

void enQueue(int num)
{

    if (r == SIZE - 1 && f == 0)
    {
        printf("\nQueue is Full");
    }
    else if (r == f - 1)
    {
        printf("\nQueue is Full");
    }

    else if (r == SIZE - 1)
    {
        // circular
        r = 0;
        q[r] = num;
    }
    else
    {

        r++;
        q[r] = num;
        if (f == -1)
        {
            f = 0;
        }
    }
}

void deQueue()
{
    if (f == -1)
    {
        printf("\nQueue empty");
    }
    else if (f == r)
    {
        // last element
        printf("\n %d removed", q[f]);
        f = -1;
        r = -1;
    }
    else
    {
        printf("\n %d removed", q[f]);
        f++;
    }
}

void display()
{
    int i;
    printf("\nElements in the queue :-> ");

    if (r >= f)
    {
        for (i = f; i <= r; i++)
        {
            printf(" %d", q[i]);
        }
    }
    else
    {
        for (i = f; i < SIZE - 1; i++)
        {
            printf(" %d", q[i]);
        }

        for (i = 0; i <= r; i++)
        {
            printf(" %d", q[i]);
        }
    }
}

int main()
{

    enQueue(10); // insert 10
    enQueue(20);
    enQueue(30);

    display();
    deQueue();
    display();
    return 0;
}