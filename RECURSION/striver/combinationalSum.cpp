#include <iostream>
#include <vector>
using namespace std;

void combinationalSum(int index,
                      int candidates[],
                      int n,
                      vector<int>& ds,
                      vector<vector<int>>& ans,
                      int target)
{
    // Base condition
    if (index == n)
    {
        if (target == 0)
        {
            ans.push_back(ds);
        }
        return;
    }

    // Include current element
    if (candidates[index] <= target)
    {
        ds.push_back(candidates[index]);

        combinationalSum(index, candidates, n, ds, ans, target - candidates[index]);

        // Backtracking
        ds.pop_back();
    }

    // Exclude current element
    combinationalSum(index + 1, candidates, n, ds, ans, target);
}

int main()
{
    int n, target;

    cout << "ENTER THE TARGET SUM: ";
    cin >> target;

    cout << "ENTER THE NUMBER OF ELEMENTS: ";
    cin >> n;

    int candidates[n];

    cout << "ENTER THE ELEMENTS: ";

    for (int i = 0; i < n; i++)
    {
        cin >> candidates[i];
    }

    vector<int> ds;
    vector<vector<int>> ans;

    combinationalSum(0, candidates, n, ds, ans, target);

    cout << "\nCombinations are:\n";

    for (auto v : ans)
    {
        cout << "[ ";
        for (auto x : v)
        {
            cout << x << " ";
        }
        cout << "]\n";
    }

    return 0;
}