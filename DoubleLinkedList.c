#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;

} *head = NULL, *last = NULL;

void addNodeLast(int data)
{
    struct node *tmp;
    if (head == NULL)
    {
        head = malloc(sizeof(struct node));
        head->data = data;
        head->next = NULL;
        head->prev = NULL;
        last = head;
    }
    else
    {
        tmp = malloc(sizeof(struct node));
        tmp->data = data;
        tmp->prev = last;
        tmp->next = NULL;
        last->next = tmp;
        last = tmp;
    }
}

void display(){
    struct node *p;
    printf("\nAll Data from List : ");
    for(p=head; p!=NULL; p=p->next){
        printf(" %d",p->data);
    }
}

int main()
{

    addNodeLast(10);
    addNodeLast(20);
    addNodeLast(30);
    addNodeLast(40);
    addNodeLast(50);

    display(); 

    return 0;
}