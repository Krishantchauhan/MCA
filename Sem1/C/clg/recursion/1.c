#include <stdio.h>
int conv(int a)
{
    int fact = 1, sum = 0;
    for (int i = 1; i <= a; i++)
    {
        fact = fact * i;
        sum = sum + (fact / i);
    }
    return sum;
}

int main()
{
    int a, sum;
    printf("Enter a number \n ");
    scanf("%d", &a);
    sum = conv(a);
    printf("%d", sum);
}