#include <iostream>

int* shiftElements(const int* arr, int size) {
    int newSize = size + 1;
    int* shiftedArray = new int[newSize];

    shiftedArray[0] = 0; 

    for (int i = 0; i < size; i++) {
        shiftedArray[i + 1] = arr[i];
    }

    return shiftedArray;
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);

    int* shiftedArr = shiftElements(arr, size);

    std::cout << "Mảng ban đầu: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Mảng mới: ";
    int newSize = size + 1;
    for (int i = 0; i < newSize; i++) {
        std::cout << shiftedArr[i] << " ";
    }
    std::cout << std::endl;

    delete[] shiftedArr; 

    return 0;
}