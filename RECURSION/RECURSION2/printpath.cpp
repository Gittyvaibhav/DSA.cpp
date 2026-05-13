#include <iostream>
using namespace std;

// Function to count number of ways to reach from (sr, sc) to (er, ec)
int maze(int sr, int sc, int er, int ec)
{
    if (sr > er || sc > ec) // Out of bounds
        return 0;

    if (sr == er && sc == ec) // Destination reached
        return 1;

    // Move right and down
    int rightways = maze(sr, sc + 1, er, ec);
    int downways = maze(sr + 1, sc, er, ec);

    return rightways + downways;
}

// Function to print all paths from (sr, sc) to (er, ec)
void printpath(int sr, int sc, int er, int ec, string s)
{
    if (sr > er || sc > ec) // Out of bounds
        return;

    if (sr == er && sc == ec) // Destination reached
    {
        cout << s << endl;
        return;
    }

    // Move right and down
    printpath(sr, sc + 1, er, ec, s + 'R');
    printpath(sr + 1, sc, er, ec, s + 'D');
}

int main()
{
    cout << "Total ways: " << maze(1, 1, 4, 4) << endl;
    cout << "Paths:" << endl;
    printpath(1, 1, 4, 4, "");
    return 0;
}
