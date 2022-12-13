#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number \n ");
    scanf("%d", &a);

    if (a >= 18)
    {
        printf("Rajat is eligible to vote");
    }
    else
    {
        printf("Rajat is not eligible to vote");
    }
}