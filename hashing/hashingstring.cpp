#include <iostream>
using namespace std;

int main()
{
    string s;
    cout << "enter the string: ";
    cin >> s;

    // precompute
    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a']++;
    }

    int q;
    cout << "enter the number of times you want to know the frequency: ";
    cin >> q;

    while (q--)
    {
        char c;
        cout << "enter the alphabet whose frequency you want to know: ";
        cin >> c;

        // fetch
        cout << hash[c - 'a'] << endl;
    }

    return 0;
}
