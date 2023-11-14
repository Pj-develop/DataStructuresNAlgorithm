#include <iostream>
#include <vector>

// Function to merge two sorted arrays
std::vector<int> mergeTwoArrays(const std::vector<int>& arr1, const std::vector<int>& arr2) {
    std::vector<int> mergedArray;
    int i = 0, j = 0;

    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] >= arr2[j]) {
            mergedArray.push_back(arr1[i]);
            ++i;
        } else {
            mergedArray.push_back(arr2[j]);
            ++j;
        }
    }

    while (i < arr1.size()) {
        mergedArray.push_back(arr1[i]);
        ++i;
    }

    while (j < arr2.size()) {
        mergedArray.push_back(arr2[j]);
        ++j;
    }

    return mergedArray;
}

// Function to merge K sorted arrays
std::vector<int> mergeKSortedArrays(const std::vector<std::vector<int>>& arrays, int left, int right) {
    if (left == right) {
        return arrays[left];
    }

    int mid = (left + right) / 2;
    std::vector<int> leftMerged = mergeKSortedArrays(arrays, left, mid);
    std::vector<int> rightMerged = mergeKSortedArrays(arrays, mid + 1, right);

    return mergeTwoArrays(leftMerged, rightMerged);
}

int main() {
    int K;
    std::cin >> K;  // Number of sorted arrays

    std::vector<std::vector<int>> arrays(K);
    for (int i = 0; i < K; ++i) {
        int n;
        std::cin >> n;  // Size of the current array
        arrays[i].resize(n);
        for (int j = 0; j < n; ++j) {
            std::cin >> arrays[i][j];  // Elements of the current array
        }
    }

    // Merge and output the sorted array in descending order
    std::vector<int> result = mergeKSortedArrays(arrays, 0, K - 1);
    for (int i = result.size() - 1; i >= 0; --i) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

