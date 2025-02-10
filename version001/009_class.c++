#include <iostream>
#include <string>
using namespace std;

class MyClass { // class 
    public: // Access specifier
        // attributes
        int myNum; 
        string myString;

        /**
         * @brief Construct a new My Class object
         * The Constructor has the same name as the class name, it's always public, and doesn't have any return value.
         */
        MyClass() {
            cout << "Each time you initilize an object, will trigger the Constructor Method" << "\n";
        }

        // outside function
        void outFunc();

        // inside funciton;
        void myMethod() {
            cout << "Hello This is MyClass inside Method" << "\n";
        }
};

void MyClass:: outFunc() { // the scope resolution :: operator,
    cout << "Hello This is MyClass outside function";
}


void test_simple_class();

int main() {
    test_simple_class();
    return 0;
}

void test_simple_class() {
    MyClass myObj; // Create an object of MyClass (this will call the constructor)
    myObj.myNum = 14;
    myObj.myString = "TangYue";
    cout << myObj.myNum << "\n";
    cout << myObj.myString << "\n";


    myObj.outFunc();
    myObj.myMethod();
}