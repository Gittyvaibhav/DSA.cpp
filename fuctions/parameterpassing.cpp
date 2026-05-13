#include <iostream>
using namespace std;
// Parameter Passing in C++
// In C++, you can pass parameters to functions in three main ways: by value, by reference, and by pointer. Each method has its own implications on how the function interacts with the arguments passed to it.
// 1. Pass by Value
// When you pass a parameter by value, a copy of the argument is made and passed to the function. This means that any changes made to the parameter inside the function do not affect the original argument outside the function.
void passByValue(int x) {
    x = x + 10; // Modifying the parameter does not affect the original argument
}
// 2. Pass by Reference
// When you pass a parameter by reference, you pass the actual variable itself, allowing the function to modify the original argument. This is done using the reference operator (&).
void passByReference(int &x) {
    x = x + 10; // Modifying the parameter affects the original argument
}
// 3. Pass by Pointer
// When you pass a parameter by pointer, you pass the address of the variable. The function can then dereference the pointer to modify the original argument.
void passByPointer(int *x) {
    *x = *x + 10; // Modifying the parameter affects the original argument
}
int main() {
    int a = 5;
    int b = 5;
    int c = 5;

    passByValue(a);
    cout << "After pass by value: " << a << endl; // Output: 5

    passByReference(b);
    cout << "After pass by reference: " << b << endl; // Output: 15

    passByPointer(&c);
    cout << "After pass by pointer: " << c << endl; // Output: 15

    return 0;
}