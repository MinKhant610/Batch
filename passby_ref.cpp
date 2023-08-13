#include "iostream"
using namespace std;

void swap(int &x, int &y){  
    int z = x;
    x = y;
    y = z;
}

int main(){
    // pass by reference
    int first = 10;
    int second = 20;

    cout << "Before swap" << endl;
    cout << first << second << endl;

    swap(first, second);
    cout << "After swap" << endl;
    cout << first << second << endl;
    return 0;
}