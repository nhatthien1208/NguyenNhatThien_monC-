#include <iostream>
#include <iomanip>

const double ASSESSMENT_PERCENTAGE = 0.6;   
const double TAX_RATE = 0.0075;             

int main() {
    double actualValue;

    std::cout << "Nhap gia tri that cua tai san: $";
    std::cin >> actualValue;

    double assessedValue = actualValue * ASSESSMENT_PERCENTAGE;
    double propertyTax = assessedValue / 100 * TAX_RATE;

    std::cout << "Gia tri danh gia cua tai san: $" << std::fixed << std::setprecision(2) << assessedValue << std::endl;
    std::cout << "Thue tai san: $" << std::fixed << std::setprecision(2) << propertyTax << std::endl;

    return 0;
}