#include <iostream>
using namespace std;

void reverseArray(int arr[], int start, int end) {
    
    // Base condition
    if(start >= end) {
        return;
    }

    // Swap elements
    swap(arr[start], arr[end]);

    // Recursive call
    reverseArray(arr, start + 1, end - 1);
}

int main() {
    int n;

    cout << "ENTER THE NUMBER OF ELEMENTS: ";
    cin >> n;

    int arr[n];

    cout << "ENTER THE ELEMENTS: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Original Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    reverseArray(arr, 0, n - 1);

    cout << "\nReversed Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}