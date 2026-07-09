#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 2};
    int target = 7;

    int n = arr.size();

    // dp[index][target]
    vector<vector<bool>> dp(n + 1, vector<bool>(target + 1, false));

    // Base case: target = 0 is always possible
    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = true;
    }

    // Fill table
    for (int index = n - 1; index >= 0; index--)
    {
        for (int t = 1; t <= target; t++)
        {
            bool notPick = dp[index + 1][t];

            bool pick = false;
            if (arr[index] <= t)
            {
                pick = dp[index + 1][t - arr[index]];
            }

            dp[index][t] = pick || notPick;
        }
    }

    if (dp[0][target])
        cout << "True\n";
    else
        cout << "False\n";

    return 0;
}