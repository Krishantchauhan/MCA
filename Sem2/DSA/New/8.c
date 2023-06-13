#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int id, time;
    struct Node *next;
} node;

node *append()
{
    static int id = 1;
    node *temp = malloc(sizeof(node));
    printf("Burst Time: ");
    scanf("%d", &temp->time);
    temp->id = id++;
    temp->next = NULL;
    return temp;
}

node *insert(node *head)
{
    node *temp = append();
    if (head == NULL)
    {
        temp->next = temp;
        return temp;
    }

    temp->next = head->next;
    head->next = temp;
    head = temp;
    return head;
}

node *delete_node(node *head)
{
    node *curr = head;
    if (head == NULL)
        return head;

    if (head == head->next)
    {
        free(head);
        return NULL;
    }

    curr = curr->next;
    head->id = curr->id;
    head->time = curr->time;
    head->next = curr->next;
    free(curr);
    return head;
}

node *process(node *head)
{
    int quantum = 10;
    int curr_time = 0;

    while (head != NULL)
    {
        if (head->time <= quantum)
        {
            curr_time += head->time;
            printf("Process ID : %d\n", head->id);
            printf("Process Done:- %dms\n", curr_time);
            head = delete_node(head);
        }
        else
        {
            curr_time += quantum;
            head->time -= quantum;
            head = head->next;
        }
    }
    return head;
}

int main()
{
    node *head = NULL;
    int ch;
    printf("\n\nKrishant Chauhan MCA 2A Roll no-32 \n");
    printf("Menu\n");
    printf("1. Insert process\n");
    printf("2. Start process\n");
    printf("3. Exit\n");
    do
    {
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            head = insert(head);
            break;
        case 2:
            if (head != NULL)
                head = process(head->next);
            break;
        case 3:
            printf("Exit\n");
            break;
        default:
            printf("Invalid choice!\n");
            break;
        }
        printf("\n");
    } while (ch != 3);

    return 0;
}
