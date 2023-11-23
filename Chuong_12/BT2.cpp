#include <iostream>
#include <fstream>
#include <string>

const int LINES_PER_PAGE = 24;

int main() {
    std::string filename;
    std::cout << "Enter the filename: ";
    std::cin >> filename;

    std::ifstream file(filename);
    if (!file) {
        std::cout << "Error opening file.\n";
        return 0;
    }

    std::string line;
    int lineCount = 0;

    std::cout << "\nContent of the file:\n";
    while (std::getline(file, line)) {
        std::cout << line << std::endl;
        lineCount++;

        if (lineCount % LINES_PER_PAGE == 0) {
            std::cout << "Press Enter to continue...";
            std::cin.ignore();
        }
    }

    file.close();

    return 0;
}