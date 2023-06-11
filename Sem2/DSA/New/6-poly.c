#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int cof;
    int power;
    struct node *next;
} node;

void insert(node **head, int cof, int power)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->cof = cof;
    temp->power = power;
    temp->next = NULL;

    if (*head == NULL)
    {
        *head = temp;
    }
    else
    {
        node *ptr = *head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}

void display(node *head)
{
    node *ptr = head;
    while (ptr != NULL)
    {
        printf("%dx^%d", ptr->cof, ptr->power);
        if (ptr->next != NULL)
        {
            printf(" + ");
        }
        ptr = ptr->next;
    }
    printf("\n");
}

node *add(node *p1, node *p2)
{
    node *result = NULL;
    node *ptr = NULL;

    while (p1 != NULL && p2 != NULL)
    {
        node *temp = (node *)malloc(sizeof(node));
        temp->next = NULL;

        if (p1->power == p2->power)
        {
            temp->cof = p1->cof + p2->cof;
            temp->power = p1->power;
            p1 = p1->next;
            p2 = p2->next;
        }
        else if (p1->power > p2->power)
        {
            temp->cof = p1->cof;
            temp->power = p1->power;
            p1 = p1->next;
        }
        else
        {
            temp->cof = p2->cof;
            temp->power = p2->power;
            p2 = p2->next;
        }

        if (result == NULL)
        {
            result = temp;
            ptr = result;
        }
        else
        {
            ptr->next = temp;
            ptr = ptr->next;
        }
    }

    while (p1 != NULL)
    {
        node *temp = (node *)malloc(sizeof(node));
        temp->cof = p1->cof;
        temp->power = p1->power;
        temp->next = NULL;

        ptr->next = temp;
        ptr = ptr->next;

        p1 = p1->next;
    }

    while (p2 != NULL)
    {
        node *temp = (node *)malloc(sizeof(node));
        temp->cof = p2->cof;
        temp->power = p2->power;
        temp->next = NULL;

        ptr->next = temp;
        ptr = ptr->next;

        p2 = p2->next;
    }

    return result;
}

int main()
{
    node *p1 = NULL;
    node *p2 = NULL;

    insert(&p1, 7, 4);
    insert(&p1, 5, 2);
    insert(&p1, 2, 1);
    insert(&p1, 8, 0);

    insert(&p2, 3, 4);
    insert(&p2, 1, 3);
    insert(&p2, 4, 1);
    insert(&p2, 2, 0);

    printf("\n\nEqn1: ");
    display(p1);

    printf("\nEqn2: ");
    display(p2);

    node *p3 = add(p1, p2);
    printf("\nThe Sum of Polynomial Equation is :\n");
    display(p3);
    printf("\n");
    return 0;
}
