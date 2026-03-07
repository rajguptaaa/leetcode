#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int orangesRotting(vector<vector<int>> &grid)
{
    queue<tuple<int, int, int>> q;
    int count = 0;
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[0].size(); j++)
        {
            if (grid[i][j] == 1)
            {
                count++;
            }
            if (grid[i][j] == 2)
            {
                q.push({i, j, 0});
            }
        }
    }

    vector<int> dx = {-1, 1, 0, 0};
    vector<int> dy = {0, 0, -1, 1};
    int time = 0;
    while (!q.empty())
    {
        auto [x, y, t] = q.front();
        q.pop();
        time = max(time, t);
        for (int i = 0; i < 4; i++)
        {
            int new_x = x + dx[i];
            int new_y = y + dy[i];

            if (new_x >= 0 && new_x < grid.size() && new_y >= 0 &&
                new_y < grid[0].size() && grid[new_x][new_y] == 1)
            {
                grid[new_x][new_y] = 2;
                count--;
                q.push({new_x, new_y, t + 1});
            }
        }
    }
    
    return count == 0 ? time : -1;
}

int main()
{
    vector<vector<int>> arr = {
        {2, 1, 1},
        {0, 1, 0},
        {1, 0, 1}};
    vector<vector<int>> arr2 = {
        {2, 1, 1},
        {1, 1, 0},
        {0, 1, 1}};
    vector<vector<int>> arr3 = {
        {2, 1, 2},
        {1, 2, 1},
        {2, 1, 2}};

    cout << orangesRotting(arr) << endl;
    cout << orangesRotting(arr2) << endl;
    cout << orangesRotting(arr3) << endl;
    return 0;
}