#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter num : ";
    cin >> num ;
    string check = (num %2 == 0) ? "Even" : "Odd" ;
    cout << check << endl;

    return 0;
}