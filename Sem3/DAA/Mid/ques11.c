#include<stdio.h>

void main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int size;
        scanf("%d",&size);
        char arr[size];
        for(int j=0;j<size;j++)
        {
            scanf(" %c",&arr[j]);
        }
        
        int alph[26]={0};
        for(int j=0;j<size;j++)
        {
            alph[arr[j]-'a']++;
        }
        int maxCount=0;
        int maxChar;
        for(int j=0;j<26;j++)
        {
            if(alph[j]>maxCount)
            {
                maxCount=alph[j];
                maxChar=j+'a';
            }
        }
        if(maxCount==1)
        {
            printf("No Duplicate Present");
        }
        else
        {
            printf("%c - %d\n",maxChar,maxCount);
        }
    }
}