#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    while (a)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        int key;
        scanf("%d", &key);
        int flag = 0;
        int pos = 0;
        for (int i = 0; i < n; i++)
        {
            
            if (key == arr[i])
            {
                flag = 1;
                pos = i + 1;
                break;
            }
            else
                pos = i + 1;
        }
        if (flag)
            printf("Present %d \n", pos);
        else
            printf("Not Present %d \n", pos);
        a--;
    }
}