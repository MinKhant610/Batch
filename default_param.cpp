#include <iostream>
using namespace std;

//data_type name () {}
//             param1    param2
void yourName(string name, int age = 19);

int main(){
    yourName("Min Khant");
    return 0;
}

void yourName(string name, int age){
    cout << "Your name is " << name << endl;
    cout << "Your age is " << age << endl;
}