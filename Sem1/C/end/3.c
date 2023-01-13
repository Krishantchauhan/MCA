#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, flag;
    char str[50];
    char str2[50];
    printf("Krishant Chauhan MCA A 29\n");
    printf("enter string 1 \n");
    scanf("%s", &str);

    printf("enter string 2\n");
    scanf("%s", &str2);

    if (strlen(str) == strlen(str2))
    {

        for (i = 0; i < strlen(str); i++)
        {
            flag = 0;
            for (j = 0; j < strlen(str2); j++)
            {

                if (str2[i] == str[j])
                {
                    flag = 1;
                }
            }

            if (flag == 0)
                break;
        }

        if (flag)
        {
            printf("string are  anagram\n");
        }
        else
        {
            printf("string are not anagram");
        }
    }

    else
    {
        printf("string are not anagram");
    }
}
