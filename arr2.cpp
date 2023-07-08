#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    arr[0] = 2;
    // cout << arr[0] << endl;

// multi dimension array
    string letters[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};

cout << letters[1][2] << endl;

    return 0;
}