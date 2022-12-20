#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number \n ");
    scanf("%d", &a);
    int sum = 0;
    for (int i = 0; i <= a; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    printf("%d \n", sum);
}