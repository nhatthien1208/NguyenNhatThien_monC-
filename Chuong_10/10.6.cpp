#include <iostream>
#include <cstring>

int main()
{
    const int NUM_PRODS = 5;
    const int LENGTH = 27;

    char products[NUM_PRODS][LENGTH] =
    {
        "TV327 31-inch Television",
        "CD257 CD Player",
        "TA677 Answering Machine",
        "CS109 Car Stereo",
        "PC955 Personal Computer"
    };

    char lookUp[LENGTH];

    std::cout << "\tProduct Database\n\n";
    std::cout << "Enter a product number to search for: ";
    std::cin.getline(lookUp, LENGTH);

    char* strPtr = nullptr;
    int index;

    for (index = 0; index < NUM_PRODS; index++)
    {
        strPtr = std::strstr(products[index], lookUp);
        if (strPtr != nullptr)
            break;
    }

    if (strPtr != nullptr)
        std::cout << products[index] << std::endl;
    else
        std::cout << "No matching product was found.\n";

    return 0;
}