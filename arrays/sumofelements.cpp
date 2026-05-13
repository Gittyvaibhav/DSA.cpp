#include <iostream>
using namespace std;
int main()
{

    int n;
    int x =0;
    cout <<"ENTER THE SIZE : ";
    cin >> n;
    int arr[n];
    cout <<"ENTER THE ELEMENTS  : ";
    // INPUT
    for (int i = 0; i <n; i++)
    {
        cin >> arr[i];
    }

    // OUTPUT
    for (int i = 0; i <n; i++)
    {
        x += arr[i];
    }
    cout<<"SUM = "<<x;
}
