#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number \n ");
    scanf("%d", &a);

    int *ptr = &a;
    int fact = 1;

    while ((*ptr) != 0)
    {
        fact = fact * (*ptr);
        (*ptr)--;
    }
    printf("factorial = %d", fact);
}