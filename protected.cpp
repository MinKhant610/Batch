#include <iostream>
using namespace std;

class Parent{
    public:
    int age;
    string name;

    void sayHello(){
        cout << "Hello I am sayHello Function" << endl;
    }

    protected :
    int roll;
};

class Child : public Parent{
    public :
    void setRoll(int roll){
        this->roll = roll;
    }

    void getRoll(){
        cout << this->roll;
    }
};

int main(){
    Child childObj;
    childObj.setRoll(10);
    childObj.getRoll();
    return 0;
}