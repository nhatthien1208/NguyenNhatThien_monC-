#include <iostream>

int main() {
    double budget;
    double expense;
    double totalExpense = 0.0;

    std::cout << "Nhập số tiền bạn dự kiến cho một tháng: $";
    std::cin >> budget;

    char choice;
    do {
        std::cout << "Nhập số tiền cho chi phí hàng tháng (nhập 0 để kết thúc): $";
        std::cin >> expense;
        totalExpense += expense;

        std::cout << "Bạn có muốn nhập một chi phí khác không? (y/n): ";
        std::cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    double difference = totalExpense - budget;

    std::cout << "Tổng số tiền đã chi: $" << totalExpense << std::endl;
    if (difference > 0) {
        std::cout << "Bạn đã vượt quá ngân sách $" << difference << std::endl;
    }
    else if (difference < 0) {
        std::cout << "Bạn đã chi dưới ngân sách $" << -difference << std::endl;
    }
    else {
        std::cout << "Bạn đã chi đúng ngân sách." << std::endl;
    }

    return 0;
}