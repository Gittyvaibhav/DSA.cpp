#include <iostream>
using namespace std;
void removechar(string ans, string orignal,int idx)
{
    if(orignal.length()==idx){
        cout<<ans;
        return;
    }
    char ch=orignal[idx];
    if(ch=='a')removechar(ans,orignal,idx+1);
    else removechar(ans+ch,orignal,idx+1);
}
int main()
{
    string str = "raghav garg";
    removechar( "" ,str,0 );
}
