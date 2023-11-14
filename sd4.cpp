#include <iostream>
#include <vector>

int count_elements_less_equal(const std::vector<int> &arr, int key) {
    int left = 0, right = arr.size() - 1;
    int count = 0;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] <= key) {
            count = mid + 1;  // Include the mid element and its left part
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return count;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    int key;
    std::cin >> key;

    int result = count_elements_less_equal(arr, key);
    std::cout << result << std::endl;

    return 0;
}

