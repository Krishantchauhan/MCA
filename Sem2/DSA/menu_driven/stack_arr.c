#include <stdio.h>
int top, max, a[100], s, e, ch;
void Push(void);
void pop(void);
void peek();
void display(void);
int main()
{
    top = -1;
    printf("\nEnter the size But Max is [100]\n");
    scanf("%d", &s);
    printf("\n1.Push\n");
    printf("\n2.pop\n");
    printf("\n3.Peek\n");
    printf("\n4.display\n");
    printf("\n5.exit\n");
    do
    {
        printf("\nEnter the choice \n");
        scanf("%d", &ch);
        switch (ch)
        {
        case (1):
        {
            Push();
            break;
        }
        case (2):
        {
            pop();
            break;
        }
        case (3):
        {
            peek();
            break;
        }
        case (4):
        {
            display();
            break;
        }
        case (5):
        {
            printf("\n\t EXIT POINT ");
            break;
        }
        default:
        {
            printf("\n\t Please Enter a Valid Choice(1/2/3/4)");
        }
        }

    } while (ch != 5);
    return 0;
}

void Push()
{
    if (top >= s - 1)
        printf("Overflow\n");
    else
    {
        printf("Enter the Element to Push\n");
        scanf("%d", &e);
        top++;
        a[top] = e;
    }
}

void pop()
{
    if (top <= -1)
        printf("Underflow\n");
    else
    {
        printf("The Poped Element is %d\n", a[top]);
        top--;
    }
}
void peek()
{
    int co;
    co = top + 1;
    printf("There are %d Data in a stack\n", co);
}
void display()
{
    int i;
    if (top >= 0)
    {
        for (i = top; i >= 0; i--)
            printf("\n%d\n", a[i]);
    }
    else
        printf("\n Empty stack");
}
