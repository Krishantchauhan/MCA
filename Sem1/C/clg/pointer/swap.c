#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter first number \n ");
    scanf("%d", &a);
    printf("Enter second number \n ");
    scanf("%d", &b);

    int *ptr1, *ptr2, *ptr3;
    ptr1 = &a;
    ptr2 = &b;

    ptr3 = ptr2;
    ptr2 = ptr1;
    ptr1 = ptr3;

    printf("a= %d", *ptr1);
    printf("b= %d", *ptr2);
}