#include <iostream>
using namespace std;

int main () {
    int int_val = 1;
    char var = 'a';
    double double_val = 2.0;
    float float_var = 2.2;
    bool is_true = true;
    const int PI = 3.14;
    /*
    var_test => snake case 
    varTest => camel case 
    allCap => PI => constant value 
    */

    cout << int_val << var << double_val << float_var << endl;
    cout << is_true << endl; 
    
    return 0;
}