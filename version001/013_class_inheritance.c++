#include <iostream>
#include <string>
using namespace std;

/**
 * In C++, It's possible to inherit attributes and members from one class to another.
 * 
 * Group "Inheritance Concepts" into two categories
 *  - Derived class (child) : the class that inherited from other classes.
 *  - Base class: a blueprint for others subclass to inherit.
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

class Car: public Vehical { // Attention: must set `public` prior `Vehical`
// class Car: Vehical { // If not set 'public', will be cause error when you access the member  of base or super class.
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