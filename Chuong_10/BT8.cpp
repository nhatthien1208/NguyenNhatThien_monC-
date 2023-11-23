#include <iostream>
#include <string>
#include <unordered_map>

char kyTuXuatHienThuongXuyenNhat(const std::string& str) {
    std::unordered_map<char, int> frequencyMap;

    for (char c : str) {
        frequencyMap[c]++;
    }

    char mostFrequentChar = '\0';
    int maxFrequency = 0;

    for (const auto& pair : frequencyMap) {
        if (pair.second > maxFrequency) {
            mostFrequentChar = pair.first;
            maxFrequency = pair.second;
        }
    }

    return mostFrequentChar;
}

int main() {
    std::string input;

    std::cout << "Nhập chuỗi: ";
    std::getline(std::cin, input);

    char mostFrequent = kyTuXuatHienThuongXuyenNhat(input);

    if (mostFrequent != '\0') {
        std::cout << "Ký tự xuất hiện thường xuyên nhất: " << mostFrequent << std::endl;
    }
    else {
        std::cout << "Chuỗi không có ký tự nào." << std::endl;
    }

    return 0;
}