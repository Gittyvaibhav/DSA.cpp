#include <iostream>
using namespace std;
void sums(int sum,int n)
{
    if (n == 0 ) //base case
    {
        cout << sum << endl; // Print the sum when n reaches 0
        return;
    }
    sums(sum + n, n - 1); // Add n to sum and call with n-1
    // The sum is accumulated in the parameter 'sum'
    
}
int main()
{
    cout << "Enter a number: ";
    int n;
    cin >> n;
    sums(0, n); // Start with sum = 0
}