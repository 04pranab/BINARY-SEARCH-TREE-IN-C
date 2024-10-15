#include <stdio.h>
typedef struct BSTNode{
    int data;
    struct BSTNode *right;
    struct BSTNode *left;
} node;

node *getnode();
node *insert(node *, int);
node *delete(node *, int);
void inorder(node *);
void preorder(node *);
void postorder(node *)ZZ;
int max(node *);
int min(node *);
int search(node *, int);
int successor(node *);