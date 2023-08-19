#include <iostream>
#include <cmath>
using namespace std;

void myPow(int base, int power){
    int start_point = 0;
    int power_value = 1;
    while(start_point != power){
        power_value = base * power_value;
        start_point ++;
    }
    cout << power_value << endl;
}

int main(){
    cout << pow(12, 3) << endl; // cmath => pow function
    myPow(12, 3); // own function
    return 0;
}