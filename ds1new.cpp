#include <iostream>
#include <algorithm>

using namespace std;

const int MAX_SIZE = 100;

void merge_arrays(int stock[], int cart[], int n, int m) {
  int merged_array[MAX_SIZE];
  int i = 0, j = 0, k = 0;

  // Iterate through the two arrays, comparing the elements at each index.
  while (i < n && j < m) {
    if (stock[i] < cart[j]) {
      merged_array[k++] = stock[i++];
    } else {
      merged_array[k++] = cart[j++];
    }
  }

  // Add the remaining elements from the first array, if any.
  while (i < n) {
    merged_array[k++] = stock[i++];
  }

  // Add the remaining elements from the second array, if any.
  while (j < m) {
    merged_array[k++] = cart[j++];
  }

  // Sort the merged array.
  sort(merged_array, merged_array + k);

  // Print the merged array.
  for (i = 0; i < k; i++) {
    cout << merged_array[i] << " ";
  }
  cout << endl;
}

int main() {
  int n, m;
  int stock[MAX_SIZE], cart[MAX_SIZE];

  // Get the size of the first array.
  cin >> n;

  // Get the elements of the first array.
  for (int i = 0; i < n; i++) {
    cin >> stock[i];
  }

  // Get the size of the second array.
  cin >> m;

  // Get the elements of the second array.
  for (int i = 0; i < m; i++) {
    cin >> cart[i];
  }

  // Merge the two arrays.
  merge_arrays(stock, cart, n, m);

  return 0;
}

