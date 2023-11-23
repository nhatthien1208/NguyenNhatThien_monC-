#include <iostream>

int main() {
    double num1, num2;

    std::cout << "Nhap vao so thu nhat: ";
    std::cin >> num1;

    std::cout << "Nhap vao so thu hai: ";
    std::cin >> num2;

    double minNum = (num1 < num2) ? num1 : num2;
    double maxNum = (num1 > num2) ? num1 : num2;

    std::cout << "So nho hon la: " << minNum << std::endl;
    std::cout << "So lon hon la: " << maxNum << std::endl;

    return 0;
}