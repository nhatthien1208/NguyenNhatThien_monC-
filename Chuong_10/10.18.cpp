#include <iostream>
#include <string>

int main()
{
    std::string name1, name2;

    // Get a name.
    std::cout << "Enter a name (last name first): ";
    std::getline(std::cin, name1);

    // Get another name.
    std::cout << "Enter another name: ";
    std::getline(std::cin, name2);

    // Display them in alphabetical order.
    std::cout << "Here are the names sorted alphabetically:\n";
    if (name1 < name2)
        std::cout << name1 << std::endl << name2 << std::endl;
    else if (name1 > name2)
        std::cout << name2 << std::endl << name1 << std::endl;
    else
        std::cout << "You entered the same name twice!\n";

    return 0;
}