#include <stdio.h>

int main()
{
  printf("Krishant Chauhan MCA A 29\n");
    for (int i = 1; i <=6; i++)
    {
        int count = 1;
        for (int j = 1; j < i; j++)
        {
            printf("%d", count);
            count++;
        }
        printf("\n");
    }
}
