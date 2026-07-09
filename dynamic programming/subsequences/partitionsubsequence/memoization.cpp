#include <iostream>
#include <vector>
using namespace std;

bool solve(vector<int> &nums, int index, int targetSum, int n,
           vector<vector<int>> &dp)
{
    if (targetSum == 0)
        return true;

    if (index == 0)
        return nums[0] == targetSum;

    if (dp[index][targetSum] != -1)
        return dp[index][targetSum];

    bool pick = false;
    if (nums[index] <= targetSum)
        pick = solve(nums, index - 1, targetSum - nums[index], n, dp);

    bool notPick = solve(nums, index - 1, targetSum, n, dp);

    return dp[index][targetSum] = pick || notPick;
}

int main()
{
    vector<int> nums = {1, 5, 11, 5};

    int n = nums.size();

    int sum = 0;
    for (int x : nums)
        sum += x;

    if (sum % 2 != 0)
    {
        cout << "False";
        return 0;
    }

    int targetSum = sum / 2;

    vector<vector<int>> dp(n, vector<int>(targetSum + 1, -1));

    if (solve(nums, n - 1, targetSum, n, dp))
        cout << "True";
    else
        cout << "False";

    return 0;
}