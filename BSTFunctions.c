#include"BSTHeader.h"
#include<stdlib.h>
node *getnode()

{
    node *a = (node *)malloc(sizeof(node));
    if (a == NULL)
    {
        printf("Error...");
        return NULL;
    }
    a->right = NULL;
    a->left = NULL;
    return a;
}

node *insert(node *root, int data)
{
    if (root == NULL)
    {
        node *t = getnode();
        if (t == NULL)
        {
            printf("Malloc failed.\n");
            return root;
        }

        t->data = data;
        return t;
    }

    if (root->data < data)
    {
        root->right = insert(root->right, data);
    }
    else if (root->data > data)
    {
        root->left = insert(root->left, data);
    }
    return root;
}

void inorder(node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void preorder(node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

int max(node *root)
{
    if (root != NULL)
    {
        while (root->right != NULL)
        {
            root = root->right;
        }

        return root->data;
    }
    return -1;
}

int min(node *root)
{
    if (root != NULL)
    {
        while (root->left != NULL)
        {
            root = root->left;
        }

        return root->data;
    }
    return -1;
}

int search(node *root, int data)
{
    if (root == NULL)
    {
        return 0;
    }

    if (root->data == data)
    {
        return 1;
    }
    else if (root->data < data)
    {
        return search(root->right, data);
    }
    else
    {
        return search(root->left, data);
    }
}

int successor(node *root)
{
    if (root != NULL)
    {
        return min(root->right);
    }
}

node *delete(node *root, int data)
{
    if (root == NULL)
    {
        return root;
    }

    else if (data < root->data)
    {
        root->left = delete(root->left, data);
    }
    else if (data > root->data)
    {
        root->right = delete(root->right, data);
    }

    else
    {

        node *t = root;
        if (root->left == NULL)
        {
            root = root->right;
            free(t);
        }
        else if (root->right == NULL)
        {
            root = root->left;
            free(t);
        }

        else{

             int temp = successor(root);
             root->data = temp;
             root->right = delete(root->right, temp);
        }
    }
    return root;
}       