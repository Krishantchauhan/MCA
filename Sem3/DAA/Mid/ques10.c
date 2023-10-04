#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int size;
        scanf("%d",&size);
        int arr[size];
        int max=0;
        for(int j=0;j<size;j++)
        {
            scanf("%d",&arr[j]);
            if(max<arr[j])
                max=arr[j];
        }
        int num;
        scanf("%d",&num);
        int countSort[max+1]={0};
        for(int j=0;j<size;j++)
            countSort[arr[j]]++;

        for(int j=0;j<=max;j++)
        {
            num-=countSort[j];
            if(num<=0)
            {
                printf("%d\n",j);
                break;
            }
        }
    }
}