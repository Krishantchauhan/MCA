#include <stdio.h>

void selection(int arr[], int n, int *cmp, int *sft)
{
    for (int i = 0; i < n - 1; i++)
    {
        int mn = i;
        for (int j = i + 1; j < n; j++)
        {
            (*cmp)++;
            if (arr[j] < arr[mn])
                mn = j;
        }
        (*sft)++;
        int temp = arr[i];
        arr[i] = arr[mn];
        arr[mn] = temp;
    }
}

int main()
{
    int a;
    scanf("%d", &a);

    while (a)
    {
        int n, key;
        scanf("%d", &n);

        int arr[n];
        for (int i = 0; i < n; i++)
            scanf("%d", &arr[i]);

        int cmp = 0, sft = 0;

        selection(arr, n, &cmp, &sft);

        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\ncomparisons = %d\nshifts = %d\n", cmp, sft);

        a--;
    }

    return 0;
}
