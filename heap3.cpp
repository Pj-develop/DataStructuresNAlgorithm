#include <iostream>
using namespace std;

struct Location {
    int distance;
};

void swap(Location& a, Location& b) {
    Location temp = a;
    a = b;
    b = temp;
}

void insertLocation(Location heap[], int& heapSize, Location newLocation) {
    if (heapSize < 100) {
        heap[heapSize] = newLocation;
        int currentIndex = heapSize;

        while (currentIndex > 0 && heap[currentIndex].distance < heap[(currentIndex - 1) / 2].distance) {
            swap(heap[currentIndex], heap[(currentIndex - 1) / 2]);
            currentIndex = (currentIndex - 1) / 2;
        }

        heapSize++;
    } else {
        cout << "Heap is full. Cannot insert more locations." << endl;
    }
}

void printHeap(Location heap[], int heapSize) {
    for (int i = 0; i < heapSize; i++) {
        cout << heap[i].distance << " ";
    }
    cout << endl;
}

int main() {
    Location minHeap[100];
    int heapSize = 0;

    while (true) {
        Location newLocation;
        if (!(cin >> newLocation.distance)) {
            break;
        }

        insertLocation(minHeap, heapSize, newLocation);
    }

    printHeap(minHeap, heapSize);

    return 0;
}
