#include <iostream>
using namespace std;
void fun(int n)
{
    if (n == 0 || n < 0) //base case
    {
        return;
    }
    cout << n << " ";//kaam
    fun(n - 1);//calling the function recursively
    
}
int main()
{
    cout << "Enter a number: ";
    int n;
    cin >> n;
    fun(n);
}