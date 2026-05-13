#include<iostream>
using namespace std;
#include<vector>
int main() {
    int x;
    cout << "ENTER THE TARGET: ";
    cin >> x;
vector<int> v;
    int n;
    cout << "ENTER THE SIZE: ";
    cin >> n;

   
    
    cout << "ENTER THE ELEMENTS: ";
    for (int i = 0; i < n; i++) { 
        int q;
        cin>>q;
        v.push_back(q);
    }

    
    for (int i = 0; i < v.size() - 2; i++) { 
        for (int j = i + 1; j < v.size()-1; j++) { 
            if (v[i] + v[j] == x) {
                cout << "(" << i << "," << j << ")" << endl;
            }
        }
    }

    return 0;
}