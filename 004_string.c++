#include <string>
#include <iostream>
using namespace std;

/**
 * @brief concate individual strings.
 * 
 * @return string 
 */
string concate_string();

/**
 * @brief calculate the string length
 * 
 * @param str 
 * @return int 
 */
int calculate_string_length(string str);

/**
 * @brief access string using index, and will return 'char' type that part of the string
 * 
 * @param str 
 * @param str_index 
 * @return char 
 */
char access_string(string str, int str_index);

/**
 * @brief using the built-in function 'at' to access the char at special position. this is an alias of string[index]
 * 
 * @param str 
 * @param str_index 
 * @return char 
 */
char using_at_access_str(string str, int str_index);

/**
 * @brief escape characters
 * 
 */
void sepcial_characters();

/**
 * @brief C++ is an extension of C,so c style string is also avaiable.
 * 
 */
void using_c_style_string();

int main() {
    string name = concate_string();
    calculate_string_length(name);
    char ele = access_string(name, 4);
    using_at_access_str(name,5);
    using_at_access_str(name,6);
    sepcial_characters();
    using_c_style_string();
    return 0;
}

void using_c_style_string() {
    cout << "\n";
    string _c_plus = "Hello_C++";
    char c[] = "Hello_C";
    cout << _c_plus;
    cout << "\n";
    cout << c;
}

void sepcial_characters() {
    cout << "\n";
    string txt = "We are the so-called \"Vikings\" from the north.";
    cout << txt;

}

char using_at_access_str(string str, int str_index) {
    char ele = str.at(str_index);
    cout << "at str_index == " << str_index << " is " << ele << "\n";
    return ele;
}

char access_string(string str, int str_index) {
    if (str.length() > 0)
    {
        char ele = str[str_index];
        cout << "str_index == " << str_index << " is " << ele << "\n";
        return ele;
    }
    return 'a';
}

int calculate_string_length(string str) {
    int len = str.length();
    int alias_len = str.size();
    /**
     * the function length and size are all the same.
     */
    cout << "str's length is " << len << "\n";
    cout << "str's size is " << alias_len << "\n";
    return len;
}

string concate_string(){
    string firstName = "dai";
    string lastName = "lingxiao";
    string gap = " ";

    cout << "type _1 \n";
    cout << firstName + gap + lastName << "\n";

    cout << "type _2 \n";
    string name = firstName.append(gap).append(lastName);
    cout << name;

    return name;


}