#include <stdio.h>

int sum(int a)
{
    if (a == 0)
        return a;
    else if (a % 2 == 0)
        return a + sum(a - 1);
    else
        return sum(a - 1);
}

int main()
{
    int a, f;
    printf("Krishant Chauhan MCA A 29\n");
    printf("Enter a number \n ");
    scanf("%d", &a);
    f = sum(a);
    printf("%d\n", f);
}
