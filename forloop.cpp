#include <iostream>
using namespace std;

int main(){
    int a = 1;
    for (int i = 0; i <= 5; i++){
        a = i + a;
        cout << "hello" << endl;
        cout << a << endl;
    }
    
    return 0;
}