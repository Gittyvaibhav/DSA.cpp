#include <iostream>
using namespace std;
void linearly(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << i << " ";
    linearly(i + 1, n);
}

void descending(int i ,int n){
    if(n<i){
        return;
    }
    cout<<n<<" ";
    descending(i,n-1);
}
int main()
{
    int n;
    cout<<"enter a number:";
    cin >> n;
    linearly(1, n);
    cout<<endl;
    descending(1,n);
}