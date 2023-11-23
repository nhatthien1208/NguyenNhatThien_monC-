#include <iostream>
#include <string>

// Function prototype
void dollarFormat(std::string&);

int main()
{
    std::string input;

    // Get the dollar amount from the user.
    std::cout << "Enter a dollar amount in the form nnnnn.nn : ";
    std::cin >> input;
    dollarFormat(input);
    std::cout << "Here is the amount formatted:\n";
    std::cout << input << std::endl;
    return 0;
}

// Definition of the dollarFormat function
void dollarFormat(std::string& currency)
{
    int dp = currency.find('.'); // Find decimal point
    if (dp > 3) // Insert commas
    {
        for (int x = dp - 3; x > 0; x -= 3)
        {
            currency.insert(x, ",");
        }
    }
    currency.insert(0, "$"); // Insert dollar sign
}