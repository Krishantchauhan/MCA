#include <stdio.h>

int main()
{
  printf("Krishant Chauhan MCA A 29\n");
  int c,co;
  scanf("%d",&c);
  co=(c+1)/2;
    for (int i = 1; i < c-3; i++)
    {
        int count = 1;
        for (int j = 1; j < c; j++)
        {

            if (j >= co+1- i && j <= co-1 + i)
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
