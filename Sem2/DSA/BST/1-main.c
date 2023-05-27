#include <stdio.h>
#include <stdlib.h>

typedef struct tree
{
    int data;
    struct tree *left, *right;
} node;

node *insert(node *, int);
void display(node *);

int main()
{
    struct node *root = NULL;

    int n, choice;
    do
    {
        printf("ENTER CHOICE,1,2,3:");
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
            display(root);
            break;
        }
        case 3:
        {
            return 0;
            break;
        }
        }
    } while (choice != 3);
}

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

void display(node *root)
{
    if (root == NULL)
        return;
    display(root->left);
    printf("%d\n", root->data);
    display(root->right);
}
