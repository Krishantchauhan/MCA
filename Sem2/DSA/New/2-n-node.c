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

struct node *insert(struct node *head, int val, int pos)
{
    struct node *temp, *newnode;
    int i = 1;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = val;
    if (pos == 1)
    {
        newnode->next = head;
        head = newnode;
    }
    else
    {
        temp = head;
        while (i < pos - 1 && temp != NULL)
        {
            temp = temp->next;
            i++;
        }
        if (temp == NULL)
        {
            printf("Invalid position\n");
            return head;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
    printf("Value Inserted at %dth Position\n", pos);
    return head;
}

int main()
{
    struct node *head = NULL;
    int ch, x, pos;
    printf("\n\nKrishant Chauhan MCA 2A Roll no-32 \n");
    printf("1. Append\n");
    printf("2. Insert\n");
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
            printf("Enter the value to insert: ");
            scanf("%d", &x);
            printf("Enter the position ");
            scanf("%d", &pos);
            head = insert(head, x, pos);
            break;
        case 3:
            printf("Linked List :-\n");
            display(head);
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
