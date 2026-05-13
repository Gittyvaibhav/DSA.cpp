#include <iostream>
using namespace std;

int main() {
    int n, m;

    // Input matrix dimensions (both must be the same)
    cout << "Enter the number of rows and columns of the matrices: ";
    cin >> n >> m;

    // Define matrices
    int arr1[n][m], arr2[n][m], arr3[n][m];

    // Input first matrix
    cout << "Enter the elements of the first matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr1[i][j];
        }
    }

    // Input second matrix
    cout << "Enter the elements of the second matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr2[i][j];
        }
    }

    // Matrix Addition
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    // Display result
    cout << "The resulting matrix after addition is:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr3[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;
}
