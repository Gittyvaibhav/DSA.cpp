// functions are reusable block of code that perform a specific task. They help to break down a program into smaller, manageable pieces, making it easier to read, maintain, and debug. Functions can take input parameters, perform operations on them, and return a result. In C++, functions are defined using the following syntax:

#include <iostream>
using namespace std;    
// Function declaration
// return_type function_name(parameter_list) {
//     // function body
int add(int a, int b) {
    int c = a + b; // Function definition
    return c;
}
int main() {
    int x = 5;
    int y = 3;
    int sum = add(x, y);      // CALL the function, pass x and y
    cout << sum << endl;      //  Print what came back (8)
    return 0;
}

// call stack: When a function is called, a new frame is created on the call stack to hold the function's parameters, local variables, and return address. When the function finishes executing, its frame is popped off the stack, and control returns to the caller. This allows for nested function calls and recursion.