#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number \n ");
    scanf("%d", &a);
    int count = 0;
    for (a; a > 0; a /= 10)
    {
        count++;
    }
    printf("%d \n", count);
}