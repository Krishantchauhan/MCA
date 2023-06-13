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

void sortCharacters()
{
    int n;
    printf("Enter the size: ");
    scanf("%d", &n);

    char charr[n];
    printf("\nEnter the characters: ");
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
}

int main()
{
    int arr[100];
    int len=0;
    int choice;
    do
    {
        printf("Menu\n");
        printf("1. Enter Characters\n");
        printf("2. Sort Characters\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                scanf("%d",&arr[len++]);
        case 2:
            sortCharacters();
            break;
        case 3:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice! Please try again.\n");
            break;
        }
    } while (choice != 3);

    return 0;
}
