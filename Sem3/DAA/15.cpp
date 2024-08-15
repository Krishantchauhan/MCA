#include <iostream>
#include <vector>

using namespace std;

bool DFS(vector<vector<int> > &adj, int n, int src, vector<bool> &vis, vector<bool> &st)
{
    vis[src] = true;
    st[src] = true;

    for (int i = 0; i < n; i++)
    {
        if(adj[src][i]){
            if(!vis[i] && DFS(adj,n,i,vis,st))
                return true;
            else if(st[i])
                return true;
        }
    }

    st[src]=false;
    return false;
}

bool check(vector<vector<int> > &adj, int n)
{
    vector<bool> st(n, false);
    vector<bool> vis(n, false);

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            if (DFS(adj, n, i, vis, st))
                return true;
        }
    }
    return false;
}

int main()
{
    int n;
    cout << "Size:- ";
    cin >> n;

    vector<vector<int> > adjMat(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> adjMat[i][j];
    }

    if (check(adjMat, n))
        cout << "Yes";
    else
        cout << "NO";

    return 0;
}