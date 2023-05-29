#include <stdio.h>

#define MAX_SIZE 10

void multiply(int matrix1[][MAX_SIZE], int matrix2[][MAX_SIZE], int result[][MAX_SIZE], int rows1, int cols1, int rows2, int cols2)
{
    if (cols1 != rows2)
    {
        printf("Invalid matrices! Cannot perform multiplication.\n");
        return;
    }

    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            result[i][j] = 0;

            for (int k = 0; k < cols1; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

void transpose(int matrix[][MAX_SIZE], int rows, int cols)
{
    int transpose[MAX_SIZE][MAX_SIZE];

    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            transpose[i][j] = matrix[j][i];
        }
    }

    printf("Transpose of the matrix:\n");
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
}

void DiagonalSwap(int matrix[][MAX_SIZE], int size)
{
    for (int i = 0; i < size; i++)
    {
        int temp = matrix[i][i];
        matrix[i][i] = matrix[i][size - i - 1];
        matrix[i][size - i - 1] = temp;
    }
    printf("Matrix after diagonal swap:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int choice, rows1, cols1, rows2, cols2;
    int matrix1[MAX_SIZE][MAX_SIZE], matrix2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];

    printf("Matrix Menu\n");
    printf("1. Matrix Multiplication\n");
    printf("2. Matrix Transpose\n");
    printf("3. Diagonal Swap\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter the number of rows and columns of matrix 1: ");
        scanf("%d %d", &rows1, &cols1);
        printf("Enter the elements of matrix 1:\n");
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < cols1; j++)
            {
                scanf("%d", &matrix1[i][j]);
            }
        }

        printf("Enter the number of rows and columns of matrix 2: ");
        scanf("%d %d", &rows2, &cols2);
        printf("Enter the elements of matrix 2:\n");
        for (int i = 0; i < rows2; i++)
        {
            for (int j = 0; j < cols2; j++)
            {
                scanf("%d", &matrix2[i][j]);
            }
        }

        if (cols1 != rows2)
        {
            printf("Invalid matrices! Cannot perform multiplication.\n");
        }
        else
        {
            multiply(matrix1, matrix2, result, rows1, cols1, rows2, cols2);

            printf("Result of matrix multiplication:\n");
            for (int i = 0; i < rows1; i++)
            {
                for (int j = 0; j < cols2; j++)
                {
                    printf("%d ", result[i][j]);
                }
                printf("\n");
            }
        }
        break;

    case 2:
        printf("Enter the number of rows and columns of the matrix: ");
        scanf("%d %d", &rows1, &cols1);
        printf("Enter the elements of the matrix:\n");
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < cols1; j++)
            {
                scanf("%d", &matrix1[i][j]);
            }
        }

        transpose(matrix1, rows1, cols1);
        break;

    case 3:
        printf("Enter the size of the square matrix: ");
        scanf("%d", &rows1);
        printf("Enter the elements of the matrix:\n");
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < rows1; j++)
            {
                scanf("%d", &matrix1[i][j]);
            }
        }

        DiagonalSwap(matrix1, rows1);
        break;

    default:
        printf("Invalid choice! Please select a valid option.\n");
        break;
    }

    return 0;
}
