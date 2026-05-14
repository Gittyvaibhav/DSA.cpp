#include <iostream>
using namespace std;

void greet(string name); 

int main() {
    // ERROR: compiler hasn't seen greet() yet!
    greet("Bob");
}

void greet(string name) {
    cout << "Hello, " << name << endl;
}