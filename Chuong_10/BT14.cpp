#include <iostream>
#include <fstream>
#include <cctype>

void analyzeFile(const std::string& filePath) {
    int uppercaseCount = 0;
    int lowercaseCount = 0;
    int digitCount = 0;

    std::ifstream file(filePath);
    if (file.is_open()) {
        char c;
        while (file.get(c)) {
            if (std::isupper(c)) {
                uppercaseCount++;
            }
            else if (std::islower(c)) {
                lowercaseCount++;
            }
            else if (std::isdigit(c)) {
                digitCount++;
            }
        }
        file.close();
        std::cout << "Số chữ in hoa trong tệp: " << uppercaseCount << std::endl;
        std::cout << "Số chữ thường trong tệp: " << lowercaseCount << std::endl;
        std::cout << "Số chữ số trong tệp: " << digitCount << std::endl;
    }
    else {
        std::cout << "Không thể mở tệp." << std::endl;
    }
}

int main() {
    std::string filePath = "Chương 10/text.txt";
    analyzeFile(filePath);
    return 0;
}