#include <iostream>

bool isLeapYear(int year) {
    if (year % 100 == 0) {
        return year % 400 == 0;
    }
    else {
        return year % 4 == 0;
    }
}

int getDaysInMonth(int month, int year) {
    switch (month) {
    case 1:
    case 3: 
    case 5: 
    case 7: 
    case 8: 
    case 10: 
    case 12:
        return 31;
    case 4: 
    case 6: 
    case 9: 
    case 11: 
        return 30;
    case 2: 
        if (isLeapYear(year)) {
            return 29;
        }
        else {
            return 28;
        }
    default:
        return -1; 
    }
}

int main() {
    int month, year;

    std::cout << "Nhập tháng (1-12): ";
    std::cin >> month;

    std::cout << "Nhập năm: ";
    std::cin >> year;

    int daysInMonth = getDaysInMonth(month, year);

    if (daysInMonth == -1) {
        std::cout << "Tháng không hợp lệ." << std::endl;
    }
    else {
        std::cout << daysInMonth << " ngày." << std::endl;
    }

    return 0;
}