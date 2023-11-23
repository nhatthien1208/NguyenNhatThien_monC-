#include <iostream>

int main() {
    const double calorieBurnRate = 3.6; // calo mỗi phút

    std::cout << "Phút\tCalo Đốt Cháy\n";
    std::cout << "------------------------\n";

    for (int minutes = 5; minutes <= 30; minutes += 5) {
        double caloriesBurned = calorieBurnRate * minutes;
        std::cout << minutes << "\t" << caloriesBurned << "\n";
    }

    return 0;
}