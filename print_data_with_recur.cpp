#include <iostream>
using namespace std;

void printData(int arr[], int size, int index) {
    if (index >= size) {
        return;
    }
    cout << arr[index] << " ";
    printData(arr, size, index + 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array elements: ";
    printData(arr, size, 0);

    return 0;
}

