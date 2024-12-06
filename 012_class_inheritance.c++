#include <iostream>
#include <string>
using namespace std;

/**
 * In C++, It's possible to inherit attributes and members from one class to another.
 * 
 * Group "Inheritance Concepts" into two categories
 *  - Derived class (child) : 
 *  - Base class
 * 
 */

class Vehical {
    public:
        string brand;
        void honk();
};

void Vehical::honk() {
    cout << this->brand <<"is Honking \n";
}

class Car: public Vehical {
    public:
        string model;
        void honk() {
            Vehical::honk(); // super action
            cout << this-> brand << "_" << model <<" _ is Honking \n";
        }
};

int main() {
    Car car;
    car.brand = "Forld";
    car.model = "X3";
    car.honk();
    return 0;
}