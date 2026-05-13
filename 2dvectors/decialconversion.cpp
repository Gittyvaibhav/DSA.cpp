#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"ENTER THE NUMBER OF ELEMENTS : ";
    cin>>n;
    int arr[n];
    cout<<"ENTER ELEMENTS : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"GIVEN ARRAY : "<<" ";
    for(int i=0;i<n;i++){
        cout<<arr[i];
        cout<<" ";
    }
    cout<<endl;
    //binary conversion of array
    int sum=0;
    int x=1;
    for(int i=n-1;i>=0;i--){
        sum+=arr[i]*x;
        x*=2;
    }
    cout<<"THE CONVERSION IS : "<<" ";
    cout<<sum;
}
