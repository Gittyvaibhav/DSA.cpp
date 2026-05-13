//recursion as for-loop
#include <iostream>
using namespace std;
void fun(int n){//formal argument
    if(n==0){
        return; // base case to stop recursion
    }
    cout<<"hello chaman"<<endl;
    fun(n-1);
       
}
int main()
{
    fun(3);//actual argument
 
}