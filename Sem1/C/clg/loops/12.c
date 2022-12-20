#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number \n ");
    scanf("%d", &a);
    int l = 0;
    int f = 0;
    int num = a;
    for (a; a > 0; a /= 10)
    {
        if (a != 0)
        {
            f = a % 10;
        }
        if (num != 0)
        {
            l = num % 10;
        }
    }
    int sum = 0;
    sum = l + f;
    printf("%d", sum);
}