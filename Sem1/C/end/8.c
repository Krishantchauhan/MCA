#include <stdio.h>
struct Stru
{
    int n;
    float flt;
    char str[10];
};
union Uni
{
    int n;
    float flt;
    char str[10];
};
void main()
{
    struct Stru s = {29, 0.5, "Krish"};
    union Uni u = {29, 1.5, "Krish"};
    printf("Krishant Chauhan MCA A 29\n");
    // puts("With same data");
    printf("Struct\n");
    printf("%d\t%f\t%s\t\n", s.n, s.flt, s.str);
    printf("UNion Data\n");
    printf("%d\t%f\t%s\t\n", u.n, u.flt, u.str);
    printf("Size of Structure: %d\n", sizeof(s));
    printf("Size of Union: %d\n", sizeof(u));
}
