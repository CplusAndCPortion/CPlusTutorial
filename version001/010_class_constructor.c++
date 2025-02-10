#include <iostream>
#include <string>
using namespace std;

/**
 * Constructors
 *  - Constructor in C++ is automatically called when an obj is created.
 *  - Function name is the same as class Name followed by parentheses(), and no return value
 * 
 * NOTE:
 *  At the end of curly brackets must followd ";" sign.
 */

class MyClass {
    public:
        MyClass() {
            cout << "Constructor Method";
        }
}; // There must be a ";" sign.

/**
 * Constructors can also take parameters to initialize member vars
 */

class MyCar {
    public:
        string brand;
        string model;
        int year;
        MyCar(string x, string y, int z) {
            brand = x;
            model = y;
            year = z;
        }
};

/**
 * Basically, Constructor func can also be put outside of Class just like normal functions
 */

class MyCar_ {
    public:
        string brand;
        string model;
        int year;
        MyCar_(string x, string y, int z); // declaration
};

MyCar_::MyCar_(string x, string y, int z) { // Definition.
    brand = x;
    model = y;
    year = z;
}

int main() {

    MyClass obj; // create an obj ; this will call constructor automatically.

    cout << "\n----seperate------\n";
    MyCar car1("Byd","Tang",2021);
    MyCar car2("BMW","X7",2022);

    cout << car1.brand << " " << car1.model << " " << car1.year << "\n";
    cout << car2.brand << " " << car2.model << " " << car2.year << "\n";
    return 0;
}