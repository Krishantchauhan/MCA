#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number \n ");
    scanf("%d", &a);
    int sum = 0, temp;
    for (a; a > 0; a /= 10)
    {
        temp = a % 10;
        sum += temp;
    }
    printf("%d", sum);

    // int temp;
    // while (a != 0)
    // {
    //     temp = a % 10;
    //     sum += temp;
    //     a /= 10;
    // }
    // printf("%d", sum);
}