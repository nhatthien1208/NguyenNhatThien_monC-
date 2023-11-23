#include <iostream>
#include <string>
#include <sstream>

int countWords(const char* str) {
    std::istringstream iss(str);
    int count = 0;
    std::string word;
    while (iss >> word) {
        count++;
    }
    return count;
}

int countWords(const std::string& str) {
    std::istringstream iss(str);
    int count = 0;
    std::string word;
    while (iss >> word) {
        count++;
    }
    return count;
}

int main() {
    const int MAX_LENGTH = 100;
    char input[MAX_LENGTH];

    std::cout << "Enter a string: ";
    std::cin.getline(input, MAX_LENGTH);

    int wordCount = countWords(input);
    std::cout << "Number of words: " << wordCount << std::endl;

    std::string inputString;
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    int wordCountString = countWords(inputString);
    std::cout << "Number of words: " << wordCountString << std::endl;

    return 0;
}