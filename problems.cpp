#include <iostream>
using namespace std;

void pattern(int N)
{
    for(int i = 0; i < N; i++)
    {
        // Print spaces
        for(int j = 0; j < N - i - 1; j++)
        {
            cout << " ";
        }

        // Print stars
        for(int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }

        // Move to next line
        cout << endl;
    }
}

int main()
{
    int N;
    cin >> N;

    pattern(N);

    return 0;
}