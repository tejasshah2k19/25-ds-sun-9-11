#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;

} *head = NULL;

struct node *last = NULL;

void addNode(int data)
{
    struct node *tmp = NULL;

    if (head == NULL)
    {
        head = malloc(sizeof(struct node));
        head->data = data;
        head->next = NULL;
        last = head;
    }
    else
    {

        tmp = malloc(sizeof(struct node));
        tmp->data = data;
        tmp->next = NULL;
        last->next = tmp;
        last = tmp;
    }
}

int main()
{

    addNode(10);
    addNode(20);
    addNode(30);
    addNode(40);


    printf(" %d  %d %d",head->data,head->next->data,head->next->next->data);//10 20 

    return 0;
}
