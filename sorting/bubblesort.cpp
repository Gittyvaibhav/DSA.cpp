#include <bits/stdc++.h>
using namespace std;

//selection sort algo
void bubble_sort(int arr[], int n)
{for (int i = 0; i < n - 1; i++) {
    int didSwap=0;
            for (int j = 0; j <n- i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    didSwap=1;
                }
            }
            if(didSwap==0){
                break;
            }
            cout<<"runs\n";
        }


}


//taking input and
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
    bubble_sort(arr, n);
    cout<<"sorted array :";
    for (int i = 0; i < n; i++)
    {
        
        cout << arr[i] << " ";
    }
    return 0;
}


        