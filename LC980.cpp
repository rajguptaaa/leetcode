#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int solve(int x, int y, int n, int m, int remain, vector<vector<int>>& grid) {
        if (x < 0 || x >= n || y < 0 || y >= m || grid[x][y] == -1) return 0;

        if (grid[x][y] == 2) {
            return remain == 0 ? 1 : 0;
        }
        
        grid[x][y] = -1; // mark
        remain--;

        int totalPaths = 0;
        totalPaths += solve(x + 1, y, n, m, remain, grid);
        totalPaths += solve(x - 1, y, n, m, remain, grid);
        totalPaths += solve(x, y + 1, n, m, remain, grid);
        totalPaths += solve(x, y - 1, n, m, remain, grid);

        grid[x][y] = 0; // backtrack
        return totalPaths;
    }

    int uniquePathsIII(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int x = 0, y = 0, empty = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (grid[i][j] == 0) empty++;
                else if (grid[i][j] == 1) {
                    x = i;
                    y = j;
                }
            }
        }
        return solve(x, y, n, m, empty + 1, grid);
    }
};
