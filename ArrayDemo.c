#include <stdio.h>
#define SIZE 5

int a[SIZE];

void inputArray()
{
    for (int i = 0; i < SIZE; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
}

void printArray()
{
    printf("Array elements are: ");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void bubbleSort()
{
    int j, i;
    int tmp;

    for (i = 0; i < SIZE - 1; i++)
    { // 0
        for (j = 0; j < SIZE - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
}

int main()
{
    inputArray();
    printArray();
    bubbleSort();
    printf("After sorting:\n");
    printArray();
    return 0;
}