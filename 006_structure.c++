#include <iostream>
#include <string>
using namespace std;

/**
 * Structures is a way to group several related variables into one place.
 * Each variable in structure is known as the member of the structure.
 * 
 * Structure can contain many different data types.(int, string, array...)
 * 
 * There are two ways to creat a struct, one is with named struct, other not.
 */

/**
 * @brief without name struct. declare struct and struct variable directly.
 * 
 */
void basic_definition();

/**
 * @brief with name struct. declare a named structure. The name is the type of struct.
 * 
 */
void basic_name_struct();

void combination_condition();

int main() {
    // basic_definition();
    // basic_name_struct();
    combination_condition();
    return 0;
}

struct Combination{
    string prefix;
    string suffix;
};

void generateCombinations() {
    
}



void combination_condition() {
    
    
}

void basic_name_struct() {
    struct MyStruct
    {
        int myNum;
        string myString;
    };

    MyStruct myStruct1, myStruct2, myStruct3;

    // MyStruct myStruct1;
    myStruct1.myNum = 1234;
    myStruct1.myString = "Hello Named Struct1";

    // MyStruct myStruct2;
    myStruct2.myNum = 2345;
    myStruct2.myString = "Hello Named Struct2";

    // MyStruct myStruct3;
    myStruct3.myNum = 3456;
    myStruct3.myString = "Hello Named Struct3";

    cout << "myNum1 == " << myStruct1.myNum << "\n";
    cout << "myString1 == " << myStruct1.myString << "\n";

    cout << "myNum2 == " << myStruct2.myNum << "\n";
    cout << "myString2 == " << myStruct2.myString << "\n";

    cout << "myNum3 == " << myStruct3.myNum << "\n";
    cout << "myString3 == " << myStruct3.myString << "\n";
    
}

void basic_definition() {
    struct {
        int myNum;
        string myString;
    } myStructure;

    /*
    variableType is :  
        ``` 
            struct {
                int myNum;
                string myString;
            }
        ```
    variable name is `myStructure`;

    There can also have several variable names with the same type
    */

    myStructure.myNum = 1234;
    myStructure.myString = "Hello Struct";
    cout << "myNum == " << myStructure.myNum << "\n";
    cout << "myString == " << myStructure.myString << "\n";

    cout << "---------------------------------\n";

    struct {
        int myNum;
        string myString;
    } myStruct1, myStruct2, myStruct3;

    myStruct1.myNum = 1234;
    myStruct1.myString = "Hello Struct1";

    myStruct2.myNum = 2345;
    myStruct2.myString = "Hello Struct2";

    myStruct3.myNum = 3456;
    myStruct3.myString = "Hello Struct3";

    cout << "myNum1 == " << myStruct1.myNum << "\n";
    cout << "myString1 == " << myStruct1.myString << "\n";

    cout << "myNum2 == " << myStruct2.myNum << "\n";
    cout << "myString2 == " << myStruct2.myString << "\n";

    cout << "myNum3 == " << myStruct3.myNum << "\n";
    cout << "myString3 == " << myStruct3.myString << "\n";

}