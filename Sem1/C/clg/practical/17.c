#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number \n ");
    scanf("%d", &a);
    int sum = 0, temp, check = a;
    for (a; a > 0; a /= 10)
    {
        temp = a % 10;
        sum = (sum * 10) + temp;
    }
    if (check == sum)
        printf("Number is palindrome");
    else
        printf("Number is not palindrome");
}