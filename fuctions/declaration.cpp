// Concept Explanation
// This is where many beginners get confused. Let's untangle it completely.
// Declaration — Tells the compiler "this function EXISTS with this signature." No body.
// Definition — The full function with its body (the actual implementation).
// Prototype — Another name for a forward declaration (declaration before the definition).
// Why Do We Need Declarations?
// C++ compilers read your code top to bottom. If you call a function before defining it, the compiler panics: "I've never heard of this function!"
// By declaring the function first, you assure the compiler that "Hey, this function is coming later, just trust me!" This allows you to organize your code more flexibly, especially in larger projects where functions might call each other in a complex web.
// Example of Declaration and Definition
#include <iostream>
using namespace std;

// Function declaration (forward declaration)
int add(int a, int b);

int main() {
    int x = 5;
    int y = 3;
    int sum = add(x, y);      // CALL the function, pass x and y
    cout << sum << endl;      // Print what came back (8)
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}
