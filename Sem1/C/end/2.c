// #include <stdio.h>
// int hcf(int, int);
// int calc(int, int);
// int calc(int p, int q)
// {
//     int a = p % q;
//     if (a == 0)
//     {
//         return q;
//     }
//     else
//     {
//         hcf(p, a);
//     }
// }

// int hcf(int m, int n)
// {
//     if (m > n)
//     {
//         calc(m, n);
//     }
//     else
//     {
//         calc(n, m);
//     }
// }

// void main()
// {
//     printf("Krishant Chauhan MCA A 29\n");
//     int m, n;
//     printf("Enter the First Number \n");
//     scanf("%d", &m);
//     printf("Enter the Second Number \n");
//     scanf("%d", &n);
//     printf("HCF of %d & %d is %d\n", m, n, hcf(m, n));
// }

#include <stdio.h>
int main()
{
    int n1, n2, i, gcd;
        printf("Krishant Chauhan MCA A 29\n");
    printf("Enter the First Number \n");
    scanf("%d", &n1);
    printf("Enter the Second Number \n");
    scanf("%d", &n2);

    for (i = 1; i <= n1 && i <= n2; ++i)
    {
        // Checks if i is factor of both integers
        if (n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }

    // printf("G.C.D of %d and %d is %d", n1, n2, gcd);
    printf("HCF of %d & %d is %d\n", n1, n2, gcd);

    return 0;
}
