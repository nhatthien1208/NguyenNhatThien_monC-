#include <iostream>

int main() {
    double annualInterestRate, startingBalance;
    int numMonths;
    double totalDeposits = 0.0, totalWithdrawals = 0.0, totalInterest = 0.0;
    double balance = 0.0;

    std::cout << "Nhập thông tin tài khoản tiết kiệm:\n";

    std::cout << "Lãi suất hàng năm: ";
    std::cin >> annualInterestRate;

    std::cout << "Số dư ban đầu: ";
    std::cin >> startingBalance;

    std::cout << "Số tháng đã trôi qua: ";
    std::cin >> numMonths;

    double monthlyInterestRate = annualInterestRate / 12;

    for (int i = 1; i <= numMonths; i++) {
        double deposit, withdrawal;

        std::cout << "Số tiền gửi trong tháng " << i << ": ";
        std::cin >> deposit;

        if (deposit < 0) {
            std::cout << "Số tiền gửi không hợp lệ. Vui lòng nhập lại.\n";
            i--; // Giảm i xuống để lặp lại vòng lặp cho tháng hiện tại
            continue;
        }

        std::cout << "Số tiền rút trong tháng " << i << ": ";
        std::cin >> withdrawal;

        if (withdrawal < 0) {
            std::cout << "Số tiền rút không hợp lệ. Vui lòng nhập lại.\n";
            i--; // Giảm i xuống để lặp lại vòng lặp cho tháng hiện tại
            continue;
        }

        balance += deposit - withdrawal;
        totalDeposits += deposit;
        totalWithdrawals += withdrawal;

        double monthlyInterest = balance * monthlyInterestRate;
        balance += monthlyInterest;
        totalInterest += monthlyInterest;
    }

    std::cout << "Số dư tài khoản vào cuối kỳ: " << balance << std::endl;
    std::cout << "Tổng số tiền gửi: " << totalDeposits << std::endl;
    std::cout << "Tổng số tiền rút: " << totalWithdrawals << std::endl;
    std::cout << "Tổng lãi suất đã kiếm được: " << totalInterest << std::endl;

    return 0;
}