#include <stdio.h>
void main()
{
    int m1[3][3] = {{1, 2, 3}, {4, 5, 6}, {4, 1, 2}};

    printf("Matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d  ", m1[i][j]);
        }
        printf("\n");
    }
    printf("\n\nSwapping\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                int temp = m1[i][j];
                m1[i][j] = m1[i][2 - j];
                m1[i][2 - j] = temp;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d  ", m1[i][j]);
        }
        printf("\n");
    }
}