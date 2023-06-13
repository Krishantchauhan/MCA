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
    node *nn = (node *)malloc(sizeof(node));
    nn->cof = cof;
    nn->power = power;
    nn->next = NULL;

    if (*head == NULL)
    {
        *head = nn;
    }
    else
    {
        node *curr = *head;
        while (curr->next != NULL)
        {
            curr = curr->next;
        }
        curr->next = nn;
    }
}

void display(node *head)
{
    node *curr = head;
    while (curr != NULL)
    {
        printf("%dx^%d", curr->cof, curr->power);
        if (curr->next != NULL)
        {
            printf(" + ");
        }
        curr = curr->next;
    }
    printf("\n");
}

node *add(node *p1, node *p2)
{
    node *result = NULL;
    node *curr = NULL;

    while (p1 != NULL && p2 != NULL)
    {
        node *nn = (node *)malloc(sizeof(node));
        nn->next = NULL;

        if (p1->power == p2->power)
        {
            nn->cof = p1->cof + p2->cof;
            nn->power = p1->power;
            p1 = p1->next;
            p2 = p2->next;
        }
        else if (p1->power > p2->power)
        {
            nn->cof = p1->cof;
            nn->power = p1->power;
            p1 = p1->next;
        }
        else
        {
            nn->cof = p2->cof;
            nn->power = p2->power;
            p2 = p2->next;
        }

        if (result == NULL)
        {
            result = nn;
            curr = result;
        }
        else
        {
            curr->next = nn;
            curr = curr->next;
        }
    }

    while (p1 != NULL)
    {
        node *nn = (node *)malloc(sizeof(node));
        nn->cof = p1->cof;
        nn->power = p1->power;
        nn->next = NULL;

        curr->next = nn;
        curr = curr->next;

        p1 = p1->next;
    }

    while (p2 != NULL)
    {
        node *nn = (node *)malloc(sizeof(node));
        nn->cof = p2->cof;
        nn->power = p2->power;
        nn->next = NULL;

        curr->next = nn;
        curr = curr->next;

        p2 = p2->next;
    }

    return result;
}

int main()
{
    node *p1 = NULL;
    node *p2 = NULL;

    int ch, cof, power;

    printf("Menu\n");
    printf("1. Insert into Equation 1\n");
    printf("2. Insert into Equation 2\n");
    printf("3. Add Equations\n");
    printf("4. Exit\n");
    do
    {
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter coefficient and Exponent of Equation 1: ");
            scanf("%d%d", &cof, &power);
            insert(&p1, cof, power);
            break;
        case 2:
            printf("Enter coefficient and Exponent of Equation 2: ");
            scanf("%d%d", &cof, &power);
            insert(&p2, cof, power);
            break;
        case 3:
            if (p1 == NULL || p2 == NULL)
            {
                printf("Please enter Equation 1 and Equation 2.\n");
                break;
            }
            node *p3 = add(p1, p2);
            printf("\nThe Sum of Two Equations is:\n");
            display(p3);
            break;
        case 4:
            printf("Exit\n");
            break;
        default:
            printf("Invalid choice!\n");
            break;
        }
    } while (ch != 4);
    return 0;
}
