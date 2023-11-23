#include <iostream>
#include <fstream>
#include <string>

void readJoke(const std::string& filename) {
    std::ifstream file(filename);
    if (!file) {
        std::cout << "Error opening file: " << filename << std::endl;
        return;
    }

    std::string line;
    std::cout << "Joke:\n";
    while (std::getline(file, line)) {
        std::cout << line << std::endl;
    }

    file.close();
}

void printPunchline(const std::string& filename) {
    std::ifstream file(filename);
    if (!file) {
        std::cout << "Error opening file: " << filename << std::endl;
        return;
    }

    std::string line;
    std::string punchline;
    while (std::getline(file, line)) {
        if (!line.empty()) {
            punchline = line;
        }
    }

    file.close();

    std::cout << "Punchline:\n" << punchline << std::endl;
}

int main() {
    std::string jokeFilename = "joke.txt";
    std::string punchlineFilename = "punchline.txt";

    readJoke(jokeFilename);
    printPunchline(punchlineFilename);

    return 0;
}