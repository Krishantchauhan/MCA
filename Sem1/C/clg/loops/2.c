#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number \n ");
    scanf("%d", &a);

    while (a != 0)
    {
        printf("%d \n", a);
        a--;
    }
}