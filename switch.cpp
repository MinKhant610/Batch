#include <iostream>
using namespace std;

int main(){
    char opreator;
    cout << "Enter opreator :";
    cin >> opreator;

    switch (opreator){
        case '+':
        cout << "a is +" << endl;
        break;
        case '-':
        cout << "a is -" << endl;
        break;
        default:
        cout << "None of these" << endl;
        break;
    }
    return 0;
}