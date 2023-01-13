// sum of digits
#include <stdio.h>

int sumofdigits(int a)
{
    if (a > 0)
    {
        int n = a % 10;
        return n * 10 + sumofdigits(a / 10);
    }
    else
        return 0;
}

int main()
{
    int a, f;
    printf("Enter a number \n ");
    scanf("%d", &a);
    f = sumofdigits(a);
    printf("%d", f);
}