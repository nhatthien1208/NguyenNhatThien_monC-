#include <iostream>
#include <string>
#include <algorithm>

int main() {
    const int MAX_LENGTH = 100;

    char firstName[MAX_LENGTH];
    char middleName[MAX_LENGTH];
    char lastName[MAX_LENGTH];
    char sortedName[MAX_LENGTH];

    std::cout << "Enter your first name: ";
    std::cin.getline(firstName, MAX_LENGTH);

    std::cout << "Enter your middle name: ";
    std::cin.getline(middleName, MAX_LENGTH);

    std::cout << "Enter your last name: ";
    std::cin.getline(lastName, MAX_LENGTH);

    
    std::string fullName = std::string(lastName) + ", " + std::string(firstName) + " " + std::string(middleName);

    
    std::copy(fullName.begin(), fullName.end(), sortedName);
    sortedName[fullName.length()] = '\0';

    std::cout << "Sorted name: " << sortedName << std::endl;

    return 0;
}