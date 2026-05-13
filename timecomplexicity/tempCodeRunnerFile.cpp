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
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int sum2 = ((n-1)*(n))/2;
    cout<<"The duplicate element is :"<<sum-sum2;
}