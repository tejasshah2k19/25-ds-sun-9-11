#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int a[SIZE];

void inputArray(int location, int data)
{

    int index = location - 1;
    int i;
    for (i = SIZE - 2; i >= index; i--)
    {
        a[i + 1] = a[i]; // 4 = 3
    }
    a[index] = data;
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

void printArray()
{
    printf("Array elements are: ");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void removeItem(int location){
    int i;
    for(i=location-1;i<SIZE;i++){
        a[i]  = a[i+1];
    }
    // a[SIZE-1] = 0; 
}

int main()
{

    int choice;
    int location, data;

    while (1)
    {
        printf("\n0 Exit\n1 Input\n2 Display\n3 Sort\n4 Remove\nEnter choice");
        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            exit(0);
        case 1:
            printf("\nEnter location");
            scanf("%d", &location);
            printf("\nEnter value");
            scanf("%d", &data);
            inputArray(location, data);
            break;
        case 2:
            printArray();
            break;
        case 3:
            bubbleSort();
            break;
        case 4:
            printf("\nEnter location");
            scanf("%d", &location);
            removeItem(location);
            break;
        default:
            break;
        }
    }
    return 0;
}