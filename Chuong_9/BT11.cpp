#include <iostream>


int* expandArray(const int* arr, int size) {
    int newSize = size * 2;
    int* expandedArray = new int[newSize];

    
    for (int i = 0; i < size; i++) {
        expandedArray[i] = arr[i];
    }

    
    for (int i = size; i < newSize; i++) {
        expandedArray[i] = 0;
    }

    return expandedArray;
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);

    int* expandedArr = expandArray(arr, size);

    std::cout << "Mảng ban đầu: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Mảng mới: ";
    int newSize = size * 2;
    for (int i = 0; i < newSize; i++) {
        std::cout << expandedArr[i] << " ";
    }
    std::cout << std::endl;

    delete[] expandedArr; 

    return 0;
}