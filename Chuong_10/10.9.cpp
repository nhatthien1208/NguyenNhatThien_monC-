#include <iostream>
#include <string>

int main()
{
    const int NAME_LENGTH = 30;
    std::string name1, name2;

    std::cout << "Enter a name (last name first): ";
    std::getline(std::cin, name1);

    std::cout << "Enter another name: ";
    std::getline(std::cin, name2);

    std::cout << "Here are the names sorted alphabetically:\n";

    if (name1 < name2)
        std::cout << name1 << "\n" << name2 << "\n";
    else if (name1 > name2)
        std::cout << name2 << "\n" << name1 << "\n";
    else
        std::cout << "You entered the same name twice!\n";

    return 0;
}