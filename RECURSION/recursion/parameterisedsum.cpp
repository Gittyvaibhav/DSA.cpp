// parameterised sum is a recursive function that takes two parameters, the first parameter is the number of terms to be added and the second parameter is the sum of the terms. The function will add the current term to the sum and then call itself with the next term until it reaches the base case where the number of terms is less than 1. At that point, it will print the final sum.
#include <iostream>
using namespace std;
void sums(int i, int sum)
{
    if (i < 1)
    {
        cout << "sum is:" << sum;
        return;
    }
    sums(i - 1, sum+i);
}
int main()
{
    int n;
    cout << "enter a number:";
    cin >> n;
    sums(n, 0);
}