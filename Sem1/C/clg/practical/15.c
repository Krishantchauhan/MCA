#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number \n ");
    scanf("%d", &a);
    int sum = 1, temp;
    for (a; a > 0; a /= 10)
    {
        temp = a % 10;
        sum *= temp;
    }
    printf("%d", sum);
}