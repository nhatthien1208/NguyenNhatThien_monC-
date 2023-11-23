#include <iostream>
#include <fstream>
#include <string>

int main() {
    const int NUM_YEARS = 6;
    int population[NUM_YEARS];

    std::ifstream inputFile("People.txt");

    if (!inputFile) {
        std::cout << "Không thể mở tệp dữ liệu.\n";
        return 1;
    }

    std::cout << "BIỂU ĐỒ TĂNG TRƯỞNG DÂN SỐ PRAIRIEVILLE\n";
    std::cout << "(Mỗi * tương đương với 1.000 người)\n";

    for (int i = 0; i < NUM_YEARS; i++) {
        inputFile >> population[i];
        std::string year = std::to_string(1900 + i * 20);
        std::cout << year << " ";
        for (int j = 0; j < population[i] / 1000; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    inputFile.close();

    return 0;
}