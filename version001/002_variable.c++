#include <iostream>
#include <string>
using namespace std;

void test001();
void test002();
void test003(); // 类型转换 - 静态另类转换

int main() {
    // cout << "Hello This is variables";
    /**
     * In C++;
     *  There are different types of variables
     *  -   int
     *  -   double
     *  -   char
     *  -   string
     *  -   bool
     */

    // test001();

    // test002();

    test003();

    return 0;
}

void test003() {
    int x = 10;
    float f = static_cast<float>(x);
    cout << "f == " << f << endl;
}

void test002() {
    int x = 5, y = 6 , z = 7;
    cout << "int sum is " << x + y + z;
    // -------
    double a, b ,c ;
    a = b = c = 3.1415926;
    cout << "double sum is " << a + b + c;

}

void test001() {
    int num = 15;
    cout << "num ==" << num << "\n";

    double price = 1.234;
    cout << "price ==" << price << "\n";
    char c_ = 'a';
    cout << "c_ ==" << c_ << "\n";
    string tips = "Hello World, I'm lingxiao";
    cout << "tips ==" << tips << "\n";
    bool flag = true;
    cout << "flag ==" << flag << "\n";
}