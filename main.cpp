#include <iostream>
#include <chrono>
#include "search_algorithms.h"

int main() {
    const int size = 10000;
    int arr[size];
    for (int i = 0; i < size; ++i) {
        arr[i] = i + 1;
    }

    int key = 5000;

    // Measure time for linear search
    auto start = std::chrono::high_resolution_clock::now();
    bool found = linearSearch(arr, size, key);
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;
    std::cout << "Linear Search - Found: " << found << ", Time: " << duration.count() << " seconds" << std::endl;

    // Measure time for binary search
    start = std::chrono::high_resolution_clock::now();
    found = binarySearch(arr, size, key);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    std::cout << "Binary Search - Found: " << found << ", Time: " << duration.count() << " seconds" << std::endl;

    return 0;
}
