#include <stdio.h>
int hcf(int n1, int n2)
{
    if (n1 == 1 || n2 == 1)
        return 1;
    if (n1 == n2)
        return n1;
    if (n1 > n2)
        n1 -= n2;
    else
        n2 -= n1;
    return hcf(n1, n2);
}
int main()
{
    int n1, n2;
    printf("Enter the 2 number by giving one space\n");
    scanf("%d %d", &n1, &n2);
    printf("HCF is %d.", hcf(n1, n2));
    return 0;
}