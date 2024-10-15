#include<stdio.h>
#include<stdlib.h>
#include "BSTHeader.h"

void main()
{
    int choice, x;
    node *root = NULL;

    while(1)
    {
        printf("\nBINARY SEARCH TREE IMPLEMENTATIONS\n\t1.Insert\n\t2.Delete\n\t3.Search\n\t4.Inorder\n\t5.Preorder\n\t6.Postorder\n\t7.Max\n\t8.Min\n\t9.Exit\nEnter your choice:");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            printf("Inserting...\nEnter Data:");
            scanf("%d",&x);
            root = insert(root, x);
            break;
        case 2:
            printf("Deleting...\nEnter Data:");
            scanf("%d",&x);
            root = delete(root, x);
            break;
        case 3:
            printf("Searching...\nEnter Data:");
            scanf("%d",&x);
            int t = search(root, x);

            if (t == 1)
            {
                printf("%d Is found!", x);
            }

            else{
                printf("%d Is NOT found!", x);
            }
            break;
        case 4:
            printf("Inorder:");
            inorder(root);
            printf("\n");
            break;
        case 5:
            printf("Preorder:");
            preorder(root);
            printf("\n");
            break;
        case 6:
            printf("Postorder:");
            postorder(root);
            printf("\n");
            break;
        case 7:
            printf("Max of tree:");
            printf("%d",max(root));
            break;
        case 8:
            printf("Min of tree:");
            printf("%d",min(root));
            break;

        case 9:
            exit(-1);
            break;
        default:
            break;
        }
    }
}