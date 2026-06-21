#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
using namespace std;

int houseRobber(vector<int> &nums, int index, vector<int> &dp)
{
    if (index < 0)
        return 0;

    if (index == 0)
        return nums[0];

    if (dp[index] != -1)
        return dp[index];

    int pick = nums[index] + houseRobber(nums, index - 2, dp);

    int notPick = houseRobber(nums, index - 1, dp);

    dp[index] = max(pick, notPick);

    return dp[index];
}

int main()
{
    vector<int> nums = {1, 2, 3, 1};
    int n = nums.size();

    vector<int> dp(n, -1);

    cout << houseRobber(nums, n - 1, dp);
}