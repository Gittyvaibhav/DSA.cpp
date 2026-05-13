#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &a) {
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void ReversePart(int i, int j, vector<int> &nums) {
    while (i <= j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
        i++;
        j--;
    }
}

int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    v.push_back(7);
    v.push_back(4);
    v.push_back(8);
    display(v);

    int k = 3;
   
    int n = 7;
    rotate(0,n- k - 1, nums);
    rotate(n - k, n - 1, nums);
   rotate(0, n - 1, nums);
    
    display(v);
}
