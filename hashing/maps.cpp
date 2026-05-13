#include <iostream>
#include <bits/stdc++.h>
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
    // pre compute
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    // map
    for (auto it : mpp)
    {
        cout << it.first << " -> " << it.second << endl;
    }

    // fetch
    int q;
    cout << "enter the number of times you want to konw the frequency :";
    cin >> q;
    while (q--)
    {
        int number;
        cout << "enter the number whose frequesncy you wnat to know :";
        cin >> number;
        // fetch
        cout << mpp[number] << endl;
    }
}