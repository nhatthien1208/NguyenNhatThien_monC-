#include <iostream>

int main() {
    int seconds;

    std::cout << "Nhap so giay: ";
    std::cin >> seconds;

    if (seconds >= 86400) {
        int days = seconds / 86400;
        std::cout << "So ngay: " << days << std::endl;
        seconds %= 86400; 
    }

    if (seconds >= 3600) {
        int hours = seconds / 3600;
        std::cout << "So gio: " << hours << std::endl;
        seconds %= 3600; 

    if (seconds >= 60) {
        int minutes = seconds / 60;
        std::cout << "So phut: " << minutes << std::endl;
        seconds %= 60; 
    }

    std::cout << "So giay: " << seconds << std::endl;

    return 0;
}