#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
    int n;
    printf("Enter the size: ");
    scanf("%d", &n);

    char charr[n];
    printf("\nEnter the character: ");
    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &charr[i]);
    }

    int arr[n];
    printf("\n\nBefore Characters Sequence is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%c ", charr[i]);
        arr[i] = charr[i] - 'a';
    }
    quickSort(arr, 0, n - 1);
    printf("\n\nAfter Sorted Sequence is: ");
    for (int i = 0; i < n; i++)
        printf("%c ", arr[i] + 'a');
    return 0;
}