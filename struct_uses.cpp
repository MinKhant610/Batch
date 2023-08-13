#include "iostream"
using namespace std;

struct{
    string name;
    string major;
    int roll_number;
}student[3];


int main(){
    for (int i = 0; i < 3; i++){
        cout << "Enter your name : ";
        cin >> student[i].name;
        cout << "Enter your major : ";
        cin >> student[i].major;
        cout << "Enter your roll number :";
        cin >> student[i].roll_number;
    }

    for (int i = 0; i < 3; i++){
        cout << student[i].name << endl;
        cout << student[i].major << endl;
        cout << student[i].roll_number << endl;
    }

    return 0;
}