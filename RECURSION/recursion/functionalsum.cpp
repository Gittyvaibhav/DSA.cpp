// FUNCTIONAL SUM is a recursive function that takes a single parameter, the number of terms to be added. The function will add the current term to the sum and then call itself with the next term until it reaches the base case where the number of terms is 0. At that point, it will return the final sum.
#include <iostream>
using namespace std;
int sums(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + sums(n - 1);
}
int main()
{
    int n;
    cout << "enter a number:";
    cin >> n;
    cout << "sum is:" << sums(n);
}