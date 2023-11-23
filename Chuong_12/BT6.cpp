#include <iostream>
#include <fstream>
#include <string>

int searchAndCountOccurrences(const std::string& filename, const std::string& searchString) {
    std::ifstream file(filename);
    if (!file) {
        std::cout << "Error opening file: " << filename << std::endl;
        return 0;
    }

    std::string line;
    int occurrenceCount = 0;

    while (std::getline(file, line)) {
        if (line.find(searchString) != std::string::npos) {
            std::cout << line << std::endl;
            occurrenceCount++;
        }
    }

    file.close();

    return occurrenceCount;
}

int main() {
    std::string filename;
    std::cout << "Enter the filename: ";
    std::getline(std::cin, filename);

    std::string searchString;
    std::cout << "Enter the string to search: ";
    std::getline(std::cin, searchString);

    int count = searchAndCountOccurrences(filename, searchString);

    std::cout << "Total occurrences of '" << searchString << "' in the file: " << count << std::endl;

    return 0;
}