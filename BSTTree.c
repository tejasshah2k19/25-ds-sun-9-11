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

struct node *addNode(struct node *root, int data)
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

void inOrder(struct node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf(" %d ", root->data);
        inOrder(root->right);
    }
}

void preOrder(struct node *root)
{
    if (root != NULL)
    {
        printf(" %d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}
int main()
{
    struct node *root = NULL;

    root = addNode(root, 50);
    addNode(root, 70);
    addNode(root, 30);
    addNode(root, 90);
    addNode(root, 60);
    addNode(root, 20);
    addNode(root, 35);

    // tree travel - inOrder preOrder postOrder
    //  root
    //  inOrder  left-root-right
    //  preOrder  root-left-right
    //  postOrder left-right-root
    // inOrder(root);
    preOrder(root);

    return 0;
}

/*

        50:root



*/