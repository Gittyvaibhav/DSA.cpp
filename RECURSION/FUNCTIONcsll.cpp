#include <iostream>
using namespace std;
void fun(){
    cout<<"hello chutiya"<<endl;
}
void gun (){
    cout<<"hello chaman"<<endl;
    fun();
}
int main()
{
    gun();
 return 0; // return means end of the program
}