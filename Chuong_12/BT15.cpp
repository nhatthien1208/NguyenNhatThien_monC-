#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

double calculateAverageWords(const std::string& text) {
    std::stringstream ss(text);
    std::string sentence;
    int totalWords = 0;
    int sentenceCount = 0;

    while (std::getline(ss, sentence)) {
        std::istringstream iss(sentence);
        std::string word;

        while (iss >> word) {
            totalWords++;
        }

        sentenceCount++;
    }

    if (sentenceCount == 0) {
        return 0.0; // To avoid division by zero
    }

    return static_cast<double>(totalWords) / sentenceCount;
}

int main() {
    const std::string filename = "Chýõng 12/text.txt";

    std::ifstream inFile(filename);
    if (!inFile) {
        std::cout << "Error opening file: " << filename << std::endl;
        return 1;
    }

    std::string line;
    std::string content;

    while (std::getline(inFile, line)) {
        content += line + "\n";
    }

    inFile.close();

    double averageWords = calculateAverageWords(content);
    std::cout << "Average number of words per sentence: " << averageWords << std::endl;

    return 0;
}