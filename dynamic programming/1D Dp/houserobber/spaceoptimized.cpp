#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 1};
    int n = arr.size();

    if (n == 0)
        return 0;

    int prev2 = 0; // dp[0]
    int prev1 = arr[0];

    for (int i = 1; i < n; i++)
    {
        int pick = arr[i];
        if (i > 0)
        {
            pick = arr[i] + prev2;
        }

        int notPick = prev1;

        int curr = max(pick, notPick);

        prev2 = prev1;
        prev1 = curr;
    }

    cout << prev1 << endl;

    return 0;
}