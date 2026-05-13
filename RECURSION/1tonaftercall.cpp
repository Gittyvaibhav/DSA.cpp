//recursion after call
// This code prints numbers from 1 to n using recursion after the recursive call.
#include <iostream>
using namespace std;
void fun(int n)
{
    if (n == 0 || n < 0) //base case
    {
        return;
    }
    fun(n - 1);//calling the function recursively
    cout << n << " ";//kaam
    
    
}
int main()
{
    cout << "Enter a number: ";
    int n;
    cin >> n;
    fun(n);
}