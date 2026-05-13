#include <iostream>
using namespace std;
int main()
{
    // INPUT

    int arr[2][4];
    cout << "enter the elements : ";
    for (int i = 0; i < 2; i++)
    {for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
        
    }
    // OUTPUT
    
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }
    
}