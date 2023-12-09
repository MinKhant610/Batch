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

//inheritance 
// extend
class Child : public Parent{
    
};


int main(){
    Child childObj;

    childObj.sayHello();
    childObj.name = "Min Khant";
    childObj.age = 19;

    cout << childObj.name << endl;
    cout << childObj.age << endl;

    return 0;
}