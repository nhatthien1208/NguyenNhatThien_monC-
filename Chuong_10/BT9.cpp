#include <iostream>
#include <string>

std::string thayTheSubstring(const std::string& string1, const std::string& string2, const std::string& string3) {
    std::string result = string1;
    std::size_t pos = result.find(string2);

    while (pos != std::string::npos) {
        result.replace(pos, string2.length(), string3);
        pos = result.find(string2, pos + string3.length());
    }

    return result;
}

int main() {
    std::string string1, string2, string3;

    std::cout << "Nhập chuỗi 1: ";
    std::getline(std::cin, string1);

    std::cout << "Nhập chuỗi 2: ";
    std::getline(std::cin, string2);

    std::cout << "Nhập chuỗi 3: ";
    std::getline(std::cin, string3);

    std::string replacedString = thayTheSubstring(string1, string2, string3);

    std::cout << "Chuỗi sau khi thay thế: " << replacedString << std::endl;

    return 0;
}