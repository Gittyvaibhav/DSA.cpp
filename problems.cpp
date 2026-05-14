#include <iostream>
using namespace std;
void name(int i,int n){
    if(i>n){
        return;
    }
    cout<<"Vaibhav"<<" ";
    name(i+1,n);
}
int main(){
    int n;
    cout<<"Enter the number of times you want to print the name: ";
    cin>>n;
    name(1,n);
    
}