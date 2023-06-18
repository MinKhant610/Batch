#include <iostream>
using namespace std;
// preprocessor 
#define ZERO 0 // global variable 

int main () {
    cout << ZERO << endl;
    short sam = SHRT_MAX; // 32767
    unsigned short su = sam; //0 to 65535

    sam = sam + 1;
    su = su + 1;

    cout << sam << endl;
    cout << su << endl;

    sam = ZERO;
    su = ZERO;
    cout << sam << endl;
    cout << su << endl;

    sam = sam -1;
    su = su - 1;
    cout << sam << endl;
    cout << su << endl;
    return 0;
}
