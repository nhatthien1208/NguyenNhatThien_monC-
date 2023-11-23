#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main() {
    std::ifstream inputFile("LineUp.txt");  // Đường dẫn đến tập tin LineUp.txt

    if (!inputFile) {
        std::cout << "Không thể mở tập tin." << std::endl;
        return 0;
    }

    std::vector<std::string> names;
    std::string name;

    while (std::getline(inputFile, name)) {
        names.push_back(name);
    }

    inputFile.close();

    std::cout << "Danh sách tên: " << std::endl;
    for (const auto& name : names) {
        std::cout << name << std::endl;
    }

    return 0;
}