#include <iostream>
#include <fstream>
#include <string>

const int LINES_PER_PAGE = 24;

void displayFileContent(const std::string& filename) {
    std::ifstream file(filename);
    if (!file) {
        std::cout << "Error opening file: " << filename << std::endl;
        return;
    }

    std::string line;
    int lineNumber = 1;
    int linesDisplayed = 0;

    while (std::getline(file, line)) {
        std::cout << lineNumber << ":" << line << std::endl;
        lineNumber++;
        linesDisplayed++;

        if (linesDisplayed == LINES_PER_PAGE) {
            std::cout << "Press Enter to continue...";
            std::cin.ignore();
            linesDisplayed = 0;
        }
    }

    file.close();
}

int main() {
    std::string filename;
    std::cout << "Enter the filename: ";
    std::getline(std::cin, filename);

    displayFileContent(filename);

    return 0;
}