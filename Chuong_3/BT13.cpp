#include <iostream>
#include <iomanip>

const double YEN_PER_DOLLAR = 98.93;
const double EUROS_PER_DOLLAR = 0.74;

int main() {
    double dollarAmount;

    std::cout << "Nhap so tien do la My: $";
    std::cin >> dollarAmount;

    double yenAmount = dollarAmount * YEN_PER_DOLLAR;
    double euroAmount = dollarAmount * EUROS_PER_DOLLAR;

    std::cout << "So tien tuong ung trong yen: " << std::fixed << std::setprecision(2) << yenAmount << " Yen\n";
    std::cout << "So tien tuong ung trong euro: " << std::fixed << std::setprecision(2) << euroAmount << " Euro\n";

    return 0;
}