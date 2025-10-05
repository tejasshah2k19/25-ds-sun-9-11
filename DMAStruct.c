#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[30]; // 30
    int m, s, e;   // 12
};

int main()
{

    struct student s;
    struct student *p;

    printf("\nEnter name and marks of three subjects ");
    scanf("%s%d%d%d", &s.name, &s.m, &s.s, &s.e);

    printf("\nName => %s", s.name);
    printf("\nMaths => %d", s.m);
    printf("\nSci => %d", s.s);
    printf("\nEng => %d", s.e);

    printf(" \n Size of struct => %d ", sizeof(s));
    printf(" \n Size of struct => %d ", sizeof(struct student));

    p = malloc(sizeof(struct student));
    printf("\nEnter name and marks of three subjects ");
    scanf("%s%d%d%d", &p->name, &p->m, &p->s, &p->e);

    printf("\nName => %s", p->name);
    printf("\nMaths => %d", p->m);
    printf("\nSci => %d", p->s);
    printf("\nEng => %d", p->e);

    return 0;
}