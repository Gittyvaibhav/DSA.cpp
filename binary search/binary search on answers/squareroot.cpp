#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int low = 0;
    int high = n;
    int ans = 0;

    while (low <= high)
    {
        long long mid = low + (high - low) / 2;

        if (mid * mid <= n)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    cout << "Square Root: " << ans;
}