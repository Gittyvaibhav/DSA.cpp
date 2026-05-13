#include <iostream>
using namespace std;
int fibonacci(int n)
{
    // base case
    if (n==1 || n==2)
    {
        return 1;
    }
    // recursive call
    // here we are making two calls at a time           
    int leftans = fibonacci(n-1); // first call
    int rightans = fibonacci(n -2); // second call
    
    return  leftans + rightans; // both calls are made
}
int main()
{
    cout << "Enter nth term : ";
    int n;
    cin >> n;

    cout << fibonacci(n);
}