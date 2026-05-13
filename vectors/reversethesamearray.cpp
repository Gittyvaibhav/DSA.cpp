#include <iostream>
#include <vector>
using namespace std;

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
    for (int i = 0, j = v1.size() - 1; i <= j; i++, j--)
    {
        int temp = v1[i];
        v1[i] = v1[j];
        v1[j] = temp;
    }

    // Display the reversed vector
    cout << "REVERSED ELEMENTS: ";
    display(v1);
}