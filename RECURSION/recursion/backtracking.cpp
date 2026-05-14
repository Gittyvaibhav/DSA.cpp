#include <iostream>
using namespace std;
void backDescending(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    cout << i << " ";
    backDescending(i - 1, n);
}

void backAscending(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    backAscending(i - 1, n);
    cout << i << " ";
}

int main()
{
    int n;
    cout << "enter a number:";
    cin >> n;
    backDescending(n, n);
    cout<<endl;
    backAscending(n, n);
}