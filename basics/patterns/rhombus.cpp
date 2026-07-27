#include <iostream>
using namespace std;

int main()
{
    int n = 3;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * n - i - 1; j++)
        {
            if (j < n - i - 1)
                cout << " ";
            else
                cout << "*";
        }

        cout << endl;
    }
}