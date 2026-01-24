#include <bits/stdc++.h>
using namespace std;    
void dfs(vector<vector<char>>& grid, int r, int c) {
        int row = grid.size();
        int col = grid[0].size();

        if (r < 0 || r >= row || c < 0 || c >= col || grid[r][c] != '1')
            return;
        grid[r][c] = '0';

        dfs(grid, r + 1, c);
        dfs(grid, r - 1, c);
        dfs(grid, r, c + 1);
        dfs(grid, r, c - 1);
    }

    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int cnt = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == '1') {
                    dfs(grid, i, j);
                    cnt++;
                }
            }
        }
        return cnt;
    }