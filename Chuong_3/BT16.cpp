#include <iostream>
#include <iomanip>

const double ASSESSMENT_PERCENTAGE = 0.6;   
const double PREVIOUS_TAX_RATE = 0.0264;     
const double EXEMPTION_AMOUNT = 5000.0;      

int main() {
    double actualValue;
    double currentTaxRate;

    std::cout << "Nhap gia tri that cua tai san: $";
    std::cin >> actualValue;

    std::cout << "Nhap muc thue hien hanh cho moi $100 gia tri danh gia: $";
    std::cin >> currentTaxRate;

    double assessedValue = actualValue * ASSESSMENT_PERCENTAGE - EXEMPTION_AMOUNT;
    double propertyTaxAnnual = assessedValue / 100 * currentTaxRate;
    double propertyTaxQuarterly = propertyTaxAnnual / 4;

    std::cout << "Muc thue bat dong san hang nam: $" << std::fixed << std::setprecision(2) << propertyTaxAnnual << std::endl;
    std::cout << "Hoa don thue hang quy: $" << std::fixed << std::setprecision(2) << propertyTaxQuarterly << std::endl;

    return 0;
}