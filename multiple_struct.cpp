#include "iostream"
using namespace std;

struct {
    string name;
    int age;
}myStructure, mystructure2;


int main(){
    myStructure.name = "MinKhant";
    myStructure.age = 19;

    cout << myStructure.name << endl;
    cout << myStructure.age << endl;

    myStructure.name = "Kyaw Kyaw";
    myStructure.age = 19;

    cout << myStructure.name << endl;
    cout << myStructure.age << endl;
    
    return 0;
}