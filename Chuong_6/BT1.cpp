#include <iostream>

double CalculateRetail(double wholesaleCost, double markupPercentage) {
    if (wholesaleCost < 0 || markupPercentage < 0) {
        std::cout << "Giá trị không hợp lệ." << std::endl;
        exit(0);
    }

    double retailPrice = wholesaleCost + (wholesaleCost * markupPercentage / 100);
    return retailPrice;
}

int main() {
    double wholesaleCost, markupPercentage;

    std::cout << "Nhập giá bán buôn của mặt hàng: $";
    std::cin >> wholesaleCost;

    std::cout << "Nhập tỷ lệ phần trăm tăng giá: ";
    std::cin >> markupPercentage;

    double retailPrice = CalculateRetail(wholesaleCost, markupPercentage);

    std::cout << "Giá bán lẻ của mặt hàng là: $" << retailPrice << std::endl;

    return 0;
}