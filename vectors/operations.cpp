#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v; // no need to mention size
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(11);
    v.push_back(1);
    v.push_back(9);

    v.push_back(9);
    cout << v.size()<<endl;
    cout << v.capacity();
}