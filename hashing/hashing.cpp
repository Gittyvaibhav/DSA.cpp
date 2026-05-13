#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the size of array :";
    cin >> n;
    cout << "enter the elements of array :";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        
    }
    cout<<"elements of array are :";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // precompute
    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }
    cout<<endl;

    int q;
    cout<<"enter the number of times you want to konw the frequency :";
    cin >> q;
    while (q--)
    {
        int number;
        cout<<"enter the number whose frequesncy you wnat to know :";
        cin >> number;
        // fetch
        cout << hash[number] << endl;
    }
}