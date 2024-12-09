#include <iostream>
#include <string>
using namespace std;

/**
 * Encapsulation: 
 *  - Make sure some "sensitive" data is hidden from users.
 *  - To achieve this, you must declare variables or members as `private` [can not be access form outside of the class]
 * 
 * NOTE:
 *  - if you wanna others to read of modify the private var, you can provide public set and get func.
 * 
 *  -  By default, all members of class are `private` if you do not specify an access specifier.
 */

class Person {
    int age;

    public:
        void setAge(int num);
        int getAge();
};

void Person::setAge(int num) {
    age = num;
}

int Person::getAge() {
    return age;
}

int main() {
    Person p;
    // 'age' is a private member of 'Person'
    // p.age = 10;
    // cout << p.age << "\n";

    p.setAge(18);
    cout << p.getAge() << "\n";
    return 0;
}