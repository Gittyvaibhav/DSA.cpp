#include <iostream>
using namespace std;

bool palindromeString(string s, int start, int end)
{
    // Base condition
    if (start >= end)
    {
        return true;
    }

    // If characters don't match
    if (s[start] != s[end])
    {
        return false;
    }

    // Recursive call
    return palindromeString(s, start + 1, end - 1);
}

int main()
{
    string s;

    cout << "ENTER THE STRING: ";
    cin >> s;

    int n = s.length();

    if (palindromeString(s, 0, n - 1))
    {
        cout << "Palindrome String";
    }
    else
    {
        cout << "Not a Palindrome String";
    }

    return 0;
}