#include <iostream>
#include <string>

int main() {
    std::string input;

    std::cout << "Nhập dãy số: ";
    std::getline(std::cin, input);

    int sum = 0;
    int highestDigit = -1;
    int lowestDigit = 10;

    for (char c : input) {
        if (std::isdigit(c)) {
            int digit = c - '0';
            sum += digit;

            if (digit > highestDigit)
                highestDigit = digit;

            if (digit < lowestDigit)
                lowestDigit = digit;
        }
    }

    std::cout << "Tổng các chữ số: " << sum << std::endl;
    std::cout << "Chữ số cao nhất: " << highestDigit << std::endl;
    std::cout << "Chữ số thấp nhất: " << lowestDigit << std::endl;

    return 0;
}