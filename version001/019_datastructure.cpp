#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <list>


// Reference Link of current section is : https://www.w3schools.com/cpp/cpp_vectors.asp



/**
 * @brief 
 * 1.create vector you must include het header file;
 * 2.there are 2 ways to create vector
 *      - init vector at the time of declaration along with assignment that placing elements in a commoa_seperated list inside curly brackets. NOTE: in this way ,you can not declaration first and then assgin eles with curly brackets, otherwise, an error occured.
 *      - declaration first, and then using func to add or remove ele.
 */
void vector_test();

int main() {
    vector_test();
    return 0;
}

void vector_test() {
    // vector<string> animals = {"cat","dog","pig"}; //当前的c++版本不能满足要求
    vector<string> animals;
    animals.push_back("cat");
    animals.push_back("dog");
    animals.push_back("pit");

    // animals.pop_back();
    animals.erase(animals.begin() + 1);
    for (string ele : animals) {
        cout << ele << "\n";
    }
    
}