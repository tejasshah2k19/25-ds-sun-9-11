#include <stdio.h>
#define SIZE 7

int a[] = {15, 12, 19, 7, 60, 3, 11};

void selectionSort()
{
    int i, j, min, tmp;

    for (i = 0; i < SIZE; i++)
    {
        min = i;
        for (j = i + 1; j < SIZE; j++)
        {
            if (a[min] > a[j])
            {
                min = j;
            }
        }
        tmp = a[min];
        a[min] = a[i];
        a[i] = tmp;
    }
}

void printArray()
{
    int i;
    printf("\nElements in the Array : ");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", a[i]);
    }
}

void main()
{

    printArray();
    selectionSort();
    printArray();
}