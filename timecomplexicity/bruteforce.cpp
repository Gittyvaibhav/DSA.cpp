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
    // searching duplicate element
    bool flag= false;//flag is used to track whether a duplicate is found  initially set to false.
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << "The duplicate element is: " << arr[i];
                flag = true;
                break;
            }
        }
        if(flag==true)break;
       
    }
}