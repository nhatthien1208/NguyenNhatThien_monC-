#include <iostream>

int main() {
    const double riseRate = 1.5; // millimeters per year

    std::cout << "Year\tOcean Rise (mm)\n";
    std::cout << "----------------------\n";

    for (int year = 1; year <= 25; year++) {
        double oceanRise = riseRate * year;
        std::cout << year << "\t" << oceanRise << "\n";
    }

    return 0;
}