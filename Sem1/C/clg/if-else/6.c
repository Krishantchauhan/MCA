#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    printf("Enter the equation\n ");
    printf("a");
    scanf("%d", &a);

    printf("b");
    scanf("%d", &b);

    printf("c");
    scanf("%d", &c);

    float d1, d2;
    // d = -b + -sqrt(b ^ 2 - 4ac) / 2a;

    d1 = (-b + sqrt((b * b) - (4 * a * c))) / 2 * a;
    d2 = (-b - sqrt((b * b) - (4 * a * c))) / 2 * a;

    printf("+ve d %f \n", d1);
    printf("-ve d %f", d2);
}