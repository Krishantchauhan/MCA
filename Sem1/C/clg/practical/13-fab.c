#include <stdio.h>
//(x/1!)+(x/2!)+(x/3!)+(x/5!)+(x/5!)
int main()
{
    float a;
    printf("Enter a number \n ");
    scanf("%f", &a);
    float sum = 0, flag = 1, i;
    while (flag <= a)
    {
        float fact = 1;
        i = flag;
        while (i > 0)
        {
            fact = i * fact;
            i--;
        }
        sum = sum + (a / fact);
        flag++;
    }
    printf("%f\n", sum);
}