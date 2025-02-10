#include <iostream>
#include <string>
using namespace std;

/**
 * A class can also be derived from other class which is already derived frome another class.
 * That denotes that subsub calss can inherit sub class, and sub class inherited from base class.
 */

class Animal {
    public:
        int age;
        string name;
        void eat();
};

void Animal::eat() {
    
    cout << this->name << " is eating, and age is " << this->age <<" years old \n";
}

class Dog: public Animal {};

class LittleDog: public Dog {};

class MaleDog: public LittleDog {};

int main() {

    Dog dog;
    dog.age = 3;
    dog.name = "BaseDog";
    dog.eat();

    LittleDog littleDog;
    dog.age = 1;
    dog.name = "LittleDog";
    dog.eat();

    MaleDog maleDog;
    dog.age = 2;
    dog.name = "MaleDog";
    dog.eat();
 

    return 0;
}