#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number \n ");
    scanf("%d", &a);
    int sum = 0;
    for (int i = 0; i <= a; i += 2)
    {
        sum += i;
    }
    printf("%d \n", sum);
}