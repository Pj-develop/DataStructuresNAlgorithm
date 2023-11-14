#include <iostream>
using namespace std;

class Heap {
public:
    void insert(int arr[], int n) {
        for (int j = 1; j < n; j++) {
        int i = j;
        while (i > 0 && arr[(i - 1) / 2] > arr[i]) {
          swap(arr[i], arr[(i - 1) / 2]);
          i = (i - 1) / 2;
        }
      }
    }
      
      
};

int main() {
     int arr[6] = {8, 3, 5, 2, 0, 8};
     int size = sizeof(arr) / sizeof(arr[0]);
     Heap heap;
     heap.insert(&arr[0], size); // Pass a pointer to the first element of the array
     for (int i = 0; i < size; i++) {
       cout << arr[i] << " ";
      }
      return 0;
        }
        

        
