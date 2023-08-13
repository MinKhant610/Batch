#include "iostream"
using namespace std;

int main(){
    int a;
    int* b;
    int** c;

    a = 10;
    b = &a;
    c = &b;

    cout << a << endl;
    cout << *b << endl;
    cout << **c << endl;

    return 0;
}