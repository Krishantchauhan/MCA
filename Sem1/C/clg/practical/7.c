#include <stdio.h>
int main()
{
    int a, count = 0;
    printf("Krishant Chauhan MCA A 29\n");
    printf("Enter to print prime number\n ");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        count = 0;
        for (int j = 2; j < i; j++)
        {
            (i % j == 0) ? count++ : printf("");
        }
        if (count == 0)
            printf("%d\t", i);
    }
}


