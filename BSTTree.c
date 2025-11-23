#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

// small left
// big right

struct node* addNode(struct node *root, int data)
{
    // root = 70
    if (root == NULL)
    {
        root = malloc(sizeof(struct node));
        root->data = data;
        root->left = NULL;
        root->right = NULL;
    }
    else
    {
        if (data < root->data)
        {
            // left l
            root->left = addNode(root->left, data);
        }
        else
        {
            // right
            root->right = addNode(root->right, data);
        }
    }
    return root;
}
int main()
{
    struct node *root = NULL;

    root = addNode(root, 50);
    addNode(root, 70);
    addNode(root, 30);
    addNode(root, 90);
    addNode(root, 60);
    
    printf(" %d %d %d ",root->data,root->right->data,root->right->right->data);

    return 0;
}

/*

        50:root



*/