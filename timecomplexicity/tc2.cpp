#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cout << "ENTER THE n: ";
    cin >> n;
    cout << "ENTER THE m: ";
    cin >> m;
    int c=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j <m ; j++)
        {
            c++;
        }
        cout<<endl;
    }
}   