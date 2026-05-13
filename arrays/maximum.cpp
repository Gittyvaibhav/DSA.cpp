#include <iostream>
using namespace std;

int main()
{
    int n;
    
    cout << "ENTER THE SIZE: ";
    cin >> n;

    int arr[n];
    cout << "ENTER THE ELEMENTS: ";

    // INPUT
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max=arr[0];
    for(int i=0 ;i<=n-1;i++){
        if (max<arr[i]) max =arr[i];
    }
    cout<<"MAXIMUM="<<max;
}