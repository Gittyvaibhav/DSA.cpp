#include<iostream>
using namespace std;

int main() {
    int x;
    cout << "ENTER THE TARGET: ";
    cin >> x;

    int n;
    cout << "ENTER THE SIZE: ";
    cin >> n;

    int arr[n]; // Variable-length array (VLA), which is not standard in C++. Consider using a vector.
    
    cout << "ENTER THE ELEMENTS: ";
    for (int i = 0; i < n; i++) { 
        cin >> arr[i];
    }

    
    for (int i = 0; i < n - 1; i++) { 
        for (int j = i + 1; j < n; j++) { 
            if (arr[i] + arr[j] == x) {
                cout << "(" << i << "," << j << ")" << endl;
            }
        }
    }

    return 0;
}