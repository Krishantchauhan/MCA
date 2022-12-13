#include <stdio.h>

int main()
{
    // int a;
    // printf("Enter a number \n ");
    // scanf("%d", &a);
    int n1, n2;
    printf("Enter numbers \n ");
    scanf("%d", &n1);
    scanf("%d", &n2);
    int c;

    int x, y;
    printf("compare ");
    scanf("%d", &x);
    scanf("%d", &y);

    // switch (x > y)
    // {
    // case 1:
    //     c = n1 + n2;
    //     printf("%d", c);
    //     break;

    // case 0:
    //     c = n1 - n2;
    //     printf("%d", c);
    //     break;

    // default:
    //     break;
    // }

        switch (x+y-2)
    {
    case 1:
        c = n1 + n2;
        printf("%d", c);
        break;

    case 0:
        c = n1 - n2;
        printf("%d", c);
        break;

    default:
        break;
    }
}