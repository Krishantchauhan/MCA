// deci to binary

#include <stdio.h>

int decimal(int a)
{
    int rem, mul = 1;
    while (a != 0)
    {
        rem = a % 2;
        mul = (mul * 10) + rem;
        a = a / 2;
    }
    return mul;
}

int reve(int mul)
{
    int temp = mul, rev = 0, rem1;
    while (temp != 0)
    {
        rem1 = temp % 10;
        rev = (rev * 10) + rem1;
        temp = temp / 10;
    }
    rev /= 10;
    return rev;
}

int main()
{
    int a, mul, rev;
    printf("Enter a number \n ");
    scanf("%d", &a);
    mul = decimal(a);
    rev = reve(mul);
    printf("Binary is %d", rev);
}