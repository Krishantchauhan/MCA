#include <stdio.h>

int main()
{
    int a;
    printf("Krishant Chauhan MCA A 29\n");

    printf("Enter a number \n ");
    scanf("%d", &a);
    int count = 0;
    for (a; a > 0; a /= 10)
    {
        count++;
    }
    printf("Count = %d \n", count);
}
