#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;
    
    // Taking input for first matrix dimensions
    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    
    // Taking input for second matrix dimensions
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;
    
    
    int mat1[r1][c1], mat2[r2][c2], result[r1][c2];
    
    // Input first matrix
    cout << "Enter elements of first matrix: \n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cin >> mat1[i][j];
        }
    }
    
    // Input second matrix
    cout << "Enter elements of second matrix: \n";
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cin >> mat2[i][j];
        }
    }
    
    // Initialize result matrix with 0
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }
    
    // Matrix multiplication
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    
    // Display result matrix
    cout << "Resultant matrix after multiplication: \n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}