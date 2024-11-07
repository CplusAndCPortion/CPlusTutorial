#include <iostream>  // a header file library that will add functionally to the program
// using namespace std; // means we can use names for objects and variables from the standard library

int main(int argc, char const *argv[])
{
    // cout << "Hello C++";  
    /**
     * cout (pronounced as 'see out') is an object used together with the insertion operator
     */
    
    std::cout << "Hello C++";
    std::cout << "\n";
    /**
     * often, you can also ommit 'using namespace std', instead of `std::` to gain the `cout`
     */

    std::cout << 3 * 4;

    // std::cout << 3 * "123"; // this will case error, cuz 操作数无效 invalid operands. 
    return 0;
}

