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

void display()
{

    struct node *p;
    printf("\nLinked List Data : ");
    for (p = head; p != NULL; p = p->next)
    {
        printf(" %d", p->data);
    }
}

void addNodeBeg(int data){
    struct node *tmp; 

    tmp = malloc(sizeof(struct node));
    tmp->data = data; 
    tmp->next = head; 
    head = tmp; 


}

void searchNode(int data){
    struct node *p; 
    int found = 0; 

    for(p=head;  p!=NULL;  p=p->next) {

        if(p->data == data){
            found = 1;
            break;  
        }
    }

    if(found == 1)
        printf("\n%d found",data);
    else
        printf("\n%d not found",data);
}
int main()
{

    addNode(10);
    addNode(20);
    addNode(30);
    addNode(40);
    addNode(50);

    display();

    addNodeBeg(100); // add node item in the begining 
    addNodeBeg(150);
    display();

    searchNode(80); // found not found 
    searchNode(20);


    return 0;
}
