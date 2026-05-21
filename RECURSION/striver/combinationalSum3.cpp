#include <iostream>
#include <vector>

using namespace std;

void combinationalSum2(int index,
                       int nums[],
                       int n,
                       vector<int> &ds,
                       vector<vector<int>> &ans,
                       int target,
                       int k)
{
    // Base condition
    if (target == 0 && ds.size() == k)
    {
        ans.push_back(ds);
        return;
    }

    // If size exceeds k, stop
    if (ds.size() > k)
        return;

    for (int i = index; i < n; i++)
    {
        // Stop if current number exceeds target
        if (nums[i] > target)
            break;

        // Pick element
        ds.push_back(nums[i]);

        // Recursive call
        combinationalSum2(i + 1,
                          nums,
                          n,
                          ds,
                          ans,
                          target - nums[i],
                          k);

        // Backtrack
        ds.pop_back();
    }
}

int main()
{
    int target;
    int k;

    cout << "ENTER THE TARGET SUM: ";
    cin >> target;

    cout << "ENTER HOW MANY NUMBERS REQUIRED: ";
    cin >> k;

    int nums[9] = {1,2,3,4,5,6,7,8,9};

    vector<int> ds;
    vector<vector<int>> ans;

    combinationalSum2(0,
                      nums,
                      9,
                      ds,
                      ans,
                      target,
                      k);

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