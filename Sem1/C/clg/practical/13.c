#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number \n ");
    scanf("%d", &a);
    int l = 0, f = 0, num = a, n = a, count = 0, val = 1;
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
        count++;
    }
    if (n != 0)
    {
        n /= 10;
    }
    n = (n * 10) + f;
    while (count != 0)
    {
        count--;
        val = val * 10;
    }
    val /= 10;
    if (n != 0)
    {
        n %= val;
    }
    printf("%d%d", l, n);
}