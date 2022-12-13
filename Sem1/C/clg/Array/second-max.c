#include <stdio.h>

int main()
{
    int i, s;
    printf("Enter the size of an array\n");
    scanf("%d", &s);
    int a[s];
    printf("Enter the %d Elements\n", s);
    for (i = 0; i < s; i++)
        scanf("%d", &a[i]);

    int max = a[0];
    for (int i = 0; i < s; i++)
    {
        if (a[i] > max)
            max = a[i];
    }

    int sec = a[0];
    for (int i = 0; i < s; i++)
    {
        if (a[i] != max)
        {
            if (a[i] > sec)
                sec = a[i];
        }
    }
    printf("sec %d \n", sec);
}