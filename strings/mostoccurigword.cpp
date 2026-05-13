#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
int main()
{
    // string leli
    string s;
    cout << "enter a string : ";
    getline(cin, s);

    // string ko stream me store kar diya to avoid spaces as a extra character
    stringstream ss(s);
    string temp;

    // vector mein store karwa liyaa
    vector<string> v;
    while (ss >> temp)
    {
        v.push_back(temp);
    }

    // sort kar diya vector ko
    sort(v.begin(), v.end());

    // max count nikal kon sbse zayada baar aya hai
    int maxcount = 1;
    int count = 1;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] == v[i - 1])
            count++;
        else
            count = 1;
        maxcount = max(maxcount, count);
    }

    // jo word max baar aya hai uske liye loop lagay hai
    count = 1;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] == v[i - 1])
            count++;
        else
            count = 1;
        if (count == maxcount)
        {
            cout << v[i] << " " << maxcount << endl;
        }
    }
}