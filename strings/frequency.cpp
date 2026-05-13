#include <iostream>
using namespace std;
#include<vector>
#include <string>
int main()
{
    string s;
    cout << "enter a string : ";
    getline(cin, s);
    cout << s << endl;
    vector<int> arr(26,0);//declaration of vector and Initializes all elements to 0. This array will store the frequency of each letter. 
    for(int i=0;i<s.length();i++){
     char ch=s[i];
     int ascii =(int)ch;//int ascii = (int)ch; gets the ASCII value of the character.
     arr[ascii-97]++;//Since ASCII of 'a' is 97, ascii - 97 gives an index from 0 to 25 (for 'a' to 'z').
    }
    int max =0;//nitializes max to 0, which will store the highest frequency.


    for(int i=0;i<26;i++){
        if(arr[i]>max) max=arr[i];
    }
    for(int i=0;i<26;i++){
        if(arr[i]==max){
            int ascii =i+97;//Converts i back to a character (char ch = (char)(i+97);).
            char ch=(char)ascii;      
                  cout<<ch<<" "<<max<<endl;
        }
    }

}