#include <stdio.h>

struct student
{
    char name[30];
    int maths;
    int eng;
    int sci;
    float perc;
    char grade;
};

int main()
{

    struct student s;
    int x;

    printf("\n %d ", sizeof(char));

    printf("\n %d ", sizeof(int));
    
    printf("\n %d ", sizeof(x));

    printf("\n %d ", sizeof(float));

    printf("\n %d ", sizeof(double));

    printf("\n %d ", sizeof(long double));

    printf("\n %d ", sizeof(s));

    printf("\n %d ", sizeof(struct student));

    return 0;
}