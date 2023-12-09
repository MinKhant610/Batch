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

class Child : public Parent{
    public :
    void sayHi(){
        cout << "hi" << endl;
    }
};

class GrandChild : public Child{

};


int main(){
    GrandChild  grandChildObj;
    grandChildObj.sayHello();
    grandChildObj.sayHi();

    return 0;
}