#include <stdio.h>

int main()
{
    int a = 0, c;
    // c=++a + ++a ;

    // c=a++ + a++;
    // c=++a + a++;
    // c=a++ + ++a;
    // c=++a + ++a + a++;
    // c=a++ + a++ + ++a;
    // c=++a + a++ + a++;
    // c=a++ + ++a + ++a;

    c = ++a + a++ + ++a + a++;

    printf("%d \n", c);
    return 0;
}