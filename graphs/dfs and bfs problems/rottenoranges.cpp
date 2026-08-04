#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
    vector<vector<int>> grid = {
        {2, 1, 2},
        {2, 0, 0},
        {1, 1, 1}
    };

    int n = grid.size();
    int m = grid[0].size();

    // Queue stores {{row, col}, time}
    queue<pair<pair<int, int>, int>> q;

    // Visited matrix
    vector<vector<int>> vis(n, vector<int>(m, 0));

    // Push all initially rotten oranges
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 2)
            {
                q.push({{i, j}, 0});
                vis[i][j] = 2;
            }
            else
            {
                vis[i][j] = 0;
            }
        }
    }

    int tm = 0;

    // Directions: Up, Right, Down, Left
    int deltaRow[] = {-1, 0, 1, 0};
    int deltaCol[] = {0, 1, 0, -1};

    while (!q.empty())
    {
        int row = q.front().first.first;
        int col = q.front().first.second;
        int time = q.front().second;

        q.pop();

        tm = max(tm, time);

        // Traverse all 4 neighbours
        for (int i = 0; i < 4; i++)
        {
            int neighbourRow = row + deltaRow[i];
            int neighbourCol = col + deltaCol[i];

            if (neighbourRow >= 0 &&
                neighbourRow < n &&
                neighbourCol >= 0 &&
                neighbourCol < m &&
                vis[neighbourRow][neighbourCol] != 2 &&
                grid[neighbourRow][neighbourCol] == 1)
            {
                vis[neighbourRow][neighbourCol] = 2;
                q.push({{neighbourRow, neighbourCol}, time + 1});
            }
        }
    }

    // Check if any fresh orange is left
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 1 && vis[i][j] != 2)
            {
                cout << -1 << endl;
                return 0;
            }
        }
    }

    cout << "Minimum time = " << tm << endl;

    return 0;
}