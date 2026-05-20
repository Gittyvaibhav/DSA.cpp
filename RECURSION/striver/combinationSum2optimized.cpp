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
    // Base case
    if (target == 0)
    {
        ans.push_back(ds);
        return;
    }

    for (int i = index; i < n; i++)
    {
        // Skip duplicate elements
        if (i > index && candidates[i] == candidates[i - 1])
            continue;

        // Since array is sorted,
        // no need to continue further
        if (candidates[i] > target)
            break;

        // Pick current element
        ds.push_back(candidates[i]);

        // Move to next index
        combinationalSum2(i + 1,
                          candidates,
                          n,
                          ds,
                          ans,
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

    if (ans.empty())
    {
        cout << "No combination found.\n";
    }
    else
    {
        for (auto v : ans)
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