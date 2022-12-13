#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number \n ");
    scanf("%d", &a);
    int sum = 1;

    for (int i = 1; i <= 10; i++)
    {
        sum = a * i;
        printf("%d \n", sum);
    }
}