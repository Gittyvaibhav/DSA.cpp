#include<iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cout << "enter the string : ";
    getline(cin, s);
    cout<<s<<endl;
    reverse(s.begin(),s.end()-s.size()/2);
    cout<<"reversed : " <<s;
}