#include <iostream>
using namespace std;

int main() {
    int arr[5] = {};
    int length = sizeof(arr) / sizeof(int);

    for (int x = 0; x <=5 ; x++){
        cout << "Enter num : " ;
        cin >> arr[x];
    }

    for (int i = 0; i < length - 2; i++) {
        int temp = arr[i];
        for (int j = i + 1; j < length - 1; j++) {
            for (int k = j + 1; k < length; k++) {
                int temp2 = temp + arr[j] + arr[k];
                if (temp2 == 0) {
                   cout << "Index : "<< i << " " <<  j << " " << k << endl;
                }
            }
        }
    }

    return 0;
}
