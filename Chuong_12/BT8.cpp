#include <iostream>
#include <fstream>

void arrayToFile(const std::string& filename, const int* array, int size) {
    std::ofstream file(filename, std::ios::binary);
    if (!file) {
        std::cout << "Error opening file: " << filename << std::endl;
        return;
    }

    file.write(reinterpret_cast<const char*>(array), size * sizeof(int));

    file.close();

    std::cout << "Array written to file: " << filename << std::endl;
}

void fileToArray(const std::string& filename, int* array, int size) {
    std::ifstream file(filename, std::ios::binary);
    if (!file) {
        std::cout << "Error opening file: " << filename << std::endl;
        return;
    }

    file.read(reinterpret_cast<char*>(array), size * sizeof(int));

    file.close();

    std::cout << "Array read from file: " << filename << std::endl;
}

int main() {
    const std::string filename = "array.bin";
    const int arraySize = 5;
    int array[arraySize] = { 1, 2, 3, 4, 5 };

    // Write array to file
    arrayToFile(filename, array, arraySize);

    // Read array from file
    int newArray[arraySize];
    fileToArray(filename, newArray, arraySize);

    // Display the content of the array
    std::cout << "Array content: ";
    for (int i = 0; i < arraySize; i++) {
        std::cout << newArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}