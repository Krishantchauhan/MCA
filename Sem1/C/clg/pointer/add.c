#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter first number \n ");
    scanf("%d", &a);
    printf("Enter second number \n ");
    scanf("%d", &b);

    int *ptr1, *ptr2;
    ptr1 = &a;
    ptr2 = &b;

    c = *ptr1 + (*ptr2);
    c = a + b;

    printf(" the sum is %d", c);
}