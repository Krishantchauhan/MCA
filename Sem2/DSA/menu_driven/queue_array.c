#include <stdio.h>
#define max 5
int q[max];
int front = -1;
int rear = -1;
int x;
void main()
{
    int ch;
    do
    {
        printf("\n1.enqueue\n2.dequeue\n3.display\nEnter the choice \n");
        scanf("%d", &ch);
        switch (ch)
        {
        case (1):
            enqueue();
            break;
        case (2):
            dequeue();
            break;
        case (3):
            display();
            break;
        }
    } while (ch < 4);
}
void enqueue()
{
    printf("Enter the data \n");
    scanf("%d", &x);

    if (rear == max - 1)
    {
        printf("Overflow\n");
    }
    else if (rear == -1 && front == -1)
    {
        front = rear = 0;
        q[rear] = x;
    }
    else
    {
        rear++;
        q[rear] = x;
    }
}

void dequeue()
{
    if (rear == -1 && front == -1)
    {
        printf("Empty\n");
    }
    else if (front == rear)
    {
        front = rear - 1;
    }
    else
    {
        printf("%d\n", q[front]);
        front++;
    }
}
void display()
{
    int i;
    if (rear == -1 && front == -1)
    {
        printf("Empty\n");
    }
    else
    {
        for (i = front; i < rear + 1; i++)
        {
            printf("%d\n", q[i]);
        }
    }
}
