//using an extra parameter to print numbers from 1 to n
// This code prints numbers from 1 to n using recursion.
#include <iostream>
using namespace std;
void fun(int i,int n)
{
    if (i>n) //base case
    {
        return;
    }
    cout << i << " ";//kaam
    fun(i+1,n );//calling the function recursively
    
}
int main()
{
    cout << "Enter a number: ";
    int n;
    cin >> n;
    fun(1,n);
}