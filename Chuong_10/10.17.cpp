#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    const double APRICE = 249.0; // Price for part A
    const double BPRICE = 299.0; // Price for part B
    std::string partNum; // Part number

    std::cout << "The stereo part numbers are:\n";
    std::cout << "\tBoom Box, part number S147-29A\n";
    std::cout << "\tShelf Model, part number S147-29B\n";
    std::cout << "Enter the part number of the stereo you\n";
    std::cout << "wish to purchase: ";
    std::cin >> partNum;
    std::cout << std::fixed << std::showpoint << std::setprecision(2);

    if (partNum == "S147-29A")
        std::cout << "The price is $" << APRICE << std::endl;
    else if (partNum == "S147-29B")
        std::cout << "The price is $" << BPRICE << std::endl;
    else
        std::cout << partNum << " is not a valid part number.\n";

    return 0;
}