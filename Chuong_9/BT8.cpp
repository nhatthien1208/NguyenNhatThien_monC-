#include <iostream>
#include <unordered_map>


int findMode(const int* arr, int size) {
    std::unordered_map<int, int> frequencyMap;

   
    for (int i = 0; i < size; i++) {
        frequencyMap[arr[i]]++;
    }

    int mode = -1; 
    int maxFrequency = 0; 

    
    for (auto it = frequencyMap.begin(); it != frequencyMap.end(); it++) {
        if (it->second > maxFrequency) {
            mode = it->first;
            maxFrequency = it->second;
        }
    }

    return mode;
}

int main() {
    int arr[] = { 1, 2, 3, 2, 3, 3, 4, 4, 4, 4 };
    int size = sizeof(arr) / sizeof(arr[0]);

    int mode = findMode(arr, size);

    if (mode != -1) {
        std::cout << "Chế độ của mảng là: " << mode << std::endl;
    }
    else {
        std::cout << "Mảng không có chế độ." << std::endl;
    }

    return 0;
}