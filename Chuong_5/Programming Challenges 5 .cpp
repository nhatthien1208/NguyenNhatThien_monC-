#include <iostream>
#include <iomanip>

int main() {
    const double initialFee = 2500.0; // Mức phí ban đầu
    const double increaseRate = 0.04; // Tỷ lệ tăng 4%

    double membershipFee = initialFee;

    std::cout << "Năm\tMức phí hội viên\n";
    std::cout << "------------------------\n";

    for (int year = 1; year <= 6; year++) {
        membershipFee += membershipFee * increaseRate;
        std::cout << year << "\t" << std::fixed << std::setprecision(2) << membershipFee << "\n";
    }

    return 0;
}