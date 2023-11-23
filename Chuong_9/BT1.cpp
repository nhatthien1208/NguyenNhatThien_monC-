#include <iostream>

int* allocateArray(int size) {
    
    int* arr = new int[size];

    return arr;
}

int main() {
    int n;

    std::cout << "Nhập số phần tử của mảng: ";
    std::cin >> n;

    
    int* dynamicArray = allocateArray(n);

    for (int i = 0; i < n; i++) {
        dynamicArray[i] = i + 1;  
    }

    std::cout << "Các phần tử của mảng là: ";
    for (int i = 0; i < n; i++) {
        std::cout << dynamicArray[i] << " ";
    }
    std::cout << std::endl;

    delete[] dynamicArray;

    return 0;
}