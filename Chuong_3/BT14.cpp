#include <iostream>
#include <iomanip>
#include <string>

const double STATE_TAX_RATE = 0.04; 
const double COUNTY_TAX_RATE = 0.02; 

int main() {
    int month, year;
    double totalRevenue;

    std::cout << "Nhap thang: ";
    std::cin >> month;

    std::cout << "Nhap nam: ";
    std::cin >> year;

    std::cout << "Nhap tong so tien thu duoc: $";
    std::cin >> totalRevenue;

    double salesRevenue = totalRevenue / 1.06;
    double countyTax = salesRevenue * COUNTY_TAX_RATE;
    double stateTax = salesRevenue * STATE_TAX_RATE;
    double totalTax = countyTax + stateTax;

    std::cout << "Thang: Thang " << month << std::endl;
    std::cout << "--------------------" << std::endl;
    std::cout << "Tong so tien thu duoc: $" << std::fixed << std::setprecision(2) << totalRevenue << std::endl;
    std::cout << "Doanh thu: $" << std::fixed << std::setprecision(2) << salesRevenue << std::endl;
    std::cout << "Thue ban hang cua quan: $" << std::fixed << std::setprecision(2) << countyTax << std::endl;
    std::cout << "Thue ban hang cua tieu bang: $" << std::fixed << std::setprecision(2) << stateTax << std::endl;
    std::cout << "Tong thue ban hang: $" << std::fixed << std::setprecision(2) << totalTax << std::endl;

    return 0;
}