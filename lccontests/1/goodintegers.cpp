#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int>nums;
    int n = 123;

    while (n > 0) {
        int digit = n % 10;   // get last digit
        nums.push_back(digit);
        n = n / 10;           // remove last digit
    }
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }

    return 0;
}