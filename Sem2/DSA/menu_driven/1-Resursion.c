#include <stdio.h>

int HCF(int a, int b);
int LCM(int a, int b);
int fact(int n);
int fibonacci(int n);

int main()
{
    int choice;
    int a, b, n;
    int result;

    do
    {
        printf("Recursion Menu\n");
        printf("1. HCF\n");
        printf("2. LCM\n");
        printf("3. Factorial\n");
        printf("4. Fibonacci\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            printf("Exiting program.\n");
            break;
        case 1:
            printf("Enter two numbers to calculate HCF: ");
            scanf("%d %d", &a, &b);
            result = HCF(a, b);
            printf("HCF: %d\n", result);
            break;
        case 2:
            printf("Enter two numbers to calculate LCM: ");
            scanf("%d %d", &a, &b);
            result = LCM(a, b);
            printf("LCM: %d\n", result);
            break;
        case 3:
            printf("Enter a number to calculate factorial: ");
            scanf("%d", &n);
            result = fact(n);
            printf("Factorial: %d\n", result);
            break;
        case 4:
            printf("Enter the number of terms for Fibonacci sequence: ");
            scanf("%d", &n);
            printf("Fibonacci sequence: ");
            for (int i = 0; i < n; i++)
            {
                result = fibonacci(i);
                printf("%d ", result);
            }
            printf("\n");
            break;
        default:
            printf("Invalid choice. Try again.\n");
            break;
        }
        printf("\n");
    } while (choice != 0);

    return 0;
}

int HCF(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return HCF(b, a % b);
    }
}

int LCM(int a, int b)
{
    int hcf = HCF(a, b);
    return (a * b) / hcf;
}

int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
