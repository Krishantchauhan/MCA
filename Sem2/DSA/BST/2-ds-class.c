#include <stdio.h>
#include <stdlib.h>

typedef struct tree
{
    int data;
    struct tree *left, *right;
} node;

node *insert(node *root, int x)
{
    if (root == NULL)
    {
        node *nn = (node *)malloc(sizeof(node));
        nn->left = nn->right = NULL;
        nn->data = x;
        return nn;
    }
    else if (root->data > x)
        root->left = insert(root->left, x);
    else if (root->data < x)
        root->right = insert(root->right, x);
    return root;
}

void inorder(node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    printf("%d\n", root->data);
    inorder(root->right);
}

void postorder(node *root)
{
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    printf("%d\n", root->data);
}

void preorder(node *root)
{
    if (root == NULL)
        return;

    printf("%d\n", root->data);
    preorder(root->left);
    preorder(root->right);
}

void count(node *root, int *ct)
{
    if (root != NULL)
    {
        *ct = *ct + 1;
        count(root->left, ct);
        count(root->right, ct);
    }
}

void leafNode(node *root, int *ct)
{
    if (root != NULL)
    {
        if (root->left == NULL && root->right == NULL)
            *ct = *ct + 1;
        leafNode(root->left, ct);
        leafNode(root->right, ct);
    }
}

void onechild(node *root, int *ct)
{
    if (root != NULL)
    {
        if ((root->left != NULL && root->right == NULL) || (root->left != NULL && root->right == NULL))
            *ct = *ct + 1;
        onechild(root->left, ct);
        onechild(root->right, ct);
    }
}

void twochild(node *root, int *ct)
{
    if (root != NULL)
    {
        if (root->left != NULL && root->right != NULL)
            *ct = *ct + 1;
        twochild(root->left, ct);
        twochild(root->right, ct);
    }
}

void even(node *root, int *ct)
{
    if (root != NULL)
    {
        if (root->data % 2 == 0)
        {
            *ct = *ct + 1;
        }

        even(root->left, ct);
        even(root->right, ct);
    }
}

int main()
{
    node *root = NULL;
    int c = 0, leaf = 0, one = 0, two = 0, e1 = 0;
    int n, choice;
    printf("\n\nKrishant Chauhan MCA 2A Roll no-32 \n");
    printf("Choice :- \n 1-Insert\n 2-Inorder\n 3-Preorder\n 4-PostOrder\n 5-Count\n 6-Total Leaf Node\n 7-One Child\n 8-Two children\n 9-Even\n 10-Exit \n\n");
    do
    {
        printf("ENTER CHOICE,1,2,3,4,5,6,7,8,9,10:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            printf("ENTER THE NODE VALUE:");
            scanf("%d", &n);
            root = insert(root, n);
            break;
        }
        case 2:
        {
            inorder(root);
            break;
        }
        case 3:
        {
            preorder(root);
            break;
        }
        case 4:
        {
            postorder(root);
            break;
        }
        case 5:
        {
            count(root, &c);
            printf("Total NO of Nodes : %d \n", c);
            c = 0;
            break;
        }
        case 6:
        {
            leafNode(root, &leaf);
            printf("Total NO of Leaf Nodes : %d \n", leaf);
            leaf = 0;
            break;
        }
        case 7:
        {
            onechild(root, &one);
            printf("Total NO of Nodes with 1 child : %d \n", one);
            one = 0;
            break;
        }
        case 8:
        {
            twochild(root, &two);
            printf("Total NO of Nodes with 2 children : %d \n", two);
            two = 0;
            break;
        }
        case 9:
        {
            even(root, &e1);
            printf("Total NO of Nodes with 2 children : %d \n", e1);
            e1 = 0;
            break;
        }
        case 10:
        {
            return 0;
            break;
        }
        }
    } while (choice != 10);
    printf("root : %d", root->data);
}
