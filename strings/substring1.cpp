#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter the string :";
    getline(cin,s);
    cout<<"the requires substring is : "<<s.substr(s.length()/2,s.length());

}