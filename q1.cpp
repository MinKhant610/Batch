#include <iostream>
using namespace std;

int main(){
    string usr_input;
    string store;

    cout << "Enter text :";
    cin >> usr_input;

    int str_length = usr_input.length();

    for (int i = str_length - 1 ; i >= 0; i--){
       char temp = usr_input[i];
       store = store + temp;
    }

    string check_palindrome = (store == usr_input) ? "true" : "false";
    
    cout << "Input : " << usr_input << endl;
    cout << "Output : " << check_palindrome << endl;
    cout << "Explanation : " << usr_input << " <> " << store << endl;

    return 0;
}