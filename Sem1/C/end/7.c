#include <stdio.h>
struct Stru
{
    int a;
    int b;
};
void func(struct Stru x, struct Stru y)
{
    int A = x.a + y.a;
    int B = x.b + y.b;
    printf("The Sum is %d + %di \n", A, B);
}

void main()
{
    struct Stru s1, s2;
    printf("Krishant Chauhan MCA A 29\n");
    printf("Enter Complex No \n");
    scanf("%d%d", &s1.a, &s1.b);
    scanf("%d%d", &s2.a, &s2.b);
    func(s1, s2);
}
