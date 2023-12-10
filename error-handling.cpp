#include <iostream>
using namespace std;

int main(){
    int age = 17;

    try{
        if (age < 18){
            throw 404;
        }
        cout << "Welcome" << endl;
    }catch(int error){
        cout << "Error  " << error << endl;
        cout << "Age must be greter 18" << endl;
    }

    return 0;
}