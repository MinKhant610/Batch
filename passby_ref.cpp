#include <iostream>
using namespace std;

int swap (int &x, int &y){
    int z = x;
    x = y;
    y = z;
}

int main(){
    int first = 10;
    int second = 20;

    cout << first << second << endl;

    swap (first, second);
    cout << first << second << endl;
}