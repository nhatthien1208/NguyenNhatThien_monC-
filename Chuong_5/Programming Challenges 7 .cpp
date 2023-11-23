#include <iostream>
#include <iomanip>

int main() {
    int days;

    std::cout << "Enter the number of days: ";
    std::cin >> days;

    while (days < 1) {
        std::cout << "Number of days cannot be less than 1. Please enter a valid value: ";
        std::cin >> days;
    }

    double totalPay = 0.0;
    double salary = 0.01;

    std::cout << "Day\tSalary\n";
    std::cout << "------------------------\n";

    for (int day = 1; day <= days; day++) {
        totalPay += salary;
        std::cout << day << "\t$" << std::fixed << std::setprecision(2) << salary << "\n";
        salary *= 2;
    }

    std::cout << "------------------------\n";
    std::cout << "Total Pay: $" << std::fixed << std::setprecision(2) << totalPay << "\n";

    return 0;
}