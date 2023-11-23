#include <iostream>
#include <fstream>
#include <string>

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
    while (std::getline(file, line) && lineCount < 10) {
        std::cout << line << std::endl;
        lineCount++;
    }

    if (lineCount == 10) {
        std::cout << "\nEnd of the file reached after displaying 10 lines.\n";
    }
    else {
        std::cout << "\nEnd of the file reached. Entire file displayed.\n";
    }

    file.close();

    return 0;
}