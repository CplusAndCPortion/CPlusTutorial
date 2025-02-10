#include <iostream>
#include <string>
using namespace std;

class A {
    public:
        int a_int;
        void a_func();
};

void A::a_func() {
    cout << "a_int " << this->a_int<< "; A function \n";
}

class B {
    public:
        int b_int;
        int c_int;
        void b_func();
        void c_Func();  
};

void B::b_func() {
    cout << "b_int " << this->b_int<< "; B function \n";
}
void B::c_Func() {
    // cout << "B_C_function \n";
    cout << "c_int " << this->c_int<< "; B function \n";
}

class C {
    public:
        int c_int;
        void c_Func();  
};
void C::c_Func() {

    cout << "c_int " << this->c_int<< "; C function \n";

}


class SubClass: public A, public B, public C {

};


int main() {
    SubClass obj;
    obj.a_int = 10;
    obj.a_func();

    /*
    使用下面的属性的时候，会存在 成员属性或者方法 冲突的问题
    */
    // obj.c_int = 20; 
    // obj.c_Func();
    /*
    为了防止上述问题，可以显示指定基类 
     */
    obj.B::c_int = 20;
    obj.B::c_Func();

    obj.C::c_int = 30;
    obj.C::c_Func();

    return 0;
}