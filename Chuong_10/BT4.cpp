#include <iostream>
#include <string>
#include <sstream>

void countWordsAndAvgLetters(const char* str, int& wordCount, double& avgLetters) {
    std::istringstream iss(str);
    wordCount = 0;
    avgLetters = 0.0;
    std::string word;
    while (iss >> word) {
        wordCount++;
        avgLetters += word.length();
    }
    if (wordCount > 0) {
        avgLetters /= wordCount;
    }
}

void countWordsAndAvgLetters(const std::string& str, int& wordCount, double& avgLetters) {
    std::istringstream iss(str);
    wordCount = 0;
    avgLetters = 0.0;
    std::string word;
    while (iss >> word) {
        wordCount++;
        avgLetters += word.length();
    }
    if (wordCount > 0) {
        avgLetters /= wordCount;
    }
}

int main() {
    const int MAX_LENGTH = 100;
    char input[MAX_LENGTH];

    std::cout << "Enter a string: ";
    std::cin.getline(input, MAX_LENGTH);

    int wordCount;
    double avgLetters;
    countWordsAndAvgLetters(input, wordCount, avgLetters);
    std::cout << "Number of words: " << wordCount << std::endl;
    std::cout << "Average letters per word: " << avgLetters << std::endl;

    std::string inputString;
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    int wordCountString;
    double avgLettersString;
    countWordsAndAvgLetters(inputString, wordCountString, avgLettersString);
    std::cout << "Number of words: " << wordCountString << std::endl;
    std::cout << "Average letters per word: " << avgLettersString << std::endl;

    return 0;
}