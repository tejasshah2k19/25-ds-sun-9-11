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

struct node *addNode(struct node *root, int data) // 50
{
    // root = NULL
    if (root == NULL)
    {
        root = malloc(sizeof(struct node));
        root->data = data;
        root->left = NULL;
        root->right = NULL;
    }
    else
    {
        // 90 > 70
        if (data > root->data)
        {
            root->right = addNode(root->right, data);
            // 50->right = addNode(70,90)
            // 70->right = addNode(NULL,90);
        }
        else
        {
            root->left = addNode(root->left, data);
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

void postOrder(struct node *root)
{

    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf(" %d ", root->data);
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