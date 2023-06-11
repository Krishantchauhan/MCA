#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *insert(struct node *head, int x)
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

void disp(struct node *head)
{
    struct node *curr = head;
    while (curr != NULL)
    {
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("\n");
}

struct node *merge(struct node *l1, struct node *l2)
{
    if (l1 == NULL)
        return l2;
    if (l2 == NULL)
        return l1;

    struct node *NewNode = NULL;

    if (l1->data <= l2->data)
    {
        NewNode = l1;
        NewNode->next = merge(l1->next, l2);
    }
    else
    {
        NewNode = l2;
        NewNode->next = merge(l1, l2->next);
    }

    return NewNode;
}

int main()
{
    struct node *l1 = NULL;
    struct node *l2 = NULL;
    struct node *nn = NULL;

    int ch, x;
    printf("\n\nKrishant Chauhan MCA 2A Roll no-32 \n");
    do
    {
        printf("1. Insert into List 1\n");
        printf("2. Insert into List 2\n");
        printf("3. Merge Lists\n");
        printf("4. Display Merged List\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter the x to insert into List 1: ");
            scanf("%d", &x);
            l1 = insert(l1, x);
            break;
        case 2:
            printf("Enter the x to insert into List 2: ");
            scanf("%d", &x);
            l2 = insert(l2, x);
            break;
        case 3:
            nn = merge(l1, l2);
            printf("Lists merged successfully!\n");
            break;
        case 4:
            printf("Merged List: ");
            if (nn == NULL)
                printf("Please Merge them\n");
            disp(nn);
            break;
        default:
            printf("Invalid choice! Please try again.\n");
            break;
        }
    } while (ch != 5);
    return 0;
}
