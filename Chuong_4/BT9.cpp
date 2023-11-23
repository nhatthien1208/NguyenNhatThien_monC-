#include <iostream>

int main() {
    int pennies, nickels, dimes, quarters;
    double totalAmount;

    std::cout << "Nhập số đồng xu 1 xu: ";
    std::cin >> pennies;

    std::cout << "Nhập số đồng xu 5 xu: ";
    std::cin >> nickels;

    std::cout << "Nhập số đồng xu 10 xu: ";
    std::cin >> dimes;

    std::cout << "Nhập số đồng xu 25 xu: ";
    std::cin >> quarters;

    totalAmount = pennies * 0.01 + nickels * 0.05 + dimes * 0.1 + quarters * 0.25;

    if (totalAmount == 1.0) {
        std::cout << "Chúc mừng! Bạn đã thắng trò chơi." << std::endl;
    }
    else if (totalAmount < 1.0) {
        std::cout << "Số tiền đã nhập ít hơn một đô la." << std::endl;
    }
    else {
        std::cout << "Số tiền đã nhập nhiều hơn một đô la." << std::endl;
    }

    return 0;
}