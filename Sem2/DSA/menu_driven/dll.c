// Name:Krishant Chauhan
// course:BCA 2A
// Class Roll no.:-29
// Doubly Linked List Program

#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *prev;
    struct node *next;
} node;
node *head, *tail;
void input(int x);
void display();
void ins_beg(int a);
void insert_last(int y);
void Insert(int val, int pos);
void del_beg();
void del_end();
void del(int pos);
void main()
{
    int ch, x, a, y, val, pos, po;
    printf("Name:Krishant Chauhan\ncourse:BCA 2A\nClass Roll no.:-29\nDoubly Linked List Program\n");
    while (1)
    {
        printf("\n1.enqueue\n2.display\n3.Insert at Begning\n4.insert_last\n5.Insert at Nth Position \n6.Delete From Begning\n7.Delete From End\n8.Delete From the nth Position\n9.Exit\nEnter the choice \n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the data to recive\n");
            scanf("%d", &x);
            input(x);
            break;
        case 2:
            printf("Data in List :\n");
            display();
            break;
        case 3:
            printf("Enter the data to Insert at the Begning\n");
            scanf("%d", &a);
            ins_beg(a);
            break;
        case 4:
            printf("Enter the data to Insert at the End\n");
            scanf("%d", &y);
            insert_last(y);
            break;
        case 5:
            printf("Enter the postion \n");
            scanf("%d", &pos);
            printf("Enter the data \n");
            scanf("%d", &val);
            Insert(val, pos);
            break;
        case 6:
            del_beg();
            break;
        case 7:
            del_end();
            break;
        case 8:
            printf("Enter the postion \n");
            scanf("%d", &po);
            del(po);
            break;
        case 9:
            exit(1);
        }
    }
}

void display()
{
    node *temp;
    temp = head;
    if (temp == 0)
    {
        printf("Empty\n");
    }

    while (temp != 0)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

void input(int x)
{
    node *newnode;
    newnode = (node *)malloc(sizeof(node));
    newnode->data = x;
    newnode->prev = 0;
    newnode->next = 0;
    if (head == 0)
    {
        newnode->next = 0;
        head = tail = newnode;
    }
    else
    {
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
}

void ins_beg(int a)
{
    node *newnode;
    newnode = (node *)malloc(sizeof(node));
    newnode->data = a;
    newnode->prev = 0;
    newnode->next = 0;
    head->prev = newnode;
    newnode->next = head;
    head = newnode;
}

void insert_last(int y)
{
    node *newnode;
    newnode = (node *)malloc(sizeof(node));
    newnode->data = y;
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}
void del_beg()
{
    node *temp;
    if (head == 0)
    {
        printf("Empty\n");
    }
    else
    {
        temp = head;
        head = head->next;
        head->prev = 0;
        free(temp);
    }
}

void del_end()
{
    node *temp;
    if (tail == 0)
    {
        printf("Empty\n");
    }
    else
    {
        temp = tail;
        tail->prev->next = 0; // temp->prev->next=0
        tail = tail->prev;    // tail=temp->prev
    }
}

void Insert(int val, int pos)
{
    node *newnode, *temp;
    int i = 1;
    newnode = (node *)malloc(sizeof(node));
    newnode->data = val;
    if (pos == 1)
    {
        ins_beg(val);
    }
    else
    {
        temp = head;
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        newnode->prev = temp;
        newnode->next = temp->next;
        temp->next = newnode;
        newnode->next->prev = newnode;
    }
}

void del(int pos)
{
    node *temp;
    int i = 1;
    if (pos == 1)
    {
        del_beg();
    }
    else
    {
        temp = head;
        while (i < pos)
        {
            temp = temp->next;
            i++;
        }

        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(temp);
    }
}
