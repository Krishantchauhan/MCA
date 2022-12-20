#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number \n ");
    scanf("%d", &a);
    int count = 1;

    while (a != 0)
    {
        if (count % 2 == 0)
        {
            printf("%d \n", count);
        }
        count++;
        a--;
    }
}