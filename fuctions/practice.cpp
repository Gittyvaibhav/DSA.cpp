#include <iostream>
using namespace std;

void printPositive(int n) {
    if (n <= 0) {
        cout << "Not positive!" << endl;
        return;  // EXIT early — like a "bail out" door
    }
    cout << n << " is positive." << endl;
}
int main(){
    int n;
    cout<<"enter a number";
    
    cin>>n;
    printPositive(n);
    return 0;

}