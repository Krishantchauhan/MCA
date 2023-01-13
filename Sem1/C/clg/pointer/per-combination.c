#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char a[10];
    printf("Enter a number \n ");
    scanf("%s", &a);
    double temp;
    int s;
    s = strlen(a);
    temp = s;
    long per = 1, p = 1;
    s = s + 1;
    while (--s)
    {
        per = per * s;
    }
    p = pow(per, temp);
    printf("%ld", p);
}