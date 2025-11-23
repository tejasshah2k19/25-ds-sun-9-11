#include<stdio.h>
#include<stdlib.h>


struct node 
{
    int data ;
    struct node *left;
    struct node *right;
}*root=NULL;

int main(){

    struct node *tmp;
    struct node *alpha; 

    //30
    root= malloc(sizeof(struct node));
    root->data = 30; 
    root->left  = NULL;
    root->right = NULL; 

    //100
    tmp = malloc(sizeof(struct node));
    tmp->data = 100;
    tmp->left = NULL;
    tmp->right = NULL; 

    //300
    alpha = malloc(sizeof(struct node));
    alpha->data = 300;
    alpha->left=NULL;
    alpha->right=NULL;

    root->left = tmp;
    root->right= alpha; 


    printf("%d %d %d",root->data,root->left->data,root->right->data);



    return 0; 
}