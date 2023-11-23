#include <iostream>
#include <string>
#include <cctype>

void capitalizeSentences(char* str) {
    if (str == nullptr)
        return;

    bool capitalizeNext = true;
    for (int i = 0; str[i] != '\0'; i++) {
        if (std::isspace(str[i])) {
            capitalizeNext = true;
        }
        else if (capitalizeNext) {
            str[i] = std::toupper(str[i]);
            capitalizeNext = false;
        }
    }
}

void capitalizeSentences(std::string& str) {
    bool capitalizeNext = true;
    for (char& c : str) {
        if (std::isspace(c)) {
            capitalizeNext = true;
        }
        else if (capitalizeNext) {
            c = std::toupper(c);
            capitalizeNext = false;
        }
    }
}

int main() {
    const int MAX_LENGTH = 100;
    char input[MAX_LENGTH];

    std::cout << "Enter a string: ";
    std::cin.getline(input, MAX_LENGTH);

    capitalizeSentences(input);

    std::cout << "Modified string: " << input << std::endl;

    std::string inputString;
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    capitalizeSentences(inputString);

    std::cout << "Modified string: " << inputString << std::endl;

    return 0;
}