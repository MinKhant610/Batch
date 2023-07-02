#include <iostream>
using namespace std;

int main(){
    int i = 1;
    for (i =0; i < 5; i++){
        if (i == 4){
            continue;
        }
        cout << i << endl;
    }
    return 0;
}