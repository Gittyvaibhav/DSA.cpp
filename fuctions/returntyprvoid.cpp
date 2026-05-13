//void functions are functions that do not return a value. They are declared with the return type 'void' and can be used to perform actions without providing any output.
#include <iostream>
using namespace std;

void greet() {
    cout << "Hello, World!" << endl;
}

int main() {
    greet(); // Function call
    return 0;
}

//return type functions are functions that return a value. They are declared with a specific return type (e.g., int, double, string) and must include a return statement that provides a value of the specified type.
#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {
    int x = 5;
    int y = 3;
    int sum = add(x, y);      // CALL the function, pass x and y
    cout << sum << endl;      // Print what came back (8)
    return 0;
}
