#include <stdio.h>
int main()
{

    int *pt, *ct;
    int a[2][2];
    int i, j, s;
    int b[2][2];
    int add[2][2];
    int flag = 0;
    printf("Krishant Chauhan MCA A 29\n");
    printf("Enter first matrix \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {

            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the element of second matrix \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {

            scanf("%d", &b[i][j]);
        }
    }

    // printf(" first matrix: \n");
    // for (i = 0; i < 2; i++)
    // {
    //     for (j = 0; j < 2; j++)
    //     {

    //         printf(" %d ", a[i][j]);
    //     }
    //     printf("\n");
    // }

    // printf(" second matrix: \n");
    // for (i = 0; i < 2; i++)
    // {
    //     for (j = 0; j < 2; j++)
    //     {

    //         printf(" %d ", b[i][j]);
    //     }
    //     printf("\n");
    // }

    pt = a;
    ct = b;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {

            add[i][j] = *pt + *ct;
            pt++;
            ct++;
        }
    }

    int *ad;
    ad = add;

    printf(" The sum of Matrix is \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {

            printf(" %d ", *ad);
            ad++;
        }
        printf("\n");
    }
}
