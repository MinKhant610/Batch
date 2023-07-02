#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 11;
    int c = 10;

    if (a == b){
        cout << "same" << endl;
    }else if(a == c){
        cout << "same" << endl;
    }else{
        cout << "not equal" << endl;
    }
    return 0;
}