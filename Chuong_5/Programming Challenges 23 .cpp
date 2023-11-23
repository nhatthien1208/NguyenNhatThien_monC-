#include <iostream>

int main() {
    int rows;

    std::cout << "Nhập số hàng: ";
    std::cin >> rows;

    // Hiển thị Pattern A
    std::cout << "Pattern A:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            std::cout << "+";
        }
        std::cout << std::endl;
    }

    // Hiển thị Pattern B
    std::cout << "Pattern B:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = i; j < rows; j++) {
            std::cout << "+";
        }
        std::cout << std::endl;
    }

    return 0;
}