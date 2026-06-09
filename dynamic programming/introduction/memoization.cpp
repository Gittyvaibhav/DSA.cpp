// memoization is a top-down approach to dynamic programming where we store the results of previously computed subproblems in a cache (usually a hash map or an array) to avoid redundant work. This technique is particularly useful for optimizing recursive algorithms that have overlapping subproblems, as it allows us to look up the result of a subproblem instead of recomputing it, thus reducing the time complexity from exponential to polynomial in many cases.
//  In memoization, we typically define a recursive function that checks if the result of a subproblem is already stored in the cache before performing the recursive calls. If the result is found in the cache, we return it immediately; otherwise, we compute the result, store it in the cache, and then return it. This approach can significantly improve the performance of algorithms that would otherwise have a large number of redundant calculations, such as the Fibonacci sequence or the knapsack problem.

//converting recursion to memoiation

#include <iostream>
#include <vector>
using namespace std;

int f(int n, vector<int>& dp)
{
    if (n <= 1)
        return n;

    if (dp[n] != -1)
        return dp[n];

    return dp[n] = f(n - 1, dp) + f(n - 2, dp);
}

int main()
{
    int n;
    cout << "Enter the position of the Fibonacci number you want to find: ";
    cin >> n;

    vector<int> dp(n + 1, -1);

    cout << "The " << n << "th Fibonacci number is: "
         << f(n, dp) << endl;

    return 0;
}