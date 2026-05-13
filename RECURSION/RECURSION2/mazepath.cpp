#include <iostream>
using namespace std;
int maze(int sr, int sc, int er, int ec)
{
    if (sr > er || sc > ec) // base case: if we go out of bounds
    {
        return 0; // no way to reach the end
    }
    if (sr == er && sc == ec) // base case: if we reach the end
    {
        return 1; // found a way to reach the end
    }
    int rightways = maze(sr, sc + 1, er, ec); // move right
    int downways = maze(sr + 1, sc, er, ec);  // move down
    return rightways + downways;
}
int main()
{
    cout << maze(1, 1, 4, 4); // starting from (1, 1) to (4, 4)
}
// main logic:
// 1. If we go out of bounds, return 0 (no way to reach the end).
// 2. If we reach the end, return 1 (found a way to reach