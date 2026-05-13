#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of rows/columns :";
    cin>>n;
    cout<<"enter the elements :";
    int arr1 [n][n]; 
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr1[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n ;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;       

    }
    //rotation
    cout<<"rotated matrix :";
    for(int j=n-1;j=0;j++){
        for(int i=n-1;i=0;i++){
            cout<<arr1[j][i]<<" ";
        }
        cout<<endl;       

    }
}
