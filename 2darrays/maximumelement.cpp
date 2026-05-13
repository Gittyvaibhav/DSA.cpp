#include <iostream>
using namespace std;
int main()
{
    // INPUT

    int n;
    cout << "enter the number of rows : ";
    cin >> n;
    int m;
    cout << "enter the number of coulmns : ";
    cin >> m;
    int arr[n][m];
    cout << "enter the elements : ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
        
    }
    // OUTPUT
    int max = arr[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (max < arr[i][j])
                max = arr[i][j];
        }

       
    }
    cout << "MAXIMUM :" << max;
}
