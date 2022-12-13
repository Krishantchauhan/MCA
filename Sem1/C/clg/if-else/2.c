#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number \n ");
    scanf("%d", &a);

    if (a >= 75)
        printf("Distinction");
    else if (a >= 60 && a < 75)
        printf("First Division");
    else if (a >= 50 && a < 60)
        printf("Second Division");
    else if (a >= 40 && a < 50)
        printf("Third Division");
    else
        printf("Fail!! :)\n");
}