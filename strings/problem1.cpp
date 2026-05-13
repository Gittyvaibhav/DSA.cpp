#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    string s;
    cout << "enter the string : ";
    getline(cin, s);
    
    int count = 0;
    for(int i=1;i<s.length();i++){
        if (s[i-1]!=s[i] && s[i]!= s[i + 1])
        {
            count =count + 1;
        }     
    }
    cout << "the number of times neighbouring character are different : "<< count;
}