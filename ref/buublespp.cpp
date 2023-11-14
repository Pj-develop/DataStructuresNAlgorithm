#include <iostream>
using namespace std;

void bubble(float arr[], int s) {
    int temp;
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < (s - i - 1); j++) { // Adjusted loop condition
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    float arr[5] = {2, 9, 4, 3, 1};
    int s = 5;

    cout << "Original array: ";
    for (int i = 0; i < s; i++) {
        cout << arr[i] << " ";
    }

    bubble(arr, s);

    cout << "\nSorted array: ";
    for (int i = 0; i < s; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
