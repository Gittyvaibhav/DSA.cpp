#include <iostream>
#include <vector>
using namespace std;

void subSequence(int arr[], int start, int n, vector<int>& ans)
{
    // Base condition
    if (start >= n)
    {
        cout << "{ ";

        for (int x : ans)
        {
            cout << x << " ";
        }

        cout << "}" << endl;
        return;
    }

    // Include current element
    ans.push_back(arr[start]);
    subSequence(arr, start + 1, n, ans);

    // Backtracking
    ans.pop_back();

    // Exclude current element
    subSequence(arr, start + 1, n, ans);
}

int main()
{
    int n;

    cout << "ENTER THE NUMBER OF ELEMENTS: ";
    cin >> n;

    int arr[n];

    cout << "ENTER THE ELEMENTS: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> ans;

    cout << "\nAll Subsequences:\n";

    subSequence(arr, 0, n, ans);

    return 0;
}