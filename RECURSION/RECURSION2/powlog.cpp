#include <iostream>
using namespace std;

int power(int n, int k)
{
    // base cases
    if (k == 0)
        return 1;
    if (k == 1)
        return n;

    int ans = power(n, k / 2); // recursive call

    if (k % 2 == 0)
        return ans * ans;
    else
        return n * ans * ans;
}

int main()
{
    cout << "Enter the base: ";
    int n;
    cin >> n;
    cout << "Enter the exponent: ";
    int k;
    cin >> k;

    cout << "Result: " << power(n, k);
}
