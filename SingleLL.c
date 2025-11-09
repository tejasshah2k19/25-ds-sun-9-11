#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;

} *head = NULL;

struct node *last = NULL;

void addNode(int data) // 10  20  30
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

void addNodeBeg(int data)
{
    struct node *tmp;

    tmp = malloc(sizeof(struct node));
    tmp->data = data;
    tmp->next = head;
    head = tmp;
}

void searchNode(int data)
{
    struct node *p;
    int found = 0;

    for (p = head; p != NULL; p = p->next)
    {

        if (p->data == data)
        {
            found = 1;
            break;
        }
    }

    if (found == 1)
        printf("\n%d found", data);
    else
        printf("\n%d not found", data);
}

void delNodeBeg()
{
    struct node *p; // pointer
    p = head;       // pointer -> address assign
    head = head->next;
    free(p);
}

void delNodeLast()
{
    struct node *p;

    for (p = head; p->next != last; p = p->next)
        ;

    p->next = NULL;
    free(last);
    last = p;
}

void addNodeAny(int src, int data)
{
    struct node *p,*tmp;
    if (head == NULL)
    {
        printf("\nInvalid Source : Linked List is Empty");
    }
    else
    {
        // search-> src

        for (p = head; p != NULL; p = p->next)
        {
            if (p->data == src)
            {
                break;
            }
        }

        if(p==NULL){
            printf("\nInvalid Source : Source Not Found in the List ");
        }else{
            tmp =malloc(sizeof(struct node));
            tmp->data = data;
            tmp->next = p->next;
            p->next=tmp; 
        }

    }
}

int main()
{

    // addNode(10);
    // addNode(20);
    // addNode(30);
    // addNode(40);
    // addNode(50);

    // display();

    // addNodeBeg(100); // add node item in the begining
    // addNodeBeg(150);
    // display();

    // searchNode(80); // found not found
    // searchNode(20);

    // delNodeBeg(); // remove node from begining

    addNode(10);
    addNode(20);
    addNode(30);
    addNode(40);
    addNode(50);

    addNodeAny(30, 35);

    return 0;
}
