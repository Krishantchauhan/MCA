
bool DFS(vector<vector<int>> &adjMat, int src, int n, vector<bool> &vis, vector<bool> &st)
{
    vis[src] = true;
    st[src] = true;

    for (int i = 0; i < n; i++)
    {
        if (adjMat[src][i] == 1)
        {
            if (!vis[i] && DFS(adjMat, i, n, vis, st))
                return true;
            else if (st[i])
                return true;
        }
    }

    st[src] = false;
    return false;

}

bool ischeck(vector<vector<int>> &adjMat, int n)
{
    vector<bool> vis(n, false);
    vector<bool> st(n, false);

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            if (DFS(adjMat, i, n, vis, st))
                return true;
        }
    }
    return false;
}


void FloydWarshall(vector<vector<int>> &graph)
{
    vector<vector<int>> mat = graph;

    for (int i = 0; i < A; i++)
    {
        for (int j = 0; j < A; j++)
        {
            for (int k = 0; k < A; k++)
            {
                if (mat[j][i] != INF && mat[i][k] != INF && mat[j][i] + mat[i][k] < mat[j][k])

                    mat[j][k] = mat[j][i] + mat[i][k];
            }
        }
    }
    output(graph);
    cout<<"\n";
    output(mat);
}


int knapSack(int K, const vector<int> &wt, const vector<int> &val, int n, vector<int> &selectedItems)
{
    vector<vector<int>> DP(n + 1, vector<int>(K + 1, 0));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= K; j++)
        {
            if (wt[i - 1] > j)
                DP[i][j] = DP[i - 1][j];
            else
                DP[i][j] = max(val[i - 1] + DP[i - 1][j - wt[i - 1]], DP[i - 1][j]);
        }
    }

    int i = n;
    int j = K;
    while (i > 0 && j > 0)
    {
        if (DP[i][j] != DP[i - 1][j])
        {
            selectedItems.push_back(i - 1);
            j -= wt[i - 1];
        }
        i--;
    }

    return DP[n][K];
}



int MCM(int i, int j)
{
    if (i + 1 == j)
        return 0;

    int mn = INT_MAX;

    for (int k = i + 1; k < j; k++)
    {
        int sum = MCM(i, k) + MCM(k, j) + arr[i] * arr[k] * arr[j];
        mn = min(mn, sum);
    }

    return mn;
}

bool bfs(int src, vector<vector<int>> &adj, vector<int> &vis,int n)
{
    queue<int> q;
    q.push(src);
    while (!q.empty())
    {
        src = q.front();
        q.pop();
        for (int i = 0; i < n; ++i)
        {
            if (adj[src][i] == 1)
            {
                if (vis[i] == -1)
                {
                    vis[i] = 1 - vis[src];
                    q.push(i);
                }
                else if (vis[i] == vis[src])
                    return false;
            }
        }
    }
    return true;
}

bool check(vector<vector<int>> &adj)
{
    int n = adj.size();
    vector<int> vis(n, -1);
    for (int i = 0; i < n; i++)
    {
        if (vis[i] == -1)
        {
            vis[i] = 1;
            if (!bfs(i, adj, vis,n))
                return false;
        }
    }
    return true;
}