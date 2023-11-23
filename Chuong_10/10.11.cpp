#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

int main()
{
    const int INPUT_SIZE = 81; // Size of input array 
    const int NAME_SIZE = 30; // Size of name array 
    char input[INPUT_SIZE]; // To hold a line of input 
    char name[NAME_SIZE]; // To hold a name 
    int idNumber; // To hold an ID number 
    int age; // To hold an age 
    double income; // To hold income

    // Get the user's ID number. 
    std::cout << "What is your ID number? ";
    std::cin.getline(input, INPUT_SIZE); // Read as a string 
    idNumber = std::atoi(input); // Convert to int 

    // Get the user's name. No conversion necessary. 
    std::cout << "What is your name? ";
    std::cin.getline(name, NAME_SIZE);

    // Get the user's age. 
    std::cout << "How old are you? ";
    std::cin.getline(input, INPUT_SIZE); // Read as a string 
    age = std::atoi(input); // Convert to int 

    // Get the user's income. 
    std::cout << "What is your annual income? ";
    std::cin.getline(input, INPUT_SIZE); // Read as a string 
    income = std::atof(input); // Convert to double 

    // Show the resulting data. 
    std::cout << std::setprecision(2) << std::fixed << std::showpoint;
    std::cout << "Your name is " << name
        << ", you are " << age
        << " years old,\nand you make $"
        << income << " per year.\n";

    return 0;
}