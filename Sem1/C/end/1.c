#include <stdio.h>
int main()
{
    printf("Krishant Chauhan MCA A 29\n");
    int n;
    int day;
    printf("Enter your car number\n");
    scanf("%d", &n);

    // printf("Enter your day 1 for monday,\n 2 for tuesday,\n 3 for wednesday,\n 4 for thursday,\n 5 for friday,\n 6 for saturday,\n 7 for sunday");
    printf("Enter the day\n");
    scanf("%d", &day);

    if (day % 2 == 0 && n % 2 == 0)
    {
        printf("Allowed\n");
    }

    else
    {
        printf("your car cannot go outside today\n");
    }
}
