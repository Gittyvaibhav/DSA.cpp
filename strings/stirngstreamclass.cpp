#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
int main()
{
    string s;
    cout << "enter a string : ";
    getline(cin, s);
    stringstream ss(s);
    string temp;
    while (ss >> temp)
    {
        cout << temp << endl;
    }
}