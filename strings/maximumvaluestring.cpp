#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
int main()
{
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;

    string arr[n];
    cout << "Enter strings: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "You entered:" << " ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    string maxS = arr[0];
    int max = stoi(arr[0]); // max is supposed to store the largest integer found in the array.
    for (int i = 1; i < n; i++)
    {
        int x = stoi(arr[i]);
        if (x > max)
            max = x;
        maxS = arr[i];
    }
    cout << "The maximum value is: " << max;
}

