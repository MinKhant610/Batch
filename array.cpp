#include <iostream>
using namespace std;

int main(){
    int nums[5] = {1, 2, 3, 4, 5};
    // cout << nums[3];

    for (int i = 0; i < 5; i++){
        cout << nums[i] << endl;
    }

    cout << sizeof(nums)/ sizeof(int) << endl;
    return 0;
}