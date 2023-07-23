#include <iostream>
using namespace std;

int main(){
    float first_num, second_num;
    char opreator;

    cout << "Enter first num : ";
    cin >> first_num;
    cout << "Enter operator : ";
    cin >> opreator;
    cout << "Enter second num : ";
    cin >> second_num;

    switch (opreator){
        case '+' :
            cout << "Your answer is : " <<first_num + second_num << endl;
            break;
        case '-' :
            cout <<  "Your answer is : " <<first_num - second_num << endl;;
            break;
        case '*' :
            cout <<  "Your answer is : " << first_num * second_num << endl;;
            break;
        case '/' :
            cout <<  "Your answer is : " << first_num / second_num << endl;
            break;
        default :
            cout << "Not in program" << endl;
            break;
    }
    return 0;
}