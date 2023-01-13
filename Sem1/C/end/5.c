#include <stdio.h>
int Sumdigit(int num1)
{
    if (num1 < 1)
        return 0;
    return num1 % 10 + Sumdigit(num1 / 10);
}
int main()
{
    int num1;
    printf("Krishant Chauhan MCA A 29\n");
    printf("Enter your Number \n");
    scanf("%d", &num1);
    printf("Sum is %d\n", Sumdigit(num1));
}
