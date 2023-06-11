#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void disp(struct node *head)
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
    printf("Successfully Inserted at %dth Position\n", pos);
    return head;
}

void append(struct node **head, int x)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = NULL;
    if (*head == NULL)
    {
        *head = newnode;
    }
    else
    {
        struct node *temp;
        temp = *head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

int main()
{
    struct node *head = NULL;
    int ch, x, pos;
    append(&head, 10);
    append(&head, 20);
    append(&head, 30);
    append(&head, 40);
    printf("\nEnter the Value and position\n");
    scanf("%d %d", &x, &pos);
    head = insert(head, x, pos);
    disp(head);
    return 0;
}
