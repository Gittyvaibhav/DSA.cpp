// Fibonacci using tabulation
// Tabulation means storing answers of smaller problems in a table.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> dp(n + 1);

    dp[0] = 1;
    dp[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    cout << "Fibonacci number is: " << dp[n];

    return 0;
}
