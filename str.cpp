#include <iostream>
using namespace std;

int main(){
    string name = "Min Khant";
    cout << name << endl;
    cout << name.length();
    string first = "min ";
    string mid = "khant ";
    string last = "aung";
    string full_name = first + mid;
    cout << full_name << endl;

    string temp_name = first.append(mid);
    cout << temp_name.append(last) << endl;
    string name2 = "Hello";
    cout << name2[0] << endl;

    return 0;
}