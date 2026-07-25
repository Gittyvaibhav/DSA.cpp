#include <iostream>
#include <cmath>
#include <climits>
#include <vector>
using namespace std;

int solve(vector<int> &prices, int n, int index, int buy, vector<vector<int>> &dp)
{
    if (index == n)
    {
        return 0;
    }
    if (dp[index][buy] != -1)
    {
        return dp[index][buy];
    }

    int maxProfit = 0;

    if (buy)
    {
        maxProfit = max(
            -prices[index] + solve(prices, n, index + 1, 0, dp),
            0 + solve(prices, n, index + 1, 1, dp));
    }
    else
    {
        maxProfit = max(
            prices[index] + solve(prices, n, index + 1, 1, dp),
            0 + solve(prices, n, index + 1, 0, dp));
    }

    dp[index][buy] = maxProfit;
    return maxProfit;
}

int main()
{
    vector<int> prices = {3, 23, 4, 5, 1};
    int n = prices.size();
    vector<vector<int>> dp(n, vector<int>(2, -1));
    cout << solve(prices, n, 0, 1, dp);
}