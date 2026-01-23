#include <bits/stdc++.h>
using namespace std;
void dfs(vector<vector<char>> &grid, int r, int c)
{
    if (r < 0 || r >= grid.size() || c < 0 || c >= grid[0].size() || grid[r][c] == 'W')
        return;
    grid[r][c] = 'W';
    dfs(grid, r, c - 1);
    dfs(grid, r, c + 1);
    dfs(grid, r + 1, c + 1);
    dfs(grid, r + 1, c - 1);
    dfs(grid, r - 1, c + 1);
    dfs(grid, r - 1, c - 1);
    dfs(grid, r + 1, c);
    dfs(grid, r - 1, c);
}
int countIslands(vector<vector<char>> &grid)
{
    int cnt = 0;
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[0].size(); j++)
        {
            if (grid[i][j] == 'L')
            {
                cnt++;
                dfs(grid, i, j);
            }
        }
    }
    return cnt;
}