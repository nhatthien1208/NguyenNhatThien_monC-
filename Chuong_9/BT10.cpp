#include <iostream>
int* reverseArray(const int* arr, int size) {
    int* reversedArray = new int[size];

    for (int i = 0; i < size; i++) {
        reversedArray[i] = arr[size - 1 - i];
    }

    return reversedArray;
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);

    int* reversedArr = reverseArray(arr, size);

    std::cout << "Mảng ban đầu: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Mảng đảo ngược: ";
    for (int i = 0; i < size; i++) {
        std::cout << reversedArr[i] << " ";
    }
    std::cout << std::endl;

    delete[] reversedArr; 

    return 0;
}