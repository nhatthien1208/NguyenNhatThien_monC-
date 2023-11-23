#include <iostream>

double calculateInpatientCost(int days, double dailyRate, double medicationCost, double serviceFee)
{
    if (days < 0 || dailyRate < 0 || medicationCost < 0 || serviceFee < 0) {
        std::cout << "Dữ liệu không hợp lệ." << std::endl;
        return -1.0;
    }

    double totalCost = days * dailyRate + medicationCost + serviceFee;
    return totalCost;
}

double calculateOutpatientCost(double medicationCost, double serviceFee)
{
    if (medicationCost < 0 || serviceFee < 0) {
        std::cout << "Dữ liệu không hợp lệ." << std::endl;
        return -1.0;
    }

    double totalCost = medicationCost + serviceFee;
    return totalCost;
}

int main()
{
    int patientType;
    double dailyRate, medicationCost, serviceFee;
    int days;

    std::cout << "Bệnh nhân là bệnh nhân nội trú hay bệnh nhân ngoại trú? (1 - Bệnh nhân nội trú, 2 - Bệnh nhân ngoại trú): ";
    std::cin >> patientType;

    if (patientType == 1) {
        std::cout << "Nhập số ngày nằm viện: ";
        std::cin >> days;

        std::cout << "Nhập tỷ giá hàng ngày: $";
        std::cin >> dailyRate;

        std::cout << "Nhập tiền thuốc bệnh viện: $";
        std::cin >> medicationCost;

        std::cout << "Nhập phí dịch vụ bệnh viện: $";
        std::cin >> serviceFee;

        double totalCost = calculateInpatientCost(days, dailyRate, medicationCost, serviceFee);

        if (totalCost >= 0) {
            std::cout << "Tổng chi phí nằm viện của bệnh nhân: $" << totalCost << std::endl;
        }
    }
    else if (patientType == 2) {
        std::cout << "Nhập tiền thuốc bệnh viện: $";
        std::cin >> medicationCost;

        std::cout << "Nhập phí dịch vụ bệnh viện: $";
        std::cin >> serviceFee;

        double totalCost = calculateOutpatientCost(medicationCost, serviceFee);

        if (totalCost >= 0) {
            std::cout << "Tổng chi phí ngoại trú của bệnh nhân: $" << totalCost << std::endl;
        }
    }
    else {
        std::cout << "Lựa chọn không hợp lệ." << std::endl;
    }

    return 0;
}