#include <iostream>
using namespace std;

int main()
{
    int n, x;
    cout << "ENTER DESIRED ELEMENT: ";
    cin >> x;
    cout << "ENTER THE SIZE: ";
    cin >> n;

    int arr[n];
    cout << "ENTER THE ELEMENTS: ";

    // INPUT
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // SEARCHING
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            found = true;
            break;  // No need to check further once found
        }
    }

    // OUTPUT RESULT
    if (found)
        cout << "ELEMENT IS PRESENT IN THE ARRAY" << endl;
    else
        cout << "NO, IT IS NOT PRESENT" << endl;

    return 0;
}