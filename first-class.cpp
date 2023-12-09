#include <iostream>
using namespace std;

//OOP => Object Orient Programming

class Myclass{
    public:
    int age;
    string name;

};

int main(){
    Myclass myObj;
    myObj.name = "Min Khant";
    myObj.age = 19;

    cout << myObj.name << endl;
    cout << myObj.age << endl;

    Myclass myObj2;
    myObj2.name = "Htun Kyaw";
    myObj2.age = 20;

    cout << myObj2.name << endl;
    cout << myObj2.age << endl;

    return 0;
}