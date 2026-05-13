#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v; // no need to mention size
    v.push_back(6);
    cout<<v.capacity();
    v.push_back(1);
    cout<<v.capacity();
    v.push_back(9);
    cout<<v.capacity();
   // cout << v[0]<<endl;
    //cout << v[1]<<endl;
    //cout << v[2]<<endl;
}