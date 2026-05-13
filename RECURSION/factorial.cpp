#include <iostream>
using namespace std;
int fact(int n)
{ 
    // base case
    if(n==1 || n==0) // if n is 0 or 1
    {
        return 1; // factorial of 0 or 1 is 1
    }
     //recursive call
    return n*fact(n-1); // return the factorial value
}
int main()
{
    cout << "Enter a number: ";
    int n;  
    cin >> n; 
   cout<< fact(n); // actual argument
}