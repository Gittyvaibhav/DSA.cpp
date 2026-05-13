#include <iostream>
using namespace std;
int main()
{
    string s;
    cout << "enter the string : ";
    getline(cin, s);
    int i = 0;
    int count = 0;
    while (s[i] != '\0')
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')

        {
            count++;
        }
        i++;
    }
    cout<<"the number of vowels : ";
    cout << count;
}