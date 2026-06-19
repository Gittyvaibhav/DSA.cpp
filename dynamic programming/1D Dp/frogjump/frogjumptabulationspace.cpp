#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    vector<int> arr = {30, 10, 60, 10, 60, 50};
    int n = arr.size();

    if (n == 0)
        return 0;

    int prev2 = 0; // dp[0]
    int prev1 = 0; // dp[1] will be computed

    for (int i = 1; i < n; i++)
    {
        int jump1 = prev1 + abs(arr[i] - arr[i - 1]);

        int jump2 = INT_MAX;
        if (i > 1)
        {
            jump2 = prev2 + abs(arr[i] - arr[i - 2]);
        }

        int curr = min(jump1, jump2);

        prev2 = prev1;
        prev1 = curr;
    }

    cout << prev1 << endl;

    return 0;
}