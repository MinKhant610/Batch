#include <iostream>
using namespace std;

int main(){
    int a = 10;
    // tenary opreator 
    string check = (a == 10) ? "equal" : "not equal";
    cout << check << endl;

    int arr[4] = {1, 2, 3, 4};
    // for each loop
    /*
    for loop
    while loop
    do while loop
    for in loop
    for each loop
    */
   // for each loop
   for (int i : arr){
    cout << i << endl;
   }
    int b = 10;
    
    // do while loop
    do{
        cout << "a is equal " << endl;
    }while (b == 11);
    
    for (int i = 4; i > -1; i--){
        cout << arr[i] << endl;
    }
    
    return 0;
}