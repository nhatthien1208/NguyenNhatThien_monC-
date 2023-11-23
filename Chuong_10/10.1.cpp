#include <iostream>
#include <cctype>

int main()
{
    char input;

    std::cout << "Enter any character: ";
    std::cin.get(input);

    if (std::cin.fail()) {
        std::cout << "Invalid input. Exiting program." << std::endl;
        return 1;
    }

    std::cout << "The character you entered is: " << input << std::endl;

    if (std::isalpha(input))
        std::cout << "That's an alphabetic character." << std::endl;
    if (std::isdigit(input))
        std::cout << "That's a numeric digit." << std::endl;
    if (std::islower(input))
        std::cout << "The letter you entered is lowercase." << std::endl;
    if (std::isupper(input))
        std::cout << "The letter you entered is uppercase." << std::endl;
    if (std::isspace(input))
        std::cout << "That's a whitespace character." << std::endl;

    return 0;
}