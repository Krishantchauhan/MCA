#include <stdio.h>

int main()
{
    for (int i = 1; i < 5; i++)
    {
        int count = 1;
        for (int j = 1; j < 8; j++)
        {

            if (j >= 5 - i && j <= 3 + i)
            {
                printf("%d", count);
                count++;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}