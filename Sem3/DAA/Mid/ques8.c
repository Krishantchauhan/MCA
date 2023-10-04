#include <stdio.h>
static int comp = 0;
void merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int left[n1], right[n2];
    for (int i = 0; i < n1; i++)
        left[i] = arr[l + i];
    for (int i = 0; i < n2; i++)
        right[i] = arr[mid + 1 + i];
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
    {
        if (left[i] < right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else
        {
            arr[k] = right[j];
            j++;
        }
        k++;
        comp++;
    }
    while (i < n1)
        arr[k++] = left[i++];
    while (j < n2)
        arr[k++] = right[j++];
}

void mergeSort(int arr[], int l, int r)
{
    if (l >= r)
        return;
    int mid = (l + r) / 2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);
    merge(arr, l, mid, r);
}

void main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int size;
        scanf("%d", &size);
        int arr[size];
        for (int j = 0; j < size; j++)
            scanf("%d", &arr[j]);
        int flag = 0;
        mergeSort(arr, 0, size - 1);
        for (int j = 0; j < size; j++)
            printf("%d ", arr[j]);
        printf("\nComparisons= %d", comp);
    }
}