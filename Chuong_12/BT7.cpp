#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

std::string capitalizeFirstLetter(const std::string& sentence) {
    std::string modifiedSentence = sentence;
    if (!modifiedSentence.empty()) {
        modifiedSentence[0] = std::toupper(modifiedSentence[0]);
        for (int i = 1; i < modifiedSentence.length(); i++) {
            modifiedSentence[i] = std::tolower(modifiedSentence[i]);
        }
    }
    return modifiedSentence;
}

void filterSentences(const std::string& inputFile, const std::string& outputFile) {
    std::ifstream input(inputFile);
    if (!input) {
        std::cout << "Error opening input file: " << inputFile << std::endl;
        return;
    }

    std::ofstream output(outputFile);
    if (!output) {
        std::cout << "Error opening output file: " << outputFile << std::endl;
        input.close();
        return;
    }

    std::string sentence;
    while (std::getline(input, sentence, '.')) {
        std::string modifiedSentence = capitalizeFirstLetter(sentence);
        output << modifiedSentence << "." << std::endl;
    }

    input.close();
    output.close();

    std::cout << "Filtered sentences saved to: " << outputFile << std::endl;
}

int main() {
    std::string inputFile, outputFile;

    std::cout << "Enter the input filename: ";
    std::getline(std::cin, inputFile);

    std::cout << "Enter the output filename: ";
    std::getline(std::cin, outputFile);

    filterSentences(inputFile, outputFile);

    return 0;
}