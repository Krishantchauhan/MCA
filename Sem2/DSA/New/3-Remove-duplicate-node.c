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

void rem(struct node *head)
{
    struct node *current = head;
    struct node *runner;
    struct node *duplicate;

    while (current != NULL && current->next != NULL)
    {
        runner = current;
        while (runner->next != NULL)
        {
            if (current->data == runner->next->data)
            {
                duplicate = runner->next;
                runner->next = runner->next->next;
                free(duplicate);
            }
            else
                runner = runner->next;
        }
        current = current->next;
    }
}

int main()
{
    struct node *head = NULL;
    int choice, value;

    do
    {
        printf("1. Insert a node\n");
        printf("2. Remove duplicate nodes\n");
        printf("3. Display \n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the value: ");
            scanf("%d", &value);
            head = insert(head, value);
            break;
        case 2:
            rem(head);
            printf("Duplicate nodes removed \n");
            break;
        case 3:
            printf("List: ");
            disp(head);
            break;
        case 4:
            printf("Exit\n");
            break;
        default:
            printf("Invalid choice!\n");
            break;
        }
        printf("\n");
    } while (choice != 4);

    return 0;
}
