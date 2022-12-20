#include <stdio.h>
int main()
{
    int a, sum = 0, b = 0, c = 1;
    printf("Krishant Chauhan MCA A 29\n");

    printf("Enter a number \n ");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        printf("%d\t", sum);
        sum = b + c;
        b = c;
        c = sum;
    }
}
