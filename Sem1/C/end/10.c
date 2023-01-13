#include <stdio.h>
int main()
{

    int *pt;
    int a[10];
    int i, j, s;
    int flag = 0;
    printf("Krishant Chauhan MCA A 29\n");
    printf("Enter the array: \n");
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }

    pt = a;

    printf("Enter number to search: ");
    scanf("%d", &s);

    for (pt; pt < &a[10 - 1]; pt++)
    {
        if (s == *pt)
        {
            flag = 1;
            break;
        }
    }

    if (flag)
    {
        printf("%d is present \n", s);
    }
    else
    {

        printf("%d is not present \n", s);
    }
}
