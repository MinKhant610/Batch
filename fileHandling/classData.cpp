#include <iostream>
#include <fstream>
using namespace std;

// user input data
void dataInput(string name, string major, int roll_number, int phone_number){
    ofstream TuData("tuData.txt", ios::app);
    TuData << "Name : " << name << endl;
    TuData << "Major :" << major << endl;
    TuData << "Roll Num : " << roll_number << endl;
    TuData << "Phone Num : " << phone_number << endl;
    TuData << "-------------------------------------" << endl;
}

int main(){
    //create data file to store user data
    ofstream TuData("tuData.txt", ios::app);

    string name, major;
    int roll_number, phone_number;

    //number of student in class
    int number_of_student;
    cout << "Enter number of student in your class :";
    cin >> number_of_student;

    // get student data
    for (int i = 0; i < number_of_student; i++){
        cout << "Enter your name (no space allow): ";
        cin >> name;
        cout << "Enter your major : ";
        cin >> major;
        cout << "Enter your roll number : ";
        cin >> roll_number;
        cout << "Enter your phone number : ";
        cin >> phone_number;
        cout << endl;

        dataInput(name, major, roll_number, phone_number);
        cout << "Data store successfully" << endl;
        TuData.close();
    }


    return 0;
}