#include <iostream>
#include <string>
using namespace std;

// Like other program language, Exception in c++ consits of three part: try, throw, catch.

int main() {

    int age = 17;

    try {
        if (age >= 18)
        {
            cout << "age is meet requirment\n";
        } else {
            throw(age);
        }
    } catch (int age) { // you can handle any error type if you set the parameter to '...'
        cout << age << " is invalid\n";
    }
    

    return 0;
}