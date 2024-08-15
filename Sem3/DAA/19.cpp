#include <iostream>
#include <climits>
#include <vector>

using namespace std;

vector<int> arr = {10, 30, 5, 60};

// ijk
int mcm(int i, int j)
{
    if (i + 1 == j)
        return 0;
    int mn = INT_MAX;
    for (int k = i = 1; k < j; k++)
    {
        int sum = mcm(i, k) + mcm(k, j) + arr[i] * arr[j] * arr[k];
        mn = min(mn, sum);
    }
    return mn;
}

int main()
{

    cout<<mcm(0, arr.size() - 1);
}