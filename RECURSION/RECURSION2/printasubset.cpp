#include <iostream>
using namespace std;
void printsub(string ans, string og)
{
    if (og==""){
        cout<<ans<<endl;
        return;
    }
    char ch = og[0];
    printsub(ans + ch, og.substr(1));
    printsub(ans , og.substr(1));
}
int main()
{
    string str = "abc";
    printsub("", str);
}