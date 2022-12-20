#include <stdio.h>

int main()
{
  printf("Krishant Chauhan MCA A 29\n");
    for (int i = 1; i < 4; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            if (i == 1 || j == 1 || i == 3 || j == 5)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
