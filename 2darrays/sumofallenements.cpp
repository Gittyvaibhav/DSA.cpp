#include <iostream>
using namespace std;
int main()
{
    // INPUT
    int x=0;
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
            x+=arr[i][j];
        }

       
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    
       }
    
    cout << "sum :" << x;
}