#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "ENTER THE NUMBERS OF STUDENTS : ";
    cin >> n;
    int arr[n];
    cout << " ENTER THE MARKS : ";
    // INPUT
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }

    // OUTPUT
    for (int i = 0; i <= n - 1; i++)
        if (arr[i] < 35)
        {
            cout << i << "  ";
        }
}
