#include <iostream>
using namespace std;
void fun(){
    cout<<"hello chutiya"<<endl;
    fun();// This line will cause infinite recursion
       
}
int main()
{
    fun();
 return 0; // return means end of the program
}
