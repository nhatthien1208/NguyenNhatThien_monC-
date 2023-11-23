#include <iostream>

void reverseString(char* str) {
    if (str == nullptr)
        return;

    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    int start = 0;
    int end = length - 1;

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    const int MAX_LENGTH = 100;
    char input[MAX_LENGTH];

    std::cout << "Enter a string: ";
    std::cin.getline(input, MAX_LENGTH);

    reverseString(input);

    std::cout << "Reversed string: " << input << std::endl;

    return 0;
}