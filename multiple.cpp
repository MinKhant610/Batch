#include <iostream>
using namespace std;

class Parent{
    public:
    int age;
    string name;

    void sayHello(){
        cout << "Hello I am sayHello Function" << endl;
    }
};


class Child {
    public :
    void childFun(){
        cout << "I am child fun" << endl;
    }
};

class GrandChild : public Parent, public Child{

};


int main(){
    GrandChild grandChildObj;
    grandChildObj.childFun();
    grandChildObj.sayHello();
    
    return 0;
}