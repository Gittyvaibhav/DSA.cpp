#include <iostream>
using namespace std;
int hanoi(int n, char a, char b, char c)
{
    if (n == 0)
        return 0;
    hanoi(n - 1, a, c, b);
    cout << a << "->" << c << endl;
    hanoi(n - 1, b, a, c);
}
int main()
{
    cout << "Enter number of discs : ";
    int n;
    cin >> n;

    cout << hanoi(n, 'A', 'B', 'C');
}