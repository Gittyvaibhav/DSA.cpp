#include <iostream>
using namespace std;

// Space-optimized tabulation (bottom-up DP) for Fibonacci numbers.
// Instead of storing the whole DP table, we keep only the last two values
// because F(i) depends only on F(i-1) and F(i-2).
// Time: O(n). Space: O(1).
int main()
{
    int n;
    if (!(cin >> n))
        return 0;

    if (n == 0)
    {
        cout << 0 << '\n';
        return 0;
    }

    // Use long long to allow larger Fibonacci values (still will overflow eventually).
    long long prev2 = 0; // F(0)
    long long prev1 = 1; // F(1)

    // compute F(2) .. F(n)
    for (int i = 2; i <= n; ++i)
    {
        long long cur = prev1 + prev2; // F(i) = F(i-1) + F(i-2)
        prev2 = prev1;                 // shift window: prev2 <- F(i-1)
        prev1 = cur;                   // prev1 <- F(i)
    }

    cout << prev1 << '\n'; // F(n)
    return 0;
}
