#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
using namespace std;

int frogjump(vector<int> &arr, int index, int n, vector<int> &dp)
{
    if (index == 0)
    {
        return 0;
    }

    if (dp[index] != -1)
    {
        return dp[index];
    }

    int jump1 = frogjump(arr, index - 1, n, dp) + abs(arr[index] - arr[index - 1]);

    int jump2 = INT_MAX;

    if (index > 1)
    {
        jump2 = frogjump(arr, index - 2, n, dp) + abs(arr[index] - arr[index - 2]);
    }

    dp[index] = min(jump1, jump2);
    return dp[index];
}

int main()
{
    vector<int> arr = {30, 10, 60, 10, 60, 50};
    int n = arr.size();
    vector<int> dp(n, -1);

    cout << frogjump(arr, n - 1, n, dp) << endl;
}