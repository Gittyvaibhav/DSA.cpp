// note: This code is a simple recursive function to calculate the number of ways to reach the nth stair
// using either 1 or 2 steps at a time. It uses recursion to break down
#include <iostream>
using namespace std;
int stair(int n)
{
    // base case
    if (n==2 )
    {
        return 2;
    }
    if (n==1 )
    {
        return 1;
    }
    // recursive call
    return  
stair(n-1) + stair(n -2);//one call at a time
}
int main()
{
    cout << "Enter nth stair : ";
    int n;
    cin >> n;

    cout << stair(n);
}