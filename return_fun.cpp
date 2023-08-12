#include <iostream>
using namespace std;

string add(string x, string y){
    return x + y;
}


int main(){
    string result = add("Min", "Khant");
    cout << result << endl;
    return 0;
}