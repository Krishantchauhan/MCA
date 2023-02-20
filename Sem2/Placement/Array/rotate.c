// 12345
// 23451

#include <stdio.h>
// int main()
// {
//     int a[] = {12, 34, 10, 6, 40};
//     int n = sizeof(a) / sizeof(a[0]);

//     int temp = a[0];
//     for (int i = 0; i < n - 1; i++)
//         a[i] = a[i + 1];

//     a[n - 1] = temp;

//     for (int i = 0; i < n; i++)
//         printf("%d  ", a[i]);
// }

// rotate n times 
int main()
{
    int a[] = {12, 34, 10, 6, 40};
    int n = sizeof(a) / sizeof(a[0]);

    int k = 2;
    while (k--)
    {
        int temp = a[0];
        for (int i = 0; i < n - 1; i++)
            a[i] = a[i + 1];
        a[n - 1] = temp;
    }

    for (int i = 0; i < n; i++)
        printf("%d  ", a[i]);
}