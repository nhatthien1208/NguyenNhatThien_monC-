#include <iostream>

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    void printDate1() {
        std::cout << month << "/" << day << "/" << year << std::endl;
    }

    void printDate2() {
        std::cout << "Ngày " << day << " tháng " << month << " năm " << year << std::endl;
    }

    void printDate3() {
        std::cout << day << " tháng " << month << " năm " << year << std::endl;
    }
};

int main() {
    int day, month, year;

    std::cout << "Nhập ngày: ";
    std::cin >> day;

    std::cout << "Nhập tháng: ";
    std::cin >> month;

    std::cout << "Nhập năm: ";
    std::cin >> year;

   
    if (day < 1 || day > 31 || month < 1 || month > 12) {
        std::cout << "Đầu vào không hợp lệ!" << std::endl;
        return 1;
    }

    Date date(day, month, year);

    std::cout << "Ngày theo dạng 25/12/2014: ";
    date.printDate1();

    std::cout << "Ngày theo dạng Ngày 25 tháng 12 năm 2014: ";
    date.printDate2();

    std::cout << "Ngày theo dạng 25 tháng 12 năm 2014: ";
    date.printDate3();

    return 0;
}