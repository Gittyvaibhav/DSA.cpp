#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "ENTER THE SIZE: ";
    cin >> n;
    int c = 0;
    for (int i = 1; i <= n; i *= 2)
    {
        c++;
    }

    cout << c;
}
