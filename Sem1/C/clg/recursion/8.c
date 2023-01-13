// sum of digits
#include <stdio.h>

int fact(int a)
{
    if (a <= 0)
        return 1;
    else
        return a * fact(a - 1);
}

int main()
{
    int a, f;
    printf("Enter a number \n ");
    scanf("%d", &a);
    f = fact(a);
    printf("%d ", f);
}