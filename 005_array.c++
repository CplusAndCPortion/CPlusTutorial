#include <iostream>
#include <vector>
#include <string>
using namespace std;


/**
 * @brief Array Definitions
 */
void arrary_definition();

/**
 * @brief loop an array via for loop
 * the are two for format for iterating the entire array. one is for, and other is for-in
 */
void loop_array();

/**
 * @brief omit the array size, implicit to dictate size
 * 
 */
void omit_array_size();

/*
    NOTE: In C++ Array, The Array size is fixed when you define, it means that is immultable. (the index of ele can be changed,but the size is fixed)

    BUT,If you want to make array multable, we can take `vector` library to do that.
 */
/**
 * change array via vector lib.
 */
void basic_vector_array();

void get_array_size();

/**
 * @brief The Element of an array is another array. In simple, Array contains another array.
 * Tips:
 *  - The first_dimensional's size can be omit, but others not.
 */
void multi_dimensional_array();

int main() {
    // arrary_definition();
    // loop_array();
    // omit_array_size();
    // basic_vector_array();
    get_array_size();
    // multi_dimensional_array();
    return 0;
}

void multi_dimensional_array() {
    /*
    下面两种写法等价
    */
    // int num[][4] = {
    int num[2][4] = { 

        {1,2,3},
        {4,5,6,7}
    };

    cout << num[0][1] << "\n";
}

void get_array_size() {
    string cars[] = {"Volvojkklalkdfssdfds", "BMW", "Ford"};
    cout << sizeof(string) << "\n";  // string may occupy 24 bytes in c++, it actually is a class.

    cout << sizeof(cars) << "\n";
    cout << sizeof(cars[0]) << "\n";
    cout << sizeof(cars[1]) << "\n";
    cout << sizeof(cars[2]) << "\n";

    int num_count = sizeof(cars) / sizeof(cars[0]);
    cout << "num_count == " << num_count << "\n";
}

void basic_vector_array() {
    // A vector with 3 elements
    // Waring: Can not find the reason that initialize the `vector<string> cars` success, using assignment directly.
    // vector<string> cars = {"Volvo", "BMW", "Ford"};


    vector<string> cars;
    cars.push_back("Volvo");
    cars.push_back("BMW");
    cars.push_back("Ford");

    // Adding another element to the vector
    cars.push_back("Tesla");
    for (string ele : cars)
    {
        cout << ele << ";\n";
    }
}

void omit_array_size() {
    string cars[] = {"Volvo", "BMW", "Ford"}; // Three array elements
    for (string ele : cars)
    {
        cout << ele << "\n";
    }
}

void loop_array() {
    
    cout << "------begin------\n";

    // string name[3] = {"xiao","ling","dai"};
    string name[] = {"xiao","ling","dai"};
    // type: `for conventional` format
    for (int i = 0; i < 3; i++)
    {
        cout << name[i] << "\n";
    }

    cout << "------separate line------\n";
    // type: `for in` format
    for (string ele : name)
    {
        cout << ele << "\n";
    }

    cout << "------end------\n";
}

void arrary_definition() {
    /**
     * arrays are used to store multiple values in a single variable.
     * 
     * to define an array, the first thing you do is declare the variable type
     */
    /*
    string car[4]; // declare an array with 4 size.
    car = {"Byd","Benzi","BMW","Audi"};
    NOTE:
        there will be cause error if you declare variable first and then assginment later.
    */
    string car[4] = {"Byd","Benzi","BMW","Audi"};
    cout << car << "\n";
    cout << car[0] << "\n";
    cout << car[1] << "\n";
    cout << car[2] << "\n";
    cout << car[3] << "\n";

    string an_cars[5];
    an_cars[0] = "Volvo";
    an_cars[1] = "BMW";
    an_cars[2] = "Ford";
    an_cars[3] = "Mazda";
    an_cars[4] = "Tesla";
    an_cars[4] = "XiaoMi";

    cout << an_cars << "\n";
    cout << an_cars[0] << "\n";
    cout << an_cars[1] << "\n";
    cout << an_cars[2] << "\n";
    cout << an_cars[3] << "\n";
    cout << an_cars[4] << "\n";
}