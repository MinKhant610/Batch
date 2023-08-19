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

    mystructure2.name = "Kyaw Kyaw";
    mystructure2.age = 19;

    cout << myStructure.name << endl;
    cout << myStructure.age << endl;
    
    return 0;
}