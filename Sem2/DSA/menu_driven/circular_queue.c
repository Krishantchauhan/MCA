#include <stdio.h>
void enqueue();
void dequeue();
void display();
int front = -1;
int rear = -1;
int size = 5;
int queue[5];
int capacity = 5;

void main()
{
    int flag = 0;
    while (1)
    {
        int ch;
        printf("\nEnter your choice:\n1.Enqueue\n2.Dequeue\n3.Display\n4.exit\n\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            flag = 1;
            break;
        default:
            printf("Enter correct choice");
        }
        if (flag == 1)
        {
            break;
        }
    }
}

void enqueue()
{
    if (capacity <= 0)
    {
        printf("queue full\n");
    }
    else
    {
        capacity--;
        int val;
        printf("\nEnter the value: ");
        scanf("%d", &val);
        if (front == -1)
        {
            front = 0;
        }
        rear = (rear + 1) % size;
        queue[rear] = val;
    }
}

void dequeue()
{
    if (capacity >= size)
    {
        printf("queue empty");
    }
    else
    {
        capacity++;
        front++;
    }
}

void display()
{
    if (capacity >= size)
    {
        printf("queue empty\n");
    }
    else if (front <= rear)
    {
        for (int i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
    }
    else
    {
        for (int i = front; i < size; i++)
        {
            printf("%d ", queue[i]);
        }
        for (int i = 0; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
    }
}