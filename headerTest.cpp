#include <iostream>
#include "myheader.h"
using namespace std;

int main(){
    Myclass myobj;
    int result = myobj.addFun(2,3);
    cout << result << endl;

    cout << multiplyFun(2, 3) << endl;
}