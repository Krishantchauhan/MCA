#include <stdio.h>

int lcm(int a, int b);
int result(int val, int a, int b);
void main()
{
    int a = 12;
    int b = 8;
    int val = lcm(a, b);
    printf("LCM:%d", val);
}
int lcm(int a, int b)
{
    if (a > b)
    {
        return result(a, a, b);
    }
    else
    {
        return result(b, b, a);
    }
}

int result(int ans, int a, int b)
{
    if (ans % b == 0)
    {
        return ans;
    }
    return result(ans + a, a, b);
}