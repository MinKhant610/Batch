//
// Created by Min Khant on 7/1/23.
//
#include "iostream"
using namespace std;

int main(){
    //Arithmetic
    int a = 10;
    int b = 5;
    cout << a % b << endl; //modulus
    //Assignment
    int c = 11; // - 10
    c ^= 5 ; // c = c ^ 5; xor = ^ 
    /*
    */
    cout <<" Value of c is :" << c << endl;
    int f =  10;
    f >>= 2; // right shift
    cout << f << endl;
    int z = 10;
    z <<= 2;
    cout << z << endl;
    return 0;
}
