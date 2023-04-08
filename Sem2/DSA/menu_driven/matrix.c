#include <stdio.h>

void mul()
{
    int i, j, r1, c1, r2, c2;
    printf("Enter the column of 1st array\n");
    scanf("%d", &c1);
    printf("Enter the rows of 1st array\n");
    scanf("%d", &r1);

    printf("Enter the column of 2nd array\n");
    scanf("%d", &c2);
    printf("Enter the rows of 2nd array\n");
    scanf("%d", &r2);

    printf("Enter the Elements First Array \n");
    int a[r1][c1], b[r2][c2], mul[c2][r1];

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);
    }

    printf("Enter the Elements of Second Array \n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);
    }

    if (r1 != c2)
    {
        printf("Not possible \n");
        return 0;
    }

    printf("\n");
    
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            mul[i][j] = 0;
            for (int k = 0; k < c1; k++)
                mul[i][j] += a[i][k] * b[k][j];
        }
    }

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}
int main()
{
}
