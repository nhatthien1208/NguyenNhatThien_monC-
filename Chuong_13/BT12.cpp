#include <iostream>

class PayRoll {
private:
    double hourlyRate;
    double hoursWorked;
    double totalPay;

public:
    PayRoll() {
        hourlyRate = 0.0;
        hoursWorked = 0.0;
        totalPay = 0.0;
    }

    void setHourlyRate(double rate) {
        hourlyRate = rate;
    }

    void setHoursWorked(double hours) {
        if (hours >= 0 && hours <= 60) {
            hoursWorked = hours;
        }
        else {
            std::cout << "Số giờ làm việc không hợp lệ!" << std::endl;
        }
    }

    void calculatePay() {
        totalPay = hourlyRate * hoursWorked;
    }

    double getTotalPay() const {
        return totalPay;
    }
};

int main() {
    const int numEmployees = 7;
    PayRoll employees[numEmployees];

    double hourlyRate;
    double hoursWorked;

    for (int i = 0; i < numEmployees; i++) {
        std::cout << "Nhập mức lương theo giờ cho nhân viên " << i + 1 << ": ";
        std::cin >> hourlyRate;

        employees[i].setHourlyRate(hourlyRate);

        std::cout << "Nhập số giờ làm việc cho nhân viên " << i + 1 << ": ";
        std::cin >> hoursWorked;

        employees[i].setHoursWorked(hoursWorked);

        employees[i].calculatePay();
    }

    std::cout << "\nTổng số tiền lương mà mỗi nhân viên đã kiếm được:\n";
    for (int i = 0; i < numEmployees; i++) {
        std::cout << "Nhân viên " << i + 1 << ": " << employees[i].getTotalPay() << std::endl;
    }

    return 0;
}