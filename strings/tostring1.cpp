#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    int x;
    cout<<"enter a number :";
    cin>>x;
    string s = to_string(x);
    cout<<"number of digits :"<<s.length();

}