#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a; // 4 byte
    int *p;
    int i;
    int *x;

    p = malloc(sizeof(int));    // 2 4
    x = calloc(5, sizeof(int)); // 5 block 4 byte

    printf("Enter number");
    scanf("%d", p);
    printf("\n p = %d", *p);

    for (i = 0; i < 5; i++)
    {
        printf("Enter number");
        scanf("%d", &x[i]);
    }

    printf("\nElements in the Array : ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", x[i]);
    }

    free(x);
    free(p);

    return 0;
}