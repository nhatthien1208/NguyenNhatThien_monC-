#include <iostream>


int* allocateArray(int size) {
   
    if (size <= 0) {
        return nullptr; 
    }

    
    int* arr = new int[size];

    return arr;
}
void sortArray(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[i]) {
          
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}


double calculateAverage(int* arr, int size) {
    if (size <= 0) {
        return 0.0;  
    }

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return static_cast<double>(sum) / size;  
}

int main() {
    int numScores;

    std::cout << "Nhập số điểm kiểm tra: ";
    std::cin >> numScores;

    int* scores = allocateArray(numScores);

    if (scores == nullptr) {
        std::cout << "Kích thước không hợp lệ!" << std::endl;
        return 0;
    }

    for (int i = 0; i < numScores; i++) {
        std::cout << "Nhập điểm kiểm tra thứ " << i + 1 << ": ";
        std::cin >> scores[i];

        if (scores[i] < 0) {
            std::cout << "Điểm kiểm tra không hợp lệ!" << std::endl;
            delete[] scores;  
            return 0;
        }
    }

    
    sortArray(scores, numScores);

    double average = calculateAverage(scores, numScores);

    std::cout << "Danh sách điểm kiểm tra đã sắp xếp: ";
    for (int i = 0; i < numScores; i++) {
        std::cout << scores[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Điểm trung bình: " << average << std::endl;

    delete[] scores;

    return 0;
}