#include <iostream>
#include <vector>
using namespace std;

// Function to display elements of a vector
void display(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "ENTER THE SIZE: ";
    cin >> n;

    vector<int> v1(n);
    cout << "ENTER THE ELEMENTS: ";
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    // Creating another vector to store the reversed elements
    vector<int> v2(n);
    for (int i = 0; i < n; i++)
    {
        v2[i] = v1[n - 1 - i]; // Correct assignment
    }

    // Display the reversed vector
    cout << "REVERSED ELEMENTS: ";
    display(v2);

    return 0;
}