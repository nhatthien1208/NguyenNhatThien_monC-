#include <iostream>
#include <cctype>

bool testNum(const std::string& custNum)
{
    // Test the first three characters for alphabetic letters.
    for (int count = 0; count < 3; count++)
    {
        if (!std::isalpha(custNum[count]))
            return false;
    }

    // Test the remaining characters for numeric digits.
    for (int count = 3; count < custNum.length(); count++)
    {
        if (!std::isdigit(custNum[count]))
            return false;
    }

    return true;
}

int main()
{
    const int SIZE = 8;
    char customer[SIZE];

    // Get the customer number.
    std::cout << "Enter a customer number in the form LLLNNNN\n";
    std::cout << "(LLL = letters and NNNN = numbers): ";
    std::cin.getline(customer, SIZE);

    std::string customerNumber(customer);

    // Determine whether it is valid.
    if (testNum(customerNumber))
        std::cout << "That's a valid customer number.\n";
    else
    {
        std::cout << "That is not the proper format of the customer number.\n";
        std::cout << "Here is an example:\n";
        std::cout << "ABC1234\n";
    }

    return 0;
}