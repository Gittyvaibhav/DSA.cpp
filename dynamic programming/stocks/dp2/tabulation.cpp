#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> prices = {3, 23, 4, 5, 1};

    int n = prices.size();

    vector<vector<int>> dp(n + 1, vector<int>(2, 0));

    dp[n][0] = 0;
    dp[n][1] = 0;

    for (int index = n - 1; index >= 0; index--)
    {
        for (int buy = 0; buy <= 1; buy++)
        {
            int maxProfit = 0;

            if (buy)
            {
                // Either buy the stock or skip
                maxProfit = max(
                    -prices[index] + dp[index + 1][0],
                    0 + dp[index + 1][1]
                );
            }
            else
            {
                // Either sell the stock or skip
                maxProfit = max(
                    prices[index] + dp[index + 1][1],
                    0 + dp[index + 1][0]
                );
            }

            dp[index][buy] = maxProfit;
        }
    }

    // Initially we are allowed to buy
    cout << "Maximum Profit: " << dp[0][1] << endl;

    return 0;
}