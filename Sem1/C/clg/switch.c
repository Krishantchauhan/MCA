#include <stdio.h>

int main()
{

    int c = 0;
    int check = 1;
    int d;

    while (check)
    {
        int a;
        printf("Enter a choice \n ");
        scanf("%d", &a);
        int n1, n2;
        printf("Enter numbers \n ");
        scanf("%d", &n1);
        scanf("%d", &n2);

        switch (a)
        {
        case 1:
            c = n1 + n2;
            printf("%d", c);
            break;

        case 2:
            c = n1 - n2;
            printf("%d", c);
            break;

        case 3:
            c = n1 * n2;
            printf("%d", c);
            break;

        case 4:
            c = n1 / n2;
            printf("%d", c);
            break;

        default:
            printf("plzz try again");
            break;
        }
        if (d == 1)
        {
            scanf("%d", &d);
            check = d;
        }
    }

    while (check)
    {
        int a;
        printf("Enter a choice \n ");
        scanf("%d", &a);
        int n1, n2;
        printf("Enter numbers \n ");
        scanf("%d", &n1);
        scanf("%d", &n2);

        switch (a)
        {
        case 1:
            c = n1 + n2;
            printf("%d", c);
            break;

        case 2:
            c = n1 - n2;
            printf("%d", c);
            break;

        case 3:
            c = n1 * n2;
            printf("%d", c);
            break;

        case 4:
            c = n1 / n2;
            printf("%d", c);
            break;

        default:
            printf("plzz try again");
            break;
        }
        if (d == 1)
        {
            scanf("%d", &d);
            check = d;
        }
    }
}