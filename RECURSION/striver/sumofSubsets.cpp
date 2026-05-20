#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void subSetSum(int nums[], int index, int n, vector<int> &ans, int currentSum)
{
    // Base case
    if (index == n)
    {
        ans.push_back(currentSum);
        return;
    }

    // Include current element
    subSetSum(nums, index + 1, n, ans, currentSum + nums[index]);

    // Exclude current element
    subSetSum(nums, index + 1, n, ans, currentSum);
}

int main()
{
    int n;

    cout << "ENTER THE NUMBER OF ELEMENTS: ";
    cin >> n;

    int nums[n];

    cout << "ENTER THE ELEMENTS: ";

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    vector<int> ans;

    subSetSum(nums, 0, n, ans, 0);

    cout << "\nAll subset sums:\n";
    sort(ans.begin(), ans.end());
    for (int sum : ans)
    {
        cout << sum << " ";
    }

    return 0;
}