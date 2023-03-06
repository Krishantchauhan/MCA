#include <stdio.h>

int main()
{
    int a[] = {-1, 6, -8, 9, -40, 20};
    int size = sizeof(a) / sizeof(a[0]);

    for (int i = size-1; i >= 0; i--)
    {
        if (a[i] < 0)
        {
            int j = i;
            while (a[j] < 0 && a[j + 1] > 0 && j < size - 1)
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                j++;
            }
        }
    }

    for (int i = 0; i < size; i++)
        printf("%d  ", a[i]);
}

