#include <stdio.h>

int main()
{
    for (int i = 1; i < 5; i++)
    {
        int count = 1;
        for (int j = 1; j < 8; j++)
        {
            if (j >= 4 - i && j <= 4 + i)
            {
                printf("*");
            }
            else
            {
                printf("");
            }
        }
        printf("\n");
    }
}