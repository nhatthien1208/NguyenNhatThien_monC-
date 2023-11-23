#include <iostream>
#include <string>
#include <iomanip>

int main()
{
    const double A_PRICE = 249.0;
    const double B_PRICE = 299.0;

    const std::string PART_NUM_A = "S147-29A";
    const std::string PART_NUM_B = "S147-29B";

    std::string partNum;

    std::cout << "The stereo part numbers are:\n"
        << "\tBoom Box, part number S147-29A\n"
        << "\tShelf Model, part number S147-29B\n"
        << "Enter the part number of the stereo you\n"
        << "wish to purchase: ";

    std::cin >> partNum;

    std::cout << std::showpoint << std::fixed << std::setprecision(2);

    if (partNum == PART_NUM_A)
        std::cout << "The price is $" << A_PRICE << std::endl;
    else if (partNum == PART_NUM_B)
        std::cout << "The price is $" << B_PRICE << std::endl;
    else
        std::cout << partNum << " is not a valid part number.\n";

    return 0;
}