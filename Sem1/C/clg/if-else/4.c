#include <stdio.h>
int main()
{
    float a;
    printf("Enter Salary \n ");
    scanf("%d", &a);

    if (a <= 25000)
        a = a + (a * .20);
    else if (a > 25000 && a <= 50000)
        a = a + (a * .15);
    else if (a > 50000 && a <= 60000)
        a = a + (a * .10);
    else if (a > 100000)
        a = a + (a * .05);
    printf("The sal is %d", a);
}