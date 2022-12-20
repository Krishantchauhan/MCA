#include <stdio.h>

int main()
{
    int count = 65;
    for (int i = 1; i < 8; i++)
    {
        for (int j = 1; j < 8; j++)
        {
            if ((j >= 5 - i && j <= 3 + i) && (j >= i - 3 && j <= 11 - i))
            {
                printf("%c", count);
            }
            else
            {
                printf(" ");
            }
        }
        count++;
        printf("\n");
    }
}