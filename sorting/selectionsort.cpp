#include <bits/stdc++.h>
using namespace std;

//selection sort algo
void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n - 2; i++)
    {
        int mini = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
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
    selection_sort(arr, n);
    cout<<"sorted array :";
    for (int i = 0; i < n; i++)
    {
        
        cout << arr[i] << " ";
    }
    return 0;
}