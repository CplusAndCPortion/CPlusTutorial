#include <iostream>
#include <string>
using namespace std;
/**
 * In C++, there has a function overloading that same as swift.
 * NOTE:
 *  The different of parameters including name, type can result in function overloading.
 *  Only different of return type can not result in funciton overloading.
 */

int sum(int x, int y);
int sum(int x);
double sum(double x, double y);
void fun_overloading();

/**
 * - Recursive Function Execution Flow:
 *      1. Push Stack:  When a function is called, it is pushed onto the stack.
 *          - in this phase, will create a stack frame containing function's params, function's address, and local variables.
 *      
 *      2. Execution:   When a function is executed, it will read variable and temporary values on that stack frame to invoke some certain operations.
 * 
 *      3. Pop Stack.   When a function is done, the stack frame will be poped and return the position and state on what it invoked originally.
 * 
 * 
 * NOTE:
 *  Must be attention, there is an explicity termination sign when execute funcion recursive.
 * 
 */
void recursion_test();

int main() {
    
    // fun_overloading();

    recursion_test();

    return 0;
}

void fun_overloading() {
    int r1 = sum(1,2);
    double r2 = sum(1.1, 2.2);
    int r3 = sum(3);
    cout << "r1 == " << r1 << "\n";
    cout << "r2 == " << r2 << "\n";
    cout << "r3 == " << r3 << "\n";
}

int sum(int x, int y) {
    return (x + y);
}


double sum(double x, double y){
    return (x + y);
}

int sum(int x) {
    return (x * 10);
}

// ------------

int recursive_(int num) {

    // let's check the params address.

    // cout << "inner num address == " << &num << "\n";

    if (num > 0){
        return num + recursive_(num - 1);
    } else {
        return num;
    }
    
}

void recursion_test() {
    int sum = recursive_(5);
    cout << sum << "\n";
}