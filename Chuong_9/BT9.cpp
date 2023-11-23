#include <iostream>
#include <utility>

std::pair<double, double> findMedian(const int* arr, int size) {
    int midIndex = size / 2;
    double median1 = arr[midIndex];

    if (size % 2 == 0) {
        double median2 = arr[midIndex - 1];
        return std::make_pair((median1 + median2) / 2, (median1 + median2) / 2);
    }
    else {
        return std::make_pair(median1, median1);
    }
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5, 6 };
    int size = sizeof(arr) / sizeof(arr[0]);

    std::pair<double, double> median = findMedian(arr, size);

    std::cout << "Giá trị trung vị của mảng là: " << median.first;
    if (median.first != median.second) {
        std::cout << " và " << median.second;
    }
    std::cout << std::endl;

    return 0;
}