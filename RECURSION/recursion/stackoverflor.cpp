#include <iostream>
using namespace std;
//stack overflow occurs when a program uses more stack memory than is allocated. This can happen due to deep or infinite recursion, where a function calls itself repeatedly without a base case to stop the calls. Each function call uses some of the stack memory, and if there are too many calls, it can exceed the stack limit, leading to a stack overflow error.
//Example of stack overflow due to infinite recursion
void recursiveFunction() {
    cout<<"1"<<endl;
    recursiveFunction();
}
int main() {
    recursiveFunction(); // This will cause a stack overflow
    return 0;
}