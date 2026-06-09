//memoization is a top-down approach to dynamic programming where we store the results of previously computed subproblems in a cache (usually a hash map or an array) to avoid redundant work. This technique is particularly useful for optimizing recursive algorithms that have overlapping subproblems, as it allows us to look up the result of a subproblem instead of recomputing it, thus reducing the time complexity from exponential to polynomial in many cases.
// In memoization, we typically define a recursive function that checks if the result of a subproblem is already stored in the cache before performing the recursive calls. If the result is found in the cache, we return it immediately; otherwise, we compute the result, store it in the cache, and then return it. This approach can significantly improve the performance of algorithms that would otherwise have a large number of redundant calculations, such as the Fibonacci sequence or the knapsack problem.
#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<int, int> memo;

int fibonacci(int n) {
    if (n <= 1) return n;
    if (memo.find(n) != memo.end()) return memo[n];
    memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return memo[n];
}

int main() {
    int n;
    cout << "Enter the position of the Fibonacci number you want to find: ";
    cin >> n;
    cout << "The " << n << "th Fibonacci number is: " << fibonacci(n) << endl;
    return 0;
}