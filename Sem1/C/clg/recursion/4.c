#include <stdio.h>

int sum(int a)
{
    if (a > 0)
    {
        if (a % 2 == 0)
            return a + sum(a - 1);
        else if (a % 2 != 0)
            return sum(a - 1);
    }
    else
        return 0;
}

int main()
{
    int a, f;
    printf("Enter a number \n ");
    scanf("%d", &a);
    f = sum(a);
    printf("%d", f);
}