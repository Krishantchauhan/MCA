#include <stdio.h>
int main()
{
    int a;
    printf("Krishant Chauhan MCA A 29\n");

    printf("Enter AQI \n ");
    scanf("%d", &a);

    if (a > 0 && a <= 50)
        printf("Healthy");
    else if (a > 50 && a <= 100)
        printf("Moderate");
    else if (a > 100 && a <= 200)
        printf("Unhealthy\n");
    else if (a > 200 && a <= 300)
        printf("very Unhealthy");
    else if (a > 300 && a <= 500)
        printf("Hazardous");
}
