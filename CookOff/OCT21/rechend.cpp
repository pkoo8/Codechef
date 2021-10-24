#include <bits/stdc++.h>
using namespace std;
bool reachable(vector<vector<int>> &grid)
{
    int i = 1;
    int j = 1;
    int n = grid.size() - 1;
    grid[i][j] = 0;
    for (int i = 1; i <= 2*n; i++)
    {
        if (grid[i - 1][j%n] == 0 || grid[i][j - 1] == 0)
        {
            if (grid[i][j] != 1)
                grid[i][j] = 0;
        }
    }
    return grid[n][n] == 0;
    // if (i == n && j == n)
    // {
    //     return true;
    // }
    // if (i > n || j > n)
    // {
    //     return false;
    // }
    // else if (grid[i][j] == 1)
    // {
    //     return false;
    // }
    // return reachable(grid, i + 1, j) || reachable(grid, i, j + 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> grid(n + 1, vector<int>(n + 1, -1));
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            grid[x][y] = 1;
        }
        bool ans = reachable(grid);
        if (ans)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}