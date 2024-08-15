#include <iostream>
#include <vector>
#include <climits>
#include<iomanip>
using namespace std;

#define INF INT_MAX

void War(vector<vector<int> > &graph)
{
    int n = graph.size();
    vector<vector<int> > mat = graph;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if (mat[j][i] != INF && mat[i][k] != INF && mat[j][i] + mat[i][k] < mat[j][k])
                    mat[j][k] = mat[j][i] + mat[i][k];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++){
            if(mat[i][j]!=INF)
                cout<<setw(10)<<mat[i][j];
            else
                cout<<setw(10)<<"INF";
        }
    }
}

int main()
{
    vector<vector<int> > graph = {
        {0, 10, 5, 5, INF},
        {INF, 0, 5, 5, 5},
        {INF, INF, 0, INF, 10},
        {INF, INF, INF, 0, 20},
        {INF, INF, INF, 5, 0}};


    War(graph);

    return 0;
}