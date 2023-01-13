#include <stdio.h>
int main()
{

    int *pt, *pt2;
    int *c;
    int a, b;
    printf("Krishant Chauhan MCA A 29\n");

    printf("Enter number 1\n");
    scanf("%d", &a);
    printf("Enter number 2\n");
    scanf("%d", &b);

    pt = &a;
    pt2 = &b;

    c = pt;
    pt = pt2;
    pt2 = c;

    printf("NUmber after swapped \nNum1 %d Num2 %d \n", *pt, *pt2);
}
