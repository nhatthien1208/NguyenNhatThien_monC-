#include <iostream>
#include <fstream>
#include <string>
#include <vector>

const int LINES_TO_DISPLAY = 10;

void displayFileTail(const std::string& filename) {
    std::ifstream file(filename);
    if (!file) {
        std::cout << "Error opening file: " << filename << std::endl;
        return;
    }

    std::vector<std::string> lines;
    std::string line;

    while (std::getline(file, line)) {
        lines.push_back(line);
        if (lines.size() > LINES_TO_DISPLAY) {
            lines.erase(lines.begin());
        }
    }

    file.close();

    std::cout << "File Tail (" << filename << "):\n";
    if (lines.size() < LINES_TO_DISPLAY) {
        std::cout << "The file contains less than " << LINES_TO_DISPLAY << " lines.\n";
    }

    for (const std::string& fileLine : lines) {
        std::cout << fileLine << std::endl;
    }
}

int main() {
    std::string filename;
    std::cout << "Enter the filename: ";
    std::cin >> filename;

    displayFileTail(filename);

    return 0;
}