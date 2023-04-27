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

    if (r2 != c1)
    {
        printf("Not possible \n");
    }
    else
    {
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
                printf("%d ", mul[i][j]);
            printf("\n");
        }
    }
}

void diag()
{
    int i, j, r1, c1, r2, c2;
    printf("Enter the column array\n");
    scanf("%d", &c1);
    printf("Enter the rows array\n");
    scanf("%d", &r1);
    printf("Enter the Elements of Array \n");
    int a[r1][c1];

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);
    }
    if (r1 != c1)
    {
        printf("Invalid matrix! Cannot perform diagonal swap.\n");
    }
    else
    {
        for (i = 0; i < r1; i++)
        {
            int temp = a[i][i];
            a[i][i] = a[i][r1 - i - 1];
        }
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
                printf("%d ", a[i][j]);
            printf("\n");
        }
    }
}

int main()
{
    // mul();
    diag();
    return 0;
}

void row_sum(int arr[m][n])
{

    int i, j, sum = 0;

    printf("\nFinding Sum of each row:\n\n");

    // finding the row sum
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {

            // Add the element
            sum = sum + arr[i][j];
        }

        // Print the row sum
        printf("Sum of row %d is %d", i, sum);

        // Reset the sum
        sum = 0;
    }
}

// Function to calculate sum of each column
void column_sum(int arr[m][n])
{
    int i, j, sum = 0;

    printf("\nFinding Sum of each column:\n\n");
    // finding the column sum
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            // Add the element
            sum = sum + arr[j][i];
        }

        printf("Sum of row %d is %d", i, sum);

        // Reset the sum
        sum = 0;
    }
}