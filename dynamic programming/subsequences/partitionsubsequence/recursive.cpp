#include <iostream>
#include <vector>
using namespace std;

bool solve(vector<int>& nums, int index, int targetSum, int n)
{
    if (targetSum == 0)
        return true;

    if (index >= n || targetSum < 0)
        return false;

    bool pick = solve(nums, index + 1, targetSum - nums[index], n);
    bool notPick = solve(nums, index + 1, targetSum, n);

    return pick || notPick;
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

    if (solve(nums, 0, targetSum, n))
        cout << "True";
    else
        cout << "False";

    return 0;
}