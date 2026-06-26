#include <iostream>
#include <vector>
using namespace std;

bool subSequence(int arr[], int start, int n, vector<int> &ans, int target, int currentSum)
{
    // Base condition
    if (start == n)
    {
        if (currentSum == target)
        {
            return true;
        }
        return false;
    }

    // Include current element
    ans.push_back(arr[start]);
    bool pick = subSequence(arr, start + 1, n, ans, target, currentSum + arr[start]);

    // Backtracking
    ans.pop_back();

    // Exclude current element
    bool notPick = subSequence(arr, start + 1, n, ans, target, currentSum);

    return pick || notPick;
}

int main()
{
    int n, k;

    cout << "ENTER THE TARGET SUM: ";
    cin >> k;

    cout << "ENTER THE NUMBER OF ELEMENTS: ";
    cin >> n;

    int arr[n];

    cout << "ENTER THE ELEMENTS: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> ans;

    if (subSequence(arr, 0, n, ans, k, 0))
        cout << "True";
    else
        cout << "False";

    return 0;
}