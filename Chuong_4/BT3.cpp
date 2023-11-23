#include <iostream>

bool isMagicalDate(int day, int month, int year) {
    return (day * month) == year;
}

int main() {
    int day, month, year;

    std::cout << "Nhap ngay: ";
    std::cin >> day;

    std::cout << "Nhap thang: ";
    std::cin >> month;

    std::cout << "Nhap nam: ";
    std::cin >> year;

    if (isMagicalDate(day, month, year)) {
        std::cout << "Day la mot ngay ky dieu!\n";
    }
    else {
        std::cout << "Day khong phai la mot ngay ky dieu.\n";
    }

    return 0;
}