#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
using namespace std;

int frogjump(vector<int> arr, int index, int n)
{
    if (index == 0)
    {
        return 0;
    }

    int jump1 = frogjump(arr, index - 1, n) + abs(arr[index] - arr[index - 1]);

    int jump2 = INT_MAX;

    if (index > 1)
    {
        jump2 = frogjump(arr, index - 2, n) + abs(arr[index] - arr[index - 2]);
    }

    return min(jump1, jump2);
}

int main()
{
    vector<int> arr = {30, 10, 60, 10, 60, 50};
    int n = arr.size();

    cout << frogjump(arr, n - 1, n);
}