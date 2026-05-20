#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void subsetsWithDup(int index,
                    int nums[],
                    int n,
                    vector<int> &ds,
                    vector<vector<int>> &ans)
{
    // Base case: reached end, record current subset
    if (index == n)
    {
        ans.push_back(ds);
        return;
    }

    for (int i = index; i < n; i++)
    {
        // Skip duplicate elements at the same recursion level
        if (i > index && nums[i] == nums[i - 1])
            continue;

        // Pick current element
        ds.push_back(nums[i]);

        // Recurse to next index
        subsetsWithDup(i + 1, nums, n, ds, ans);

        // Backtrack
        ds.pop_back();
    }
}

int main()
{
    int n;

    cout << "ENTER THE NUMBER OF ELEMENTS: ";
    if (!(cin >> n)) return 0;

    int nums[100];

    cout << "ENTER THE ELEMENTS: ";

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    // Sort array so duplicates are adjacent
    sort(nums, nums + n);

    vector<int> ds;
    vector<vector<int>> ans;

    subsetsWithDup(0, nums, n, ds, ans);

    cout << "\nAll Unique Subsets are:\n";

    if (ans.empty())
    {
        cout << "No subsets found.\n";
    }
    else
    {
        for (auto &v : ans)
        {
            cout << "[ ";

            for (auto x : v)
            {
                cout << x << " ";
            }

            cout << "]\n";
        }
    }

    return 0;
}