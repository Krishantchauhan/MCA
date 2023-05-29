#include <stdio.h>

void merge(int arr[], int left[], int n1, int right[], int n2) {
    int i = 0, j = 0, k = 0;
    
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            arr[k++] = left[i++];
        } else {
            arr[k++] = right[j++];
        }
    }
    
    while (i < n1) {
        arr[k++] = left[i++];
    }
    
    while (j < n2) {
        arr[k++] = right[j++];
    }
}

void mergeSort(int arr[], int n) {
    if (n <= 1) {
        return;
    }
    
    int mid = n / 2;
    int left[mid];
    int right[n - mid];
    
    for (int i = 0; i < mid; i++) {
        left[i] = arr[i];
    }
    
    for (int i = mid; i < n; i++) {
        right[i - mid] = arr[i];
    }
    
    mergeSort(left, mid);
    mergeSort(right, n - mid);
    merge(arr, left, mid, right, n - mid);
}

int main() {
    int arr[] = {7, 2, 5, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    mergeSort(arr, n);
    
    printf("\nSorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
