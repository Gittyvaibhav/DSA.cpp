#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter the number of rows :";
    cin>>n;
    cout<<"enter the number of columns :";
    cin>>m;
    cout<<"enter the elements :";
    int arr1 [n][m]; 
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr1[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;       

    }
    //taking transpose of the matrix
int arr2[m][n];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        arr2[j][i]=arr1[i][j];
    }
}
cout<<"transposed matrix :\n";
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<arr2[i][j]<<" ";
    }
    cout<<endl; 

}
}