#include<stdio.h>
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1); 
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void quickSort(int arr[], int low, int high)
{
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
void main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int size;
        scanf("%d",&size);
        int arr[size];
        for(int j=0;j<size;j++)
        {
            scanf("%d",&arr[j]);
        }
        int key;
        scanf("%d",&key);
        quickSort(arr,0,size-1);
        int l=0,r=size-1;
        while(l<r)
        {
            if(arr[l]+arr[r]==key)
            {
                printf("%d %d\n",arr[l],arr[r]);
                break;
            }
            else if(arr[l]+arr[r]<key)
                l++;
            else
                r--;
        }
        if(l>=r)
        {
            printf("No such Element Exist\n");
        }
    }
}