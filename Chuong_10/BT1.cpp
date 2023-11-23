#include <iostream>

int getStringLength(const char* str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

int main() {
    char input[100];
    std::cout << "Enter a string: ";
    std::cin.getline(input, 100);
    int length = getStringLength(input);
    std::cout << "Length of the string: " << length << std::endl;
    return 0;
}