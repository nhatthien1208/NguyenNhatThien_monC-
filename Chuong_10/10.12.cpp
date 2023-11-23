#include <iostream>
#include <string>

void stringCopy(const std::string& string1, std::string& string2)
{
    string2 = string1;
}

int main()
{
    const int LENGTH = 30; // Size of the arrays 
    std::string first; // To hold the user's input 
    std::string second; // To hold the copy 

    // Get a string from the user and store in first. 
    std::cout << "Enter a string with no more than "
        << (LENGTH - 1) << " characters:\n";
    std::getline(std::cin, first);

    // Copy the contents of first to second. 
    stringCopy(first, second);

    // Display the copy. 
    std::cout << "The string you entered is:\n" << second << std::endl;

    return 0;
}