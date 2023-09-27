#include <stdio.h>

void selection(int arr[], int n, int *cmp, int *sft)
{

    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && key < arr[j])
        {
            (*cmp)++;
            (*sft)++;
            arr[j + 1] = arr[j];
            j--;
        }
        (*sft)++;
        arr[j + 1] = key;
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
        printf("\ncomparisons = %d\n Shifts = %d\n", cmp, sft);

        a--;
    }

    return 0;
}
