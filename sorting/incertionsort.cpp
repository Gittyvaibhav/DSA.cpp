#include <bits/stdc++.h>
using namespace std;

//selection sort algo
void insertion_sort(int arr[], int n){
for (int i = 1; i < n; i++) {
            int j = i;
            while (j > 0 && arr[j - 1] > arr[j]) {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
                j--;
            }
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
    insertion_sort(arr, n);
    cout<<"sorted array :";
    for (int i = 0; i < n; i++)
    {
        
        cout << arr[i] << " ";
    }
    return 0;
}


        