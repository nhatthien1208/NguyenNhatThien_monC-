#include <iostream>
#include <fstream>

int main() {
    std::ifstream inputFile("Random.txt");  // Đường dẫn đến tập tin Random.txt

    if (!inputFile) {
        std::cout << "Không thể mở tập tin." << std::endl;
        return 0;
    }

    int number;
    int count = 0;
    int sum = 0;

    while (inputFile >> number) {
        count++;
        sum += number;
    }

    inputFile.close();

    double average = static_cast<double>(sum) / count;

    std::cout << "Số lượng số trong tập tin: " << count << std::endl;
    std::cout << "Tổng của các số trong tập tin: " << sum << std::endl;
    std::cout << "Trung bình của các số trong tập tin: " << average << std::endl;

    return 0;
}