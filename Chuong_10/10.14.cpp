#include <iostream>
#include <string>
#include <algorithm>

int countChars(const std::string& str, char ch)
{
    return std::count(str.begin(), str.end(), ch);
}

int main()
{
    const int SIZE = 51; // Array size 
    std::string userString; // To hold a string 
    char letter; // The character to count 

    // Get a string from the user. 
    std::cout << "Enter a string (up to 50 characters): ";
    std::getline(std::cin, userString);

    // Choose a character whose occurrences within the string will be counted. 
    std::cout << "Enter a character and I will tell you how many\n";
    std::cout << "times it appears in the string: ";
    std::cin >> letter;

    // Display the number of times the character appears. 
    std::cout << letter << " appears ";
    std::cout << countChars(userString, letter) << " times.\n";

    return 0;
}