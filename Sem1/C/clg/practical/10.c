#include <stdio.h>
int main()
{
    char a;
    printf("Krishant Chauhan MCA A 29\n");

    printf("Enter char \n ");
    scanf("%c", &a);

    if (a >= 65 && a <= 97)
    {
        a = a + 32;
    }
    else
    {
        a = a - 32;
    }

    printf("%c\n", a);
}
