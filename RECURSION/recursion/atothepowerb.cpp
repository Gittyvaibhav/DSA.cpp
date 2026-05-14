// space complexity: O(n) stack space due to recursion
// time complexity: O(n)
#include <iostream>
using namespace std;
int power(int n, int k)
{
    // base case
    if ( k == 0) 
    {
        return 1; 
    }
    // recursive call
    return n * power (n,(k-1)); 
}
int main()
{
    cout << "Enter a number: ";
    int n;
    cin >> n;
    cout << "Enter power : ";
    int k;
    cin >> k;
    cout << power(n, k); // actual argument
}