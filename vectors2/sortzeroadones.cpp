#include <iostream>
#include <vector>
using namespace std;

// Function to sort a binary array (0s and 1s)
void sort(vector<int> &v)
{
    int n = v.size();
    int noo = 0; // Count of 1s
    int noz = 0; // Count of 0s

    // Counting 0s and 1s
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
            noz++;
        else
            noo++;
    }

    // Filling elements: First 'noz' elements as 0, rest as 1
    for (int i = 0; i < n; i++)
    {
        if (i < noz)
            v[i] = 0;
        else
            v[i] = 1;
    }
}

int main()
{
    vector<int> v = {0, 1, 1, 0, 1, 0, 0, 1}; // Example binary array

    cout << "Before Sorting: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // Sorting the binary array
    sort(v);

    cout << "After Sorting: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
