#include <stdio.h>

int L(int arr[], int n, int key, int *ct)
{
    int low = 0, high = n - 1, pos = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        (*ct)++;

        if (arr[mid] == key)
        {
            pos = mid;
            high = mid - 1;
        }
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return pos;
}

int R(int arr[], int n, int key, int *ct)
{
    int low = 0, high = n - 1, pos = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        (*ct)++;

        if (arr[mid] == key)
        {
            pos = mid;
            low = mid + 1;
        }
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return pos;
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

        int ct=0;
        int left = L(arr, n, key, &ct);
        int right = R(arr, n, key, &ct);

        if (left != -1)
            printf("%d is %d times\n",key, right - left + 1);
        else
            printf("Not Present\n");
        a--;
    }

    return 0;
}



