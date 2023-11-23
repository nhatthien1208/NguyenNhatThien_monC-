#include <iostream>
#include <iomanip>
#include <cmath>


double calculateMean(const int* arr, int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}


double calculateMedian(const int* arr, int size) {
    int* sortedArr = new int[size];
    for (int i = 0; i < size; i++) {
        sortedArr[i] = arr[i];
    }

   
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (sortedArr[i] > sortedArr[j]) {
                int temp = sortedArr[i];
                sortedArr[i] = sortedArr[j];
                sortedArr[j] = temp;
            }
        }
    }

    double median;
    if (size % 2 == 0) {
        median = (sortedArr[size / 2 - 1] + sortedArr[size / 2]) / 2.0;
    }
    else {
        median = sortedArr[size / 2];
    }

    delete[] sortedArr;
    return median;
}


int calculateMode(const int* arr, int size) {
    int mode = arr[0];
    int maxCount = 0;
    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            mode = arr[i];
        }
    }
    return mode;
}

int main() {
    int numStudents;

    std::cout << "Nhập số lượng học sinh được khảo sát: ";
    std::cin >> numStudents;

  
    while (numStudents <= 0) {
        std::cout << "Số lượng học sinh không hợp lệ. Vui lòng nhập lại: ";
        std::cin >> numStudents;
    }

    int* moviesWatched = new int[numStudents];

    
    for (int i = 0; i < numStudents; i++) {
        std::cout << "Nhập số phim đã xem của học sinh " << i + 1 << ": ";
        std::cin >> moviesWatched[i];

    
        while (moviesWatched[i] < 0) {
            std::cout << "Số phim không hợp lệ. Vui lòng nhập lại: ";
            std::cin >> moviesWatched[i];
        }
    }

    double mean = calculateMean(moviesWatched, numStudents);
    double median = calculateMedian(moviesWatched, numStudents);
    int mode = calculateMode(moviesWatched, numStudents);

    std::cout << "Thống kê số lượng phim đã xem:" << std::endl;
    std::cout << "Giá trị trung bình: " << std::fixed << std::setprecision(2) << mean << std::endl;
    std::cout << "Giá trị trung vị: " << median << std::endl;
    std::cout << "Giá trị mốt: " << mode << std::endl;

    delete[] moviesWatched;

    return 0;
}