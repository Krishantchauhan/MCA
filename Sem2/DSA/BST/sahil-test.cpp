#include <stdio.h>
#include <stdlib.h>
struct node *insert(struct node *, int);
void inorder(struct node *);
void preorder(struct node *);
void postorder(struct node *);
void countnodes(struct node *, int *);
struct node
{
    struct node *left;
    int val;
    struct node *right;
};
struct node *insert(struct node *temp, int val)
{
    if (temp == NULL)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->left = NULL;
        temp->right = NULL;
        temp->val = val;
        printf("\nvalue inserted\n");
        return temp;
    }
    else if (val < temp->val)
        temp->left = insert(temp->left, val);
    else
        temp->right = insert(temp->right, val);
    return temp;
}
void inorder(struct node *rt)
{
    if (rt != NULL)
    {
        inorder(rt->left);
        printf(" %d ", rt->val);
        inorder(rt->right);
    }
    return;
}
void preorder(struct node *rt)
{
    if (rt != NULL)
    {
        printf(" %d ", rt->val);
        preorder(rt->left);
        preorder(rt->right);
    }
    return;
}
void postorder(struct node *rt)
{
    if (rt != NULL)
    {
        postorder(rt->left);
        postorder(rt->right);
        printf(" %d ", rt->val);
    }
    return;
}
void countnodes(struct node *rt, int *ct)
{
    if (rt != NULL)
    {
        *ct = *ct + 1;
        countnodes(rt->left, ct);
        countnodes(rt->right, ct);
    }
    return;
}
void counteven(struct node *rt, int *ct)
{
    if (rt != NULL)
    {
        if (rt->val % 2 == 0)
            *ct = *ct + 1;
        counteven(rt->left, ct);
        counteven(rt->right, ct);
    }
    return;
}
void countleaf(struct node *rt, int *ct)
{
    if (rt != NULL)
    {
        if (rt->left == NULL && rt->right == NULL)
            *ct = *ct + 1;
        countleaf(rt->left, ct);
        countleaf(rt->right, ct);
    }
    return;
}
void counttwo(struct node *rt, int *ct)
{
    if (rt != NULL)
    {
        if (rt->left != NULL && rt->right != NULL)
            *ct = *ct + 1;
        counttwo(rt->left, ct);
        counttwo(rt->right, ct);
    }
    return;
}
void countone(struct node *rt, int *ct)
{
    if (rt != NULL)
    {
        if (rt->left != NULL && rt->right == NULL || rt->left == NULL && rt->right != NULL)
            *ct = *ct + 1;
        countone(rt->left, ct);
        countone(rt->right, ct);
    }
    return;
}
int main()
{
    struct node *root = NULL;
    int ch;

    int val;
    int cn = 0, cf = 0, co = 0, ct = 0, ce = 0;
    while (ch != 6)
    {
        printf("\nEnter choice \n1.Insert node \n2.Print Inorder\n3.Print Preorder\n4.Print Postorder\n5.Count Nodes \n6.Count Leaf Nodes\n7.Count Nodes with Two Child\n8.Count nodes with Ones Child\n9.Count Even numbers\n10.Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter value\n");
            scanf("%d", &val);
            if (root == NULL)
                root = insert(root, val);
            break;
        case 2:
            inorder(root);
            break;
        case 3:
            preorder(root);
            break;
        case 4:
            postorder(root);
            break;
        case 5:
            countnodes(root, &cn);
            printf("Total number of nodes:%d", cn);
            cn = 0;
            break;
        case 6:
            countleaf(root, &cl);
            printf("Total number of nodes:%d", cl);
            cl = 0;
            break;
        case 7:
            counttwo(root, &ct);
            printf("Total number of nodes:%d", ct);
            ct = 0;
            break;
        case 8:
            countone(root, &co);
            printf("Total number of nodes:%d", co);
            co = 0;
            break;
        case 9:
            counteven(root, &cl);
            printf("Total number of nodes:%d", ce);
            ce = 0;
            break;
        case 10:
            printf("\nExiting...");
            break;
        default:
            printf("Enter correct option");
        }
    }
}