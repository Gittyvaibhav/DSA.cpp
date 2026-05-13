#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cout << "enter a string s : ";
    getline(cin, s);
    sort(s.begin(), s.end());
    cout << s << endl;

    string t;
    cout << "enter a string t : ";
    getline(cin, t);
    sort(t.begin(), t.end());
    cout << t << endl;

    if (s.length() != t.length())
    {
        cout << "The strings are not anagrams." << endl;
    }
    if (s == t)
    {
        cout << "s and t are anagram";
    }
    else
    {
        cout << "s and t are not anagram";
    }
}
