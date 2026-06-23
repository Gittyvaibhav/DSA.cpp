#include <iostream>
using namespace std;

int solve(int row, int col)
{
    if (row == 0 && col == 0)
        return 1;

    if (row < 0 || col < 0)
        return 0;

    int up = solve(row - 1, col);
    int left = solve(row, col - 1);

    return up + left;
}

int uniquePaths(int m, int n)
{
    return solve(m - 1, n - 1);
}

int main()
{
    int m, n;

    cout << "Enter rows and columns: ";
    cin >> m >> n;

    cout << "Unique Paths = " << uniquePaths(m, n) << endl;

    return 0;
}