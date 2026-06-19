#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
using namespace std;

int frogjump(vector<int> &arr, int n)
{
    vector<int> dp(n);

    dp[0] = 0;

    for (int i = 1; i < n; i++)
    {
        int jump1 = dp[i - 1] + abs(arr[i] - arr[i - 1]);

        int jump2 = INT_MAX;
        if (i > 1)
        {
            jump2 = dp[i - 2] + abs(arr[i] - arr[i - 2]);
        }

        dp[i] = min(jump1, jump2);
    }

    return dp[n - 1];
}

int main()
{
    vector<int> arr = {30, 10, 60, 10, 60, 50};

    cout << frogjump(arr, arr.size()) << endl;
}