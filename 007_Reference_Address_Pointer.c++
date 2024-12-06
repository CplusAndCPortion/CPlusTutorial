#include <iostream>
#include <string>
using namespace std;

/*
    # Reference
        A reference variable is a "reference" to an existing variable, creating with `&` operator.

        Personal Understanding:
            Review the reference concept, means reference var and exsiting var holding the same address which store assigned value.

    # Address
        When a variable is created in C++, a memory address is assigned to the value. This Address store the value which assgins to the variable.

        Tips:
            `&`
                - precede "=" sign gonna to create reference variable.
                - follow  "=" sign gonna to gain the variable address.

    # Pointer
        A pointer is a variable that stores the memory address as its value. this part is the same as C

        NOTE:
            - The type of the pointer has to match the type of the variable.
            - Modify the pointer value will also change the value of the original variable.

        Tips:
            `*`
                - precede "=" sign means to declare a pointer variable;
                - only precede var(no type at first) means dereference, that will gain the value which stored by the address.
 */

/**
 * @brief In this fuc, we can see the distinction between reference var and existing var.
 * 
 */
void reference_test();
void execute_reference_test1();


void memory_address_test();

void pointer_test();

/**
 * @brief Modify the pointer value(at this point, we reffer to change the value which the pointer points to) will also change the value of the original variable.
 * 
 */
void modify_pointers();

int main() {
    // reference_test();
    // execute_reference_test1();
    memory_address_test();
    // pointer_test();
    // modify_pointers();
    return 0;
}
void modify_pointers() {
    string food = "Pizza";
    string * ptr = &food;
    cout << "food_address == " << &food << "\n"; // food_address == 0x7ff7b5cff7f8

    *ptr = "Nuddles";
    cout << "food == " << food << "\n"; // food == Nuddles
    cout << "*ptr == " << *ptr << "\n"; // *ptr == Nuddles
    cout << "ptr == " << ptr << "\n"; // ptr == 0x7ff7b5cff7f8

}

void pointer_test() {
    string food = "Pizza";
    string * food_ptr = &food;
    cout << "&food == " << &food << "\n";
    cout << "food_ptr == " << food_ptr << "\n";
    /*
    &food == 0x7ff7b82147f8
    food_ptr == 0x7ff7b82147f8
    */

    // to access the pointer stored value, need to dereference.
    cout << "food_ptr_value == " << *food_ptr << "\n";
    // food_ptr_value == Pizza
}

void memory_address_test() {
    string food = "Pizza";
    string *ptr = &food;
    cout << &food << "\n"; 
    cout << ptr << "\n";
}

void reference_test1_(string &str) {
    str += " Reference";
}

void reference_test2_(int num[5]) {
    num[3] = 9090;
}

void execute_reference_test1() {
    string tip = "Hello";
    reference_test1_(tip);
    cout << "tip == " << tip << "\n";

    int num[5] = {1,2,3,4,5};
    cout << "num[3] == " << num[3] << "\n";;
    reference_test2_(num); // this func take array reference. so array ele will be change if you modify array ele in func.
    cout << "num[3] == " << num[3] << "\n";;
}



void reference_test() {
    string food = "pizza";
    string &meal = food;
    string food_c = food;
    cout << "food == " << food << "\n";
    cout << "meal == " << meal << "\n";
    cout << "food_c == " << food_c << "\n";

    food = "Berge";
    cout << "food == " << food << "\n";
    cout << "meal == " << meal << "\n";
    cout << "food_c == " << food_c << "\n";

    /**
    Following are outputs:
        food == pizza
        meal == pizza
        food_c == pizza
        food == Berge
        meal == Berge
        food_c == pizza
     */
}