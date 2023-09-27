#include <stdio.h>

int binary_search(int arr[], int n, int key, int *ct)
{
    int low = 0, high = n - 1, mid;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        (*ct)++;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
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

        scanf("%d", &key);

        int ct = 0;
        int bs = binary_search(arr, n, key, &ct);

        if (bs != -1)
            printf("Present %d\n", ct);
        else
            printf("Not Present %d\n", ct);

        a--;
    }

    return 0;
}
