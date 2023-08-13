#include "iostream"
using namespace std;

struct Data{
    string name;
    int age;
};


int main(){
    Data data1;
    data1.name = "MinKhant";
    data1.age = 19;

    cout << data1.name << endl;
    cout << data1.age << endl;

    Data data2;
    data2.name = "Kyaw Kyaw";
    data2.age = 19;

    cout << data2.name << endl;
    cout << data2.age << endl;
    
    return 0;
}