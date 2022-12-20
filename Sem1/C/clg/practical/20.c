#include <stdio.h>

int main()
{
    int i, s;
    printf("Enter the size of an array\n");
    scanf("%d", &s);
    int a[s];
    printf("Enter the %d Elements\n", s);
    for (i = 1; i <= s; i++)
        scanf("%d", &a[i]);
    int pos;
    printf("enter the position to delete \n");
    scanf("%d", &pos);
    if (pos <= s)
    {
        for (int i = pos; i <= s; i++)
            a[i] = a[i + 1];
        printf("After deleated\n");
        for (int i = 1; i < s; i++)
            printf("%d \t", a[i]);
    }
    else
        printf("Not possible\n");
}