#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

node *head = NULL;

void append();
void insert_beg(int x);
void insert_last(int y);
void Insert(int a, int val, int pos);
void display();
int count();
void del_beg();
void del_end();
void del(int count, int pos);
void search(int se);

int main()
{
    int x, ch, y, pos, val, a, p, q, se;
    printf("\n Name: Krishant Chauhan\n Course: MCA 2A\n Class Roll no.: 32\n Circular Linked List Program\n");

    while (1)
    {
        printf("\n1. Append\n2. Display\n3. Count Nodes\n4. Insert At Beginning\n5. Insert at End\n6. Insert at Nth Position\n");
        printf("7. Delete From Beginning\n8. Delete From End\n9. Delete at Nth Position\n10. Search the Element\n11. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            append();
            break;
        case 2:
            printf("Data in List:\n");
            display();
            break;
        case 3:
            a = count();
            break;
        case 4:
            printf("Enter the data to insert at the beginning: ");
            scanf("%d", &x);
            insert_beg(x);
            break;
        case 5:
            printf("Enter the data to insert at the end: ");
            scanf("%d", &y);
            insert_last(y);
            break;
        case 6:
            printf("Enter the position: ");
            scanf("%d", &pos);
            printf("Enter the data: ");
            scanf("%d", &val);
            Insert(a, val, pos);
            break;
        case 7:
            del_beg();
            break;
        case 8:
            del_end();
            break;
        case 9:
            printf("Enter the position: ");
            scanf("%d", &p);
            del(a, p);
            break;
        case 10:
            printf("Enter the element to search: ");
            scanf("%d", &se);
            search(se);
            break;
        case 11:
            exit(1);
        default:
            printf("Enter a correct option.\n");
        }
    }

    return 0;
}

void display()
{
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    node *temp = head;
    printf("Data in list:\n");

    do
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    } while (temp != head);
}

int count()
{
    if (head == NULL)
    {
        printf("List is empty.\n");
        return 0;
    }

    int count = 0;
    node *temp = head;

    do
    {
        count++;
        temp = temp->next;
    } while (temp != head);

    printf("Total number of nodes: %d\n", count);
    return count;
}

void append()
{
    node *newnode = (node *)malloc(sizeof(node));
    printf("Enter the data of the node: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;

    if (head == NULL)
    {
        head = newnode;
        newnode->next = head;
    }
    else
    {
        node *temp = head;
        while (temp->next != head)
            temp = temp->next;

        temp->next = newnode;
        newnode->next = head;
    }
}

void insert_beg(int data)
{
    node *newnode = (node *)malloc(sizeof(node));
    if (newnode == NULL)
    {
        printf("Unable to allocate memory.\n");
        return;
    }

    newnode->data = data;
    newnode->next = head;

    if (head == NULL)
    {
        newnode->next = newnode;
    }
    else
    {
        node *temp = head;
        while (temp->next != head)
            temp = temp->next;

        temp->next = newnode;
    }

    head = newnode;
    printf("Successfully inserted at the beginning.\n");
}

void insert_last(int y)
{
    node *newnode = (node *)malloc(sizeof(node));
    newnode->data = y;
    newnode->next = head;

    if (head == NULL)
    {
        head = newnode;
        newnode->next = newnode;
    }
    else
    {
        node *temp = head;
        while (temp->next != head)
            temp = temp->next;

        temp->next = newnode;
    }

    printf("Successfully inserted at the end.\n");
}

void Insert(int a, int val, int pos)
{
    if (pos < 1 || pos > a + 1)
    {
        printf("Invalid position.\n");
        return;
    }

    if (pos == 1)
    {
        insert_beg(val);
        return;
    }

    node *newnode = (node *)malloc(sizeof(node));
    newnode->data = val;

    node *temp = head;
    int count = 1;

    while (count < pos - 1)
    {
        temp = temp->next;
        count++;
    }

    newnode->next = temp->next;
    temp->next = newnode;

    printf("Successfully inserted at position %d.\n", pos);
}

void del_beg()
{
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    if (head->next == head)
    {
        free(head);
        head = NULL;
    }
    else
    {
        node *temp = head;
        while (temp->next != head)
            temp = temp->next;

        temp->next = head->next;
        free(head);
        head = temp->next;
    }

    printf("Successfully deleted from the beginning.\n");
}

void del_end()
{
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    if (head->next == head)
    {
        free(head);
        head = NULL;
        printf("Successfully deleted from the end.\n");
        return;
    }

    node *temp = head;
    node *prev;

    while (temp->next != head)
    {
        prev = temp;
        temp = temp->next;
    }

    prev->next = head;
    free(temp);
    printf("Successfully deleted from the end.\n");
}

void del(int count, int pos)
{
    if (pos < 1 || pos > count)
    {
        printf("Invalid position.\n");
        return;
    }

    if (pos == 1)
    {
        del_beg();
        return;
    }

    node *temp = head;
    int i = 1;

    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }

    node *delNode = temp->next;
    temp->next = delNode->next;
    free(delNode);

    printf("Successfully deleted from position %d.\n", pos);
}

void search(int se)
{
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    node *temp = head;
    int found = 0;

    do
    {
        if (temp->data == se)
        {
            found = 1;
            break;
        }

        temp = temp->next;
    } while (temp != head);

    if (found == 1)
        printf("Element found.\n");
    else
        printf("Element not found.\n");
}
