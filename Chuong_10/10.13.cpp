#include <iostream>
#include <string>

void nameSlice(std::string& userName)
{
    size_t spacePos = userName.find(' ');
    if (spacePos != std::string::npos)
    {
        userName.resize(spacePos);
    }
}

int main()
{
    const int SIZE = 41; // Array size 
    std::string name; // To hold the user's name 

    std::cout << "Enter your first and last names, separated by a space:\n";
    std::getline(std::cin, name);
    nameSlice(name);
    std::cout << "Your first name is: " << name << std::endl;

    return 0;
}