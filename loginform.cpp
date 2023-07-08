#include <iostream>
using namespace std;

int main(){
    string org_name= "MinKhant";
    int org_pass= 1234;

    string name;
    int pass;

    while (org_name != name && org_pass != pass){
        cout << "Enter your name :";
        cin >> name;

        cout << "Enter your pass :";
        cin >> pass;

        if (org_name == name && org_pass == pass){
            cout << "Access granted" << endl;
        }else {
            cout << "Access denied" << endl;
        }

    }

    return 0;
}