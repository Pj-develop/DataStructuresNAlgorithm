#include <iostream>
#include <vector>

int main() {
    int n, m;
    std::cin >> n;  // Number of elements in the first array
    std::vector<int> firstArray(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> firstArray[i];  // Quantities of products in the first array
    }

    std::cin >> m;  // Number of elements in the second array
    std::vector<int> secondArray(m);
    for (int i = 0; i < m; ++i) {
        std::cin >> secondArray[i];  // Quantities of products in the second array
    }

    // Calculate the total number of items (sum of quantities)
    int totalItems = 0;
    for (int i = 0; i < n; ++i) {
        totalItems += firstArray[i];
    }
    for (int i = 0; i < m; ++i) {
        totalItems += secondArray[i];
    }

    std::cout << totalItems << std::endl;

    return 0;
}

