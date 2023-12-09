#include <iostream>
using namespace std;

class Myclass{
    public :
    Myclass(string name, int age){ // constructor
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }

};

int main(){
    Myclass myObj("Min Khant", 19);
}