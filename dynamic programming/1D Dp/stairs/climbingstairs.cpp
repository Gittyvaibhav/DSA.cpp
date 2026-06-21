#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number of stairs:";
    cin >> n;
    if (n <= 2)
    {
        return n;
    }
    int prev1 = 2;
    int prev2 = 1;
    for (int i = 3; i <= n; i++)
    {
        int curri = prev1 + prev2;
        prev2 = prev1;
        prev1 = curri;
    }
    cout << "No of distinct ways using 1 or 2 steps is : " << prev1;
}
