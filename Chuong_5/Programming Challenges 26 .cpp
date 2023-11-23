#include <iostream>
#include <fstream>

int main() {
    const double INTEREST_RATE = 0.05;  // Lãi suất hàng năm
    double balance;  // Số dư ban đầu
    int numMonths;  // Số tháng tiết kiệm
    std::ofstream outputFile("SavingsReport.txt");  // Tạo tập tin đầu ra "SavingsReport.txt"

    // Nhập số dư ban đầu và số tháng tiết kiệm
    std::cout << "Nhập số dư ban đầu: ";
    std::cin >> balance;
    std::cout << "Nhập số tháng tiết kiệm: ";
    std::cin >> numMonths;

    // Ghi tiêu đề báo cáo vào tập tin
    outputFile << "Báo cáo số dư tiết kiệm" << std::endl;
    outputFile << "Số dư ban đầu: " << balance << std::endl;
    outputFile << "Số tháng tiết kiệm: " << numMonths << std::endl;
    outputFile << "---------------------------" << std::endl;

    // Tính toán và ghi thông tin về số dư hàng tháng vào tập tin
    for (int month = 1; month <= numMonths; month++) {
        balance += balance * INTEREST_RATE;
        outputFile << "Tháng " << month << ": " << balance << std::endl;
    }

    // Đóng tập tin
    outputFile.close();

    std::cout << "Báo cáo cuối cùng đã được ghi vào tập tin SavingsReport.txt." << std::endl;

    return 0;
}