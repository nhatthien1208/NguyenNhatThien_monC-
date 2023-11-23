#include <iostream>
#include <string>

int main()
{
    std::string firstString, secondString;

    std::cout << "Enter a string: ";
    std::getline(std::cin, firstString);

    std::cout << "Enter another string: ";
    std::getline(std::cin, secondString);

    if (firstString == secondString)
        std::cout << "You entered the same string twice.\n";
    else
        std::cout << "The strings are not the same.\n";

    return 0;
}