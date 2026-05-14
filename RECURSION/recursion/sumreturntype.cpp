#include <iostream>
using namespace std;
int dum(int n)
{
    // base case
    if (n == 0) // if n is 0 or 1
    {
        return 0; // dum of 0 or 1 is 1
    }
    // recursive call
    return n + dum(n - 1); // return the dum value
}
int main()
{
    cout << "Enter a number: ";
    int n;
    cin >> n;
    cout << dum(n); // actual argument
}