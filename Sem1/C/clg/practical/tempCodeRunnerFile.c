#include <stdio.h>
void main()
{
    printf("Krishant Chauhan MCA A 29\n");
    printf("Enter the Number: ");
    int n, pos;
    scanf("%d", &n);
    printf("Enter the Position: ");
    scanf("%d", &pos);
    int p = n ^ (1 << (pos - 1));
    printf("%d after toggling bit of %d position: %d", n, pos, p);
}