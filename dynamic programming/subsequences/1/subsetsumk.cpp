#include <iostream>
#include <vector>
using namespace std;

bool solve(vector<int>& arr, int index, int n, int target)
{
    // If target becomes 0, we found a subset
    if (target == 0)
        return true;

    // If all elements are considered and target is not 0
    if (index == n)
        return false;

    // Pick the current element
    bool pick = false;
    if (arr[index] <= target)
    {
        pick = solve(arr, index + 1, n, target - arr[index]);
    }

    // Don't pick the current element
    bool notPick = solve(arr, index + 1, n, target);

    return pick || notPick;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 2};
    int n = arr.size();
    int k = 7;

    bool ans = solve(arr, 0, n, k);

    if (ans)
        cout << "True";
    else
        cout << "False";

    return 0;
}