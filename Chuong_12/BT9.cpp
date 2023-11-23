#include <iostream>
#include <fstream>

void encodeFile(const std::string& inputFile, const std::string& outputFile) {
    std::ifstream inFile(inputFile, std::ios::binary);
    if (!inFile) {
        std::cout << "Error opening input file: " << inputFile << std::endl;
        return;
    }

    std::ofstream outFile(outputFile, std::ios::binary);
    if (!outFile) {
        std::cout << "Error opening output file: " << outputFile << std::endl;
        return;
    }

    char ch;
    while (inFile.get(ch)) {
        ch += 10; 
        outFile.put(ch);
    }

    inFile.close();
    outFile.close();

    std::cout << "File encoded successfully." << std::endl;
}

int main() {
    const std::string inputFile = "input.txt";
    const std::string outputFile = "encoded.txt";

    encodeFile(inputFile, outputFile);

    return 0;
}