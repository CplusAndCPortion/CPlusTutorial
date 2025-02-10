#include <iostream>
#include <string>
using namespace std;

/**
 * NOTE:
 *  Access Specifier indicate us how to access the member or attributes or functions of class.
 * In C++, there are three access specifiers:
 *      - public: members are accessible from outside the class.
 *      - private:  memebers can not be accessed from outside the class.
 *      - protected:   memebers can not be accessed from outside the class.however, they can be accessed in inherited classes.
 * 
 * By Default, all members of class are private.
 */

class MyClass {
    public:
        int x;

    private:
        int y;

    protected:
        int z;
};


int main(int argc, char * argv[]) {
    cout << "hello c++";
    MyClass myObj;
    myObj.x = 13; 
    // myObj.y = 14; // 成员 "MyClass::y" 不可访问
    // myObj.z = 15; // 成员 "MyClass::z" 不可访问
    return 0;
}
