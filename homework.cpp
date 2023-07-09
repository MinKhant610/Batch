#include <iostream>
using namespace std;

int main(){
    string org_name = "Min Khant";
    string org_pass = "12345";
    string name, pass;
    int forgot_time = 0;

    while (org_name != name || org_pass != pass){

        if (forgot_time == 3){
            cout << "Wait 30 seconds" << endl;
            break;
        }

        cout << "Enter your name :";
        getline(cin, name);
        cout << "Enter your pass :";
        getline(cin, pass);

        if (org_name == name && org_pass == pass){
            cout << "Access Granted" << endl;
        }else {
            cout << "Please check your username or password" << endl;
            forgot_time++;
        }
    }
    return 0;
}