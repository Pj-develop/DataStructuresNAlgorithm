#include <iostream>

using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void selectionSortDescending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }
        if (maxIndex != i) {
            swap(arr[i], arr[maxIndex]);
        }

        cout<<"After his step: "<<i+1<<"\n";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;

    int films[n];
    for (int i = 0; i < n; i++) {
        cin >> films[i];
    }

    selectionSortDescending(films, n);

    cout<<"Finally, got it\n";
        for (int k = 0; k < n; k++) {
            cout << films[k] << " ";
        }

    return 0;
}
