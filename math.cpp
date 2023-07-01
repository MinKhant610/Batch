#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a = 22;
    int b = 10;
    int c = min(a, b);
    int d = max(a, b);

    cout << "Minimun value is : " << c << endl;
    cout << "Max value is : " << d << endl;

    int x = sqrt(4);
    float float_num = 10.556;
    cout << x << endl;
    cout << round(float_num) << endl;
    cout << log(10) << endl;

    char first = 'a';
    char second = 'c';
    cout << first + second << endl;
    
    return 0;
}