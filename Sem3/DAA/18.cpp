#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int knap(vector<int> &wt, vector<int> &val, vector<int> &ans, int n, int K)
{
    vector<vector<int> > dp(n + 1, vector<int>(K + 1, 0));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= K; j++)
        {
            if (val[i - 1] > j)
                dp[i][j] = dp[i - 1][j];
            else
                dp[i][j] = max(val[i - 1] + dp[i - 1][j - wt[i - 1]], dp[i - 1][j]);
        }
    }

    int i = n, j = K;
    while (i > 0 && j > 0)
    {
        if (dp[i][j] != dp[i - 1][j])
        {
            ans.push_back(i - 1);
            j -= wt[i - 1];
        }
        i--;
    }

    return dp[n][K];
}

int main()
{
    int n;
    cin >> n;

    vector<int> wt(n);
    vector<int> val(n);

    vector<int> ans;

    for (int i = 0; i < n; i++)
        cin >> wt[i];

    for (int i = 0; i < n; i++)
        cin >> val[i];

    int K;
    cin >> K;

    cout << "max :-" << knap(wt, val, ans, n, K) << "\n";

    for (int i = ans.size() - 1; i >= 0; i--)
        cout << wt[ans[i]] << " ";
    cout << "\n";
    for (int i = ans.size() - 1; i >= 0; i--)
        cout << val[ans[i]] << " ";

    return 0;
}

// 5
// 2 3 3 4 6
// 1 2 5 9 4
// 10