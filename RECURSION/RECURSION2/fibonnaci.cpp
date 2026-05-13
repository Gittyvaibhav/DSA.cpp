#include <iostream>
using namespace std;
int fibonacci(int n)
{
    // base case
    if (n==0 ) return 0;
    if (n==1 ) return 1;
   
    
    // recursive call
    return  fibonacci(n-1) + fibonacci(n -2);//one call at a time
}
int main()
{
    cout << "Enter nth term : ";
    int n;
    cin >> n;

    cout << fibonacci(n);
}