#include "iostream"
using namespace std;

int main(){
    string food = "Pizza";
    string &meal = food; // reference
    string food2 = food;

    cout << food << endl;
    cout << meal << endl;
    cout << food2 << endl;

    return 0;
}