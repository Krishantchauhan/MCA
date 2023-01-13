#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter first number \n ");
    scanf("%d", &a);
    printf("Enter second number \n ");
    scanf("%d", &b);

    int *ptr1, *ptr2;
    ptr1 = &a;
    ptr2 = &b;

    if (*ptr1 > *ptr2)
        printf("First number is greater\n");
    else
        printf("Second number is greater\n");
}