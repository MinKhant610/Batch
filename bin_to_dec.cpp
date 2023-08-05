#include <iostream>
#include <cmath>
using namespace std;

int main(){
    string num;
    int decimal = 0;
    cout << "Enter binary num :";
    cin >> num;
    int len = num.length();
    for (int i = 0; i < len; i++){
        if (num[i] == '1'){
            decimal += pow(2, len - 1 - i);
        }
    }
    cout << "Decimal num : " << decimal;
}