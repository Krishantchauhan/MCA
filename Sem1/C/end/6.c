#include <stdio.h>
int fact(int num1)
{
    if (num1 < 1)
        return 1;
    return num1 * fact(num1 - 1);
}
int main()
{
    int num1;
    printf("Krishant Chauhan MCA A 29\n");

    printf("Enter a Number \n");
    scanf("%d", &num1);
    printf("Factorial is %d\n", fact(num1));
}
