#include <iostream>
using namespace std;
#include<string>
int main()
{
    string s;
    cout << "enter a string : ";
    getline(cin, s);
    int i = 0;
    while (s[i] != '\0')
    {

        if (i % 2 != 0)
        {
            s[i] = 'a';
        }
        i++;
    }
    cout << "motified string : " << s;
}