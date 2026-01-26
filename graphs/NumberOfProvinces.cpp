#include <bits/stdc++.h>
using namespace std;
void dfs(vector<vector<int>> &grid, vector<int> &visited, int i)
{
    if (visited[i])
        return;
    visited[i] = 1;
    for (auto it : grid[i])
    {
        dfs(grid, visited, it);
    }
}
int numProvinces(vector<vector<int>> adj, int V)
{
    vector<vector<int>> grid(V);
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            if (i != j && adj[i][j])
            {
                grid[i].push_back(j);
                grid[j].push_back(i);
            }
        }
    }
    vector<int> visited(V);
    int res = 0;
    for (int i = 0; i < V; i++)
    {
        if (!visited[i])
        {
            res++;
            dfs(grid, visited, i);
        }
    }
    return res;
}