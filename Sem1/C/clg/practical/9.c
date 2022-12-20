#include <stdio.h>
void main()
{
    double n, sum = 0, x;
    printf("Krishant Chauhan MCA A 29\n");

    printf("enter the number of terms:");
    scanf("%lf", &n);
    printf("enter the number(value of x):");
    scanf("%lf", &x);
    for (int i = 1; i <= n; i++)
    {
        double fact = 1, a = 1, y = 1;
        for (int j = i; j > 0; j--)
        {
            a = a * (n - j + 1);
            y = y * x;
            fact = fact * j;
        }
        sum = sum + (a * y / fact);
    }
    printf("output:%lf \n", sum);
}
