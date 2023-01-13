#include <stdio.h>

int main()
{
    int i, s;
    printf("Enter the size of an array\n");
    scanf("%d", &s);
    int a[s];
    printf("Enter the %d Elements\n", s);
    for (i = 0; i < s; i++)
        scanf("%d", &a[i]);
    int *ptr = &a;
    for (i = 0; i < s; i++)
        printf("%d \t", *(ptr + i));

    printf("Method 2");
    for (i = 0; i < s; i++)
        printf("%d \t", ptr[i]);
}