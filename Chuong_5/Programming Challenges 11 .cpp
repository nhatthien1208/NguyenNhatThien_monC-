#include <iostream>

int main() {
    int startingPopulation;
    double dailyIncrease;
    int numDays;

    std::cout << "Nhập số lượng sinh vật ban đầu: ";
    std::cin >> startingPopulation;

    while (startingPopulation < 2) {
        std::cout << "Số lượng sinh vật ban đầu không hợp lệ. Vui lòng nhập số lượng lớn hơn hoặc bằng 2: ";
        std::cin >> startingPopulation;
    }

    std::cout << "Nhập tỷ lệ tăng dân số hàng ngày (%): ";
    std::cin >> dailyIncrease;

    while (dailyIncrease < 0) {
        std::cout << "Tỷ lệ tăng dân số hàng ngày không hợp lệ. Vui lòng nhập một số không âm: ";
        std::cin >> dailyIncrease;
    }

    std::cout << "Nhập số ngày nhân lên: ";
    std::cin >> numDays;

    while (numDays < 1) {
        std::cout << "Số ngày nhân lên không hợp lệ. Vui lòng nhập một số lớn hơn 0: ";
        std::cin >> numDays;
    }

    std::cout << "Kích thước dân số theo từng ngày:\n";
    int population = startingPopulation;
    for (int day = 1; day <= numDays; day++) {
        std::cout << "Ngày " << day << ": " << population << " sinh vật\n";
        population += population * (dailyIncrease / 100);
    }

    return 0;
}