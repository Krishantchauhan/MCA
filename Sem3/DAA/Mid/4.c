#include <stdio.h>
int binary_search(int arr[], int n, int key)
{
    int low = 0, high = n - 1, mid;
    while (low <= high)
    {
        mid = low + (high - low) / 2;

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

        int flag = 0;
        
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int sum = arr[i] + arr[j];
                int bs = binary_search(arr, n, sum);
                if (bs != -1)
                {
                    flag = 1;
                    printf("%d %d %d", i + 1, j + 1, bs + 1);
                    break;
                }
                else
                    flag = 0;
            }
            if (flag)
                break;
        }
        if (!flag)
            printf("no");
        a--;
    }

    return 0;
}
