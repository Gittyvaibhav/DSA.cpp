#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void combinationalSum2(int index,
                       int candidates[],
                       int n,
                       vector<int> &ds,
                       vector<vector<int>> &ans,
                       int target)
{
    // Base condition
    if (target == 0)
    {
        ans.push_back(ds);
        return;
    }

    for (int i = index; i < n; i++)
    {
        // Skip duplicates
        if (i > index && candidates[i] == candidates[i - 1])
            continue;

        // Stop if element exceeds target
        if (candidates[i] > target)
            break;

        // Pick element
        ds.push_back(candidates[i]);

        // Move to next index (each element used once)
        combinationalSum2(i + 1, candidates, n, ds, ans,
                          target - candidates[i]);

        // Backtrack
        ds.pop_back();
    }
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

    // Sort array
    sort(candidates, candidates + n);

    vector<int> ds;
    vector<vector<int>> ans;

    combinationalSum2(0, candidates, n, ds, ans, target);

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