#include <iostream>
#include <cmath>
#include <climits>
#include <vector>
using namespace std;

int solve(vector<int> &prices, int n, int index, int buy)
{
    if (index == n) {
        return 0;
    }

    int maxProfit = 0;

    if (buy) {
        maxProfit = max(
            -prices[index] + solve(prices, n, index + 1, 0),
            0 + solve(prices, n, index + 1, 1)
        );
    }
    else {
        maxProfit = max(
            prices[index] + solve(prices, n, index + 1, 1),
            0 + solve(prices, n, index + 1, 0)
        );
    }

    return maxProfit;
}

int main()
{
    vector<int> prices = {3, 23, 4, 5, 1};
    int n = prices.size();

    cout << solve(prices, n, 0, 1);
}