#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *append(struct node *head, int x)
{
    struct node *nn = (struct node *)malloc(sizeof(struct node));
    nn->data = x;
    nn->next = NULL;

    if (head == NULL)
    {
        return nn;
    }
    struct node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = nn;
    return head;
}

void display(struct node *head)
{
    struct node *current = head;
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

void insert(struct node *head, struct node **Q, struct node **R)
{
    struct node *curr = head;
    struct node *qhead = NULL;
    struct node *rhead = NULL;
    int flag = 1;

    while (curr != NULL)
    {
        if (flag == 1)
        {
            if (*Q == NULL)
            {
                *Q = curr;
                qhead = *Q;
                curr = curr->next;
            }
            else
            {
                (*Q)->next = curr;
                (*Q) = (*Q)->next;
                curr = curr->next;
            }
            flag = 0;
        }
        else if (flag == 0)
        {
            if (*R == NULL)
            {
                *R = curr;
                rhead = *R;
                curr = curr->next;
            }
            else
            {
                (*R)->next = curr;
                (*R) = (*R)->next;
                curr = curr->next;
            }
            flag = 1;
        }
    }

    if (*Q != NULL)
    {
        (*Q)->next = NULL;
    }
    if (*R != NULL)
    {
        (*R)->next = NULL;
    }

    *Q = qhead;
    *R = rhead;
}

int main()
{
    struct node *head = NULL, *Q = NULL, *R = NULL;
    int ch, x, pos;
    printf("\n\nKrishant Chauhan MCA 2A Roll no-32 \n");
    printf("1. Append\n");
    printf("2. Split\n");
    printf("3. Display\n");
    printf("4. Exit\n");
    do
    {
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter the value to append: ");
            scanf("%d", &x);
            head = append(head, x);
            break;
        case 2:
            insert(head, &Q, &R);
            break;
        case 3:
            printf("Odd Position\n");
            display(Q);
            printf("Even Position\n");
            display(R);
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
