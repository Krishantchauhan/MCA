#include <stdio.h>

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {9, 8, 6, 2, 4};
    int s1 = sizeof(a) / sizeof(a[0]);
    int s2 = sizeof(b) / sizeof(b[0]);

    printf("\nINtersection \n");
    for (int i = 0; i < s1; i++)
    {
        for (int j = 0; j < s2; j++)
        {
            if (a[i] == b[j])
                printf("%d ", b[j]);
        }
    }

    printf("\nUNION \n");

    for (int i = 0; i < s1; i++)
        printf("%d ", a[i]);
    int flag = 0;
    for (int i = 0; i < s1; i++)
    {
        flag = 0;
        for (int j = 0; j < s2; j++)
        {
            if (b[i] == a[j])
                flag = 1;
        }
        if (flag == 0)
            printf("%d ", b[i]);
    }
}